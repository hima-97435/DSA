/*
Name -- Himanshu Pokhriyal
Date-->26 MArch,2024



Question--1) Sorting of a linked list
Link--> https://leetcode.com/problems/sort-list/submissions/1214972754/

Approach :
To sort the Linked list firstly , we will follow the approach of recursion 
the base kind for the recursion is :
 {  //base case
        if(head == NULL || head->next == NULL){
            return head;
        }  
        }
and then what we do is divide the linked list into two half by the help of middlenode function { in which we assign 2 pointer as slow--> head, fast--> head->next }
by this function we will get the middle node of the Linked List and we will assign amid pointer to it.
and a left pointer to head and right to head->next and also seperate both Linked list as mid->next = null
and what we will do call sort function once again with the arguments as left and same with right.
What it is doing is using Divide and Conqueror algorithm { What we are doing is giving left side Linked list and then break it and go on till base condition is meet.}
And after that we are merging left , right part
and then take return statement as merged ll from merging function.


Solution:
ListNode* middleNode(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(slow != NULL && fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
            }
        }

        return slow;
    }

        ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* merged = new ListNode(-1);
        ListNode* mptr = merged;
        ListNode* left = list1;
        ListNode* right = list2;

        while(left != NULL && right != NULL){
            if(left->val <= right->val){
                mptr->next = left;
                mptr = mptr->next;
                left = left->next;
            }
            else{
                mptr->next = right;
                mptr = mptr->next;
                right = right->next;
            }
        }

        while(left != NULL){
            mptr->next = left;
            mptr = mptr->next;
            left = left->next;
        }

        while(right != NULL){
            mptr->next = right;
            mptr = mptr->next;
            right = right->next;
        }

        return merged->next;
    }

    ListNode* sortList(ListNode* head) {

        //base case
        if(head == NULL || head->next == NULL){
            return head;
        }

        //divide the linked list
        ListNode* mid = middleNode(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;

        //recursive call for sorting
        left = sortList(left);
        right = sortList(right);

        //conquer the divied linked list
        ListNode* mergedLL = merge(left, right);
        return mergedLL;

        TIME COMPLEXITY --> O(m+n)+O(n)+O(logn) => O(nlogn)
        SPACE COMPLEXITY-->O(logn)

    }

    # Question--2) Sort linked list of 0s 1s 2s
    # Link--> https://www.naukri.com/code360/problems/sort-linked-list-of-0s-1s-2s_1071937?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

    # Approch 
    What we had did is 
    traversed in the whole Linked List and get the count of the 0,1,2 in Linked List by using a temproroay pointer.
    then what we will do is do back traversal in the linked list from starting and put curr-> data , as per the desired the result and then move curr pointer.

#Solution:
    
Node* sortList(Node *head){
   if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Count the occurrences of each value
    int count0 = 0, count1 = 0, count2 = 0;
    Node* current = head;
    while (current != nullptr) {
        if (current->data == 0) {
            count0++;
        } else if (current->data == 1) {
            count1++;
        } else if (current->data == 2) {
            count2++;
        }
        current = current->next;
    }

    // Reconstruct the linked list
    current = head;
    while (current != nullptr) {
        if (count0 > 0) {
            current->data = 0;
            count0--;
        } else if (count1 > 0) {
            current->data = 1;
            count1--;
        } else if (count2 > 0) {
            current->data = 2;
            count2--;
        }
        current = current->next;
    }

    return head;
}

        TIME COMPLEXITY --> O(n+n)=== O(2n) == O(n)
        SPACE COMPLEXITY-->O(1)

    # Question--3)  Intersection two Linked List


  * First approach would 
        Keep moving head pointer to next untill you reach to the Null and when you reach to Null
         you can just move to the next node of the another linked list and
          basically start the traversal again from 1 linked list head.

          node* intersectionPresent(node* head1,node* head2) {
    while(head2 != NULL) {
        node* temp = head1;
        while(temp != NULL) {
            //if both nodes are same
            if(temp == head2) return head2;
            temp = temp->next;
        }
        head2 = head2->next;
    }
    //intersection is not present between the lists return null
    return NULL;
}
    Time Complexity: O(m*n)
    Reason: For each node in list 2 entire lists 1 are iterated. 
    Space Complexity: O(1)

  ** Second Approach would 
    Basically we take the use of hashing
    what we  will do is we just iterate  in 1st Linked list and we will store the address of node in the set 
    and when traversal in the another linked list we will find that node we will return the desired answer.

    node* intersectionPresent(node* head1,node* head2) {
     unordered_set<node*> st;
    while(head1 != NULL) {
       st.insert(head1);
       head1 = head1->next;
    }
    while(head2 != NULL) {
        if(st.find(head2) != st.end()) return head2;
        head2 = head2->next;
    }
    return NULL;

}
    Time Complexity: O(n+m)
    Reason: Iterating through list 1 first takes O(n), then iterating through list 2 takes O(m). 
    Space Complexity: O(n)
    Reason: Storing list 1 node addresses in unordered_set.

    *** Third Approach would be 
    What we are doing here is 
    firstly calculating length of both LL
    and then subtract them from (LL1 to LL2)
    if positive that mean ( LL1 > LL2){**  In terms of size } 
    if negative then means ( LL2 > LL1 ) {**  In terms of size } 
    for now , i assume diff come to be positive so in that case i give head start to LL1 to move forward and at the same time i will decrement the diffence variable which i calculated earlier .
    and when diff becomes 0 we then iterate till the end of LL { But Kidhar tak ? Voh matter nhi karega bcz size ab dono ka same h bcz we reduced the diff so eventually size of both LL is same ,}
    and now we will move in both LL and where it meet it will the intersection point.

    # Solution:
    int getDifference(node* head1,node* head2) {
     int len1 = 0,len2 = 0;
        while(head1 != NULL || head2 != NULL) {
            if(head1 != NULL) {
                ++len1; head1 = head1->next;
            }
            if(head2 != NULL) {
                ++len2; head2 = head2->next;
            }
            
        }
        return len1-len2;//if difference is neg-> length of list2 > length of list1 else vice-versa
}

//utility function to check presence of intersection
node* intersectionPresent(node* head1,node* head2) {
 int diff = getDifference(head1,head2);
        if(diff < 0) 
            while(diff++ != 0) head2 = head2->next; 
        else while(diff-- != 0) head1 = head1->next;
        while(head1 != NULL) {
            if(head1 == head2) return head1;
            head2 = head2->next;
            head1 = head1->next;
        }
        return head1;


}
    Time Complexity:
    O(2max(length of list1,length of list2))+O(abs(length of list1-length of list2))+O(min(length of list1,length of list2))
    Reason: Finding the length of both lists takes max(length of list1, length of list2) because it is found simultaneously for both of them. Moving the head pointer ahead by a difference of them. The next one is for searching.
    Space Complexity: O(1)
    Reason: No extra space is used.

    **** Fourth Approach would be 
        Take two dummy nodes for each list. Point each to the head of the lists.
        Iterate over them. If anyone becomes null, point them to the head of the opposite lists and continue iterating until they collide.


    Solution:
        node* intersectionPresent(node* head1,node* head2) {
    node* d1 = head1;
    node* d2 = head2;
    
    while(d1 != d2) {
        d1 = d1 == NULL? head2:d1->next;
        d2 = d2 == NULL? head1:d2->next;
    }
    
    return d1;
}
    Time Complexity: O(2*max(length of list1,length of list2))
    Reason: Uses the same concept of the difference of lengths of two lists.
    Space Complexity: O(1)

    
        
        */