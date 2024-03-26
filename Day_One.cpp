/*
Name -- Himanshu Pokhriyal
Date-->26 MArch,2024


Question--1 Remove Nth Node from the end of Linked List
Link-->https://www.codingninjas.com/studio/problems/delete-kth-node-from-end_799912?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

// Approch 
a--> Brute 
We will do traversal in the whole Linked List and get the cnt variable 
and res=(cnt-k) { it will point to the node before the deletion node }
and basically then we traverse and reach that node 
and delete the node as be do.

TIME COMPLEXITY--> O(len)-O(len-k)
Space Complexity=0(1)

b--> Optimized version
we keep two pointer as fast , slow pointing to the head 
and first we will move fast by one step till K ( Which is being given in the function )
and after it reach there we will check a condition that is if ( fast == NULL) { which mean it is saying to delete the 1 Node of orginal _ Linked List } then return head->next;
And after that we move both the pointer untill the condition is meet that is (fast-> next  == NULL) 
and after traversal slow will point to the node before which has to be delted .
and we will do that basic step only 

# Solution

Node* removeKthNode(Node* head, int K)
{
 Node* fastp = head;
    Node* slowp = head;

    // Move the fastp pointer N nodes ahead
    for (int i = 0; i < K; i++)
        fastp = fastp->next;

    // If fastp becomes NULL,
    // the Nth node from the end is the head
    if (fastp == NULL)
        return head->next;

    // Move both pointers until fastp reaches the end
    while (fastp->next != NULL) {
        fastp = fastp->next;
        slowp = slowp->next;
    }

    // Delete the Nth node from the end
    Node* delNode = slowp->next;
    slowp->next = slowp->next->next;
    delete delNode;
    return head;
}

TIME COMPLEXITY--> O(len)
Space Complexity=0(1)

Question --> 2 Delete the moddle node of a linked list.
Link--> https://www.codingninjas.com/studio/problems/delete-middle-node_763267?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION
Link--> https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/submissions/1213997734/
    #Logic Building: 
It can be simply be solved by the approach of fast and slow pointer .
fast pointing to head->next
and slow to head
and basically move fast by two step and slow by 1 step untill we get condition is not meet that (fast->next && gast->next->next == Null)
and after that we will reach at that Node which has to dlete before it .
and then perform basics step as usual

// Solution:

Node* deleteMiddle(Node* head){
    // Write your code here.
    Node* slow=head;
    Node* fast =head->next;

    if( fast == NULL) return nullptr;
    while (fast->next != nullptr && fast->next->next != nullptr) {
      fast = fast->next->next;
      slow = slow->next;
    }
    Node* deleNode =slow->next;
    slow->next=slow->next->next;
    delete  deleNode;
    return head;
}

TIME COMPLEXITY--> O(N/2) == O(N)
Space Complexity=0(1)








*/