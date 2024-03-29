/*
Name --> Himanshu POkhriyal
Date --> 29 MArch,2024
Version --> 5.4


Question --1)  Find pairs with given sum in doubly linked list
Link --> https://www.naukri.com/code360/problems/find-pairs-with-given-sum-in-doubly-linked-list_1164172?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

# Approach --> 
What we are soing first if head == NULl then return pair 
if Not then 
the first and second pointer pointing to head
and iterate this second pointer to last node of the LL 
and then we baiscally iterate in a while until the condition is met 
Condition -> (left != nullptr && right != nullptr && left != right && right->next != left)
Here left is pointing to first node and second is pointing to the last Node of LL
and basically we add the data of both the nodes and store in a variable  called sum 
and then basically check 2,3 condition like 
    if sum == target_value then
    pairs.push_back({left->data, right->data});
                left = left->next;
                right = right->prev;
    else if sum < x
    left=left->next;
    else
    right=right->prev;

And then return pairs.

# Solution:
std::vector<std::pair<int, int>> findPairs(Node* head, int k) {
    std::vector<std::pair<int, int>> pairs;

    if (!head)
        return pairs;

    Node* left = head;
    Node* right = head;

    // Move right pointer to the end of the list
    while (right->next != nullptr)
        right = right->next;

    // Traverse the list until left meets right
    while (left != nullptr && right != nullptr && left != right && right->next != left) {
        int sum = left->data + right->data;
        if (sum == k) {
            pairs.push_back({left->data, right->data});
            left = left->next;
            right = right->prev;
        } else if (sum < k) {
            left = left->next;
        } else {
            right = right->prev;
        }
    }

    return pairs;
}

Time Complexity = 0(N)
Space Complexity= 0(N/2)


Question --2)  Remove duplicates from a sorted Doubly Linked List
Link -- https://www.naukri.com/code360/problems/remove-duplicates-from-a-sorted-doubly-linked-list_2420283?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

# Approach --> 
firstly we will check whether the head is pointing to null or not; if yes then return nullptr , if not then 
we just basically take a image of head pointer or we can say is keeping a curr pointer pointing to head;
and then we will basically iterate till current-> next  ==  nullptr
then what we will do check few condition like if curr->data == curr ->next->data 
    then basically you do is keep a pointer pointing to curr->next->next 
    and basically delete the link bw the curr and curr->next and 
    baiscally link the curr and curr->next->next.
    And on top of that if curr->next->next is not Null then only we have to link it will curr 
    { Because if we link the curr->next-> next <which is Null> then it simply mean their is no element in LL and we are pointing it to null. So its not to do condition.}
if Not then move curr pointer

And at last return the head;

# Solution:
Node * removeDuplicates(Node *head)
{
    if (!head)
        return nullptr;

    Node* current = head;

    // Traverse the list
    while (current->next != nullptr) {
        // If current node's data is equal to next node's data
        if (current->data == current->next->data) {
            Node* nextNext = current->next->next; // Store the next next node
            delete current->next; // Delete the duplicate node
            current->next = nextNext; // Adjust pointers to skip the deleted node
            if (nextNext) {
                nextNext->prev = current;
            }
        } else {
            // Move to the next node
            current = current->next;
        }
    }
    return head;
}   
Time Complexity -->  O(N)
Space Complexity --> O(1)

Question --3 ) Reverse LL in group of given size K
Link --> https://naukri.com/code360/problems/reverse-list-in-k-groups_983644?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

# Approach :
Step 1: Initialise a pointer `temp` to the head of the linked list. Using `temp`,
     traverse to the Kth Node iteratively.
Step 2: On reaching the Kth Node, preserve the Kth Node’s next node as `nextNode` 
    and set the Kth Node’s next pointer to `null`. 
    This effectively breaks the linked list in a smaller list 
    of size K that can be reversed and attached back.
Step 3: Treat this segment from `temp` to Kth Node as an individual linked list and reverse it.
     This can be done via the help of a helper function `reverseLinkedList` which has been discussed in detail in this article Reverse Linked List.
Step 4: The reversed linked list segment returns a modified list with `temp` now at its tail 
     and the `KthNode` pointing to its head. Update the `temp`s `next` pointer to `nextNode`.
        If we are at the first segment of K nodes, update the head to `Kth Node`.
Step 5: Continue this reversal for further groups. If a segment has fewer than K Nodes,
     leave them unmodified and return the new head. 
     Use the prevLast pointer to maintain the link between the
     end of the previous reversed segment and the current segment.

# Solution:
Node* reverseLinkedList(Node *head)
{
   // Initialize'temp' at
   // head of linked list
   Node* temp = head;  
   
   // Initialize pointer 'prev' to NULL,
   // representing the previous node
   Node* prev = NULL;  
   
   // Traverse the list, continue till
   // 'temp' reaches the end (NULL)
   while(temp != NULL){  
       // Store the next node in
       // 'front' to preserve the reference
       Node* front = temp->next;  
       
       // Reverse the direction of the
       // current node's 'next' pointer
       // to point to 'prev'
       temp->next = prev;  
       
        // Move 'prev' to the current
        // node for the next iteration
       prev = temp;  
       
        // Move 'temp' to the 'front' node
        // advancing the traversal
       temp = front; 
   }
   
   // Return the new head of
   // the reversed linked list
   return prev;  
}

// Function to get the Kth node from
// a given position in the linked list
Node* getKthNode(Node* temp, int k){
    // Decrement K as we already
    // start from the 1st node
    k -= 1; 

    // Decrement K until it reaches
    // the desired position
    while(temp != NULL && k > 0){
        // Decrement k as temp progresses
        k--; 
        
        // Move to the next node
        temp = temp -> next; 
    }
    
    // Return the Kth node
    return temp; 
}

// Function to reverse nodes in groups of K
Node* kReverse(Node* head, int k){
    // Initialize a temporary
    // node to traverse the list
    Node* temp = head; 

    // Initialize a pointer to track the
    // ;ast node of the previous group
    Node* prevLast = NULL; 
    
    // Traverse through the linked list
    while(temp != NULL){
        // Get the Kth node of the current group
        Node* kThNode = getKthNode(temp, k); 

        // If the Kth node is NULL
        // (not a complete group)
        if(kThNode == NULL){
            // If there was a previous group,
            // link the last node to the current node
            if(prevLast){
                prevLast -> next = temp; 
            }
            
            // Exit the loop
            break; 
        }
        
        // Store the next node
        // after the Kth node
        Node* nextNode = kThNode -> next; 

        // Disconnect the Kth node
        // to prepare for reversal
        kThNode -> next = NULL; 

        // Reverse the nodes from
        // temp to the Kth node
        reverseLinkedList(temp); 
        
        // Adjust the head if the reversal
        // starts from the head
        if(temp == head){
            head = kThNode;
        }else{
            // Link the last node of the previous
            // group to the reversed group
            prevLast -> next = kThNode; 
        }

        // Update the pointer to the
        // last node of the previous group
        prevLast = temp; 

        // Move to the next group
        temp = nextNode; 
    }
    
    // Return the head of the
    // modified linked list
    return head; 
}

Time Complexity -->  O(2N)
Space Complexity --> O(1)



*/