/* 
Name --> Himanshu Pokhriyal
Date--> 28 MArch, 2024
Version--> 5.4 (C++ {g++})

Question--1) Add one to the Linked List.
Link--> https://www.naukri.com/code360/problems/add-one-to-a-number-represented-as-linked-list_920557?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

//  Approch-->
We first reverse the Linked list and then we'll do is simple addition and then converting back it to orginial order.

# Solution:
Node *reverse(Node *head) 
{ 
    Node * prev = NULL; 
    Node * current = head; 
    Node * next; 
    while (current != NULL) 
    { 
        next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
    } 
    return prev; 
} 


Node *addOneUtil(Node *head) 
{ 
    // res is head node of the resultant list 
    Node* res = head; 
    Node *temp; 
 
    int carry = 1, sum; 
 
    while (head != NULL) //while both lists exist 
    { 
        // Calculate value of next digit in resultant list. 
        // The next digit is sum of following things 
        // (i) Carry 
        // (ii) Next digit of head list (if there is a 
        // next digit) 
        sum = carry + head->data; 
 
        // update carry for next calculation 
        carry = (sum >= 10)? 1 : 0; 
 
        // update sum if it is greater than 10 
        sum = sum % 10; 
 
        // Create a new node with sum as data 
        head->data = sum; 
 
        // Move head and second pointers to next nodes 
        temp = head; 
        head = head->next; 
    } 
 
    // if some carry is still there, add a new node to 
    // result list.
    if (carry > 0) {
        temp->next = new Node(carry);
    }
    // return head of the resultant list 
    return res; 
} 
 
// This function mainly uses addOneUtil(). 
Node* addOne(Node *head) 
{ 
    // Reverse linked list 
    head = reverse(head); 
 
    // Add one from left to right of reversed 
    // list 
    head = addOneUtil(head); 
 
    // Reverse the modified list 
    return reverse(head); 
} 

Time Complexity:O(N)+O(N) +O(N) == O(N)
Space Complexity : O(1)

Question-- 2) Add Rwo number in a linked list.
Link --> https://www.naukri.com/code360/problems/add-two-numbers_1170520?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

#Approach:
Create a dummy node which is the head of new linked list.
Create a node temp, initialise it with dummy.
Initialize carry to 0.
Loop through lists l1 and l2 until you reach both ends, and until carry is present.
Set sum=l1.val+ l2.val + carry.
Update carry=sum/10.
Create a new node with the digit value of (sum%10) and set it to temp node’s next, then advance temp node to next.
Advance both l1 and l2.
Return dummy’s next node.

# Solution:
 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(); 
        ListNode *temp = dummy; 
        int carry = 0;
        while( (l1 != NULL || l2 != NULL) || carry) {
            int sum = 0; 
            if(l1 != NULL) {
                sum += l1->val; 
                l1 = l1 -> next; 
            }
            
            if(l2 != NULL) {
                sum += l2 -> val; 
                l2 = l2 -> next; 
            }
            
            sum += carry; 
            carry = sum / 10; 
            ListNode *node = new ListNode(sum % 10); 
            temp -> next = node; 
            temp = temp -> next; 
        }
        return dummy -> next; 
    }
Time Complexity:O(max(l1,l2)) 
Space Complexity : O(max(l1,l2)) + 1

# Question --3)  Delete all occurrences of a given key in a doubly linked list
Link --> https://www.naukri.com/code360/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list_8160461?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

# Approach--> 
What we are doing is interating in  a whole LL 
and whenever we get the same value as asked to delete in the parameter , 
it basically calls another function which deletes that value and and re arrange the array as per the scenario.

# Solution:

Node* delete_the_value(Node* original_head, Node* At_which_head_to_delete) {
    Node* previous = At_which_head_to_delete->prev;
    Node* front = At_which_head_to_delete->next;

    if (previous == nullptr) {
        delete At_which_head_to_delete;
        if (front != nullptr) {
            front->prev = nullptr;
        }
        return front;
    } else if (front == nullptr) {
        delete At_which_head_to_delete;
        previous->next = nullptr;
        return original_head;
    }

    previous->next = front;
    front->prev = previous;
    delete At_which_head_to_delete;
    return original_head;
}

Node* deleteAllOccurrences(Node* head, int k) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == k) {
            head = delete_the_value(head, temp);
            temp = head; // Reset temp to head after deletion
        } else {
            temp = temp->next;
        }
    }
    return head;
}
 Time complexity--> O(N)
 Space Complexity --> O(1)
 




*/