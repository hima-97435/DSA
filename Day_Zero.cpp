// NAme --> Himanshu Pokhriyal
// Date--> 25 MArch, 2024

#include<bits/stdc++.h>

// TAke you forward(TUF) Linked List Medium Problem:

// Question 1--> Check whether linkedlist is a palindrome or not
// Link-->https://www.codingninjas.com/studio/problems/check-if-linked-list-is-palindrome_985248?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

// Solution:
/* 
We will firstly check whether the Linked list contain  a single node / not node  not , 
if yes then return true{ because if there is a single node/no node  in the linked list that mean it is a palindrome right, for Example 1,2,3,...  }
Then we do is assign two pointer to the head naming as slow , fast  and as name suggest slow move one step at a time and fast two step at a time.
And it will run till the condition does not match which is (fast->next && fast->next->next == NULL)
and then we basically reverse the LL taking head as  (slow->next){ By this we are getting  a LL which is being reversed after half of the Linked List }
And then assign a first pointer with head of orginial ll and second as reverse LL head .
And we will check till (second != NULL)  if in between this we found out that first->data ! = second->data then return false.
Else return true.
*/
// Node* reverseLinkedList(Node* head) {
//     // Check if the list is empty
//     // or has only one node
//     if (head == NULL || head->next == NULL) {
        
//         // No change is needed;
//         // return the current head
//         return head; 
//     }

//     // Recursive step: Reverse the remaining 
//     // part of the list and get the new head
//     Node* newHead = reverseLinkedList(head->next);

//     // Store the next node in 'front'
//     // to reverse the link
//     Node* front = head->next;

//     // Update the 'next' pointer of 'front' to
//     // point to the current head, effectively
//     // reversing the link direction
//     front->next = head;

//     // Set the 'next' pointer of the
//     // current head to 'null' to
//     // break the original link
//     head->next = NULL;

//     // Return the new head obtained
//     // from the recursion
//     return newHead;
// }
// bool isPalindrome(Node *head)
// {
//     // write your code here
//     if (head == NULL || head->next == NULL) {
        
//          // It's a palindrome by definition
//         return true; 
//     }
//   Node* slow = head;
//     Node* fast = head;
    
  
//     while (fast->next != NULL && fast->next->next != NULL) {
        
        
//         slow = slow->next;  
        
        
//         fast = fast->next->next;  
//     }
//     Node* newHead = reverseLinkedList(slow->next);
    
   
//     Node* first = head;  
    
     
//     Node* second = newHead; 
//     while (second != NULL) {
        

//         if (first->data != second->data) {

         
//           reverseLinkedList(newHead);

      
//           return false;
//         }

        
//         first = first->next;

      
//         second = second->next;
//     }

   
//     reverseLinkedList(newHead);

   
//     return true;
// }

// Question--2)
/* 
Segerate the even and odd Node in a linked lIst
Link --> https://www.codingninjas.com/studio/problems/segregate-even-and-odd-nodes-in-a-linked-list_1116100?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
Basically what we are doing is making a even node Linked List and at same time we re making a odd Node linked List 
and basically we are combining them at last and returning it .
    

//
Solution: 
Node* segregateEvenOdd(Node* head)
{
    // Write your code here
     if (!head || !head->next) {
        return head;
    }

    Node* evenHead = new Node(0);
    Node* oddHead = new Node(0);
    Node* evenTail = evenHead;
    Node* oddTail = oddHead;

    Node* current = head;

    while (current) {
        if (current->data % 2 == 0) {
            evenTail->next = current;
            evenTail = evenTail->next;
        } else {
            oddTail->next = current;
            oddTail = oddTail->next;
        }
        current = current->next;
    }

    evenTail->next = oddHead->next;
    oddTail->next = nullptr;

    Node* newHead = evenHead->next;

    delete evenHead;
    delete oddHead;

    return newHead;
}

*/



