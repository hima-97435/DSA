/*
NAme -- Himanshu Pokhriyal
DAte -- 30 MArch,2024
Version --> 5.4

Question --1) Rotate LL
Link --> https://www.naukri.com/code360/problems/rotate-linked-list_920454?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

# Approach :

and then we have to iterate from 0->k { you will get why i am doing this .}
Firstly keep a temp pointer pointing to head;
and basically then apply a while till we get to the second last node of LL
after that we have to point temp->next to a new pointer (end)
and then temp ka next to NULL
and after that end ka next == head;
and then head =end;

{** We are iterating till k because to basically take the last node of LL and add it to the front of head and 
why so beacuse we have to make to rotate the LL  kth from back 
and therefore for k times till it will take last k Node and link it to the head of orginal LL
}

# Solution:
Node* rotateRight(node* head,int k) {
    if(head == NULL||head->next == NULL) return head;
    for(int i=0;i<k;i++) {
        Node* temp = head;
        while(temp->next->next != NULL) temp = temp->next;
        Node* end = temp->next;
        temp->next = NULL;
        end->next = head;
        head = end;
    }
    return head;
}

Time COmplexity :O(Number of nodes present in the list*k)
Space Complexity:O(1)

# The Problem with this is code is if we have to change the LL by let say 20000 or more bigger Number then it will take more time complexity:

for that we will do is make k =k%(Length of LL)
why so becasuse  LL after the length functions same as the k value ,
like it means it baiscally repeats its nature after Length of LL.


# Optimal Version:
Steps to the algorithm:-

Calculate the length of the list.
Connect the last node to the first node, converting it to a circular linked list.
Iterate to cut the link of the last node and start a node of k%length of the list rotated list.
# Solution:

Node* rotateRight(node* head,int k) {
    if(head == NULL||head->next == NULL||k == 0) return head;
    //calculating length
    Node* temp = head;
    int length = 1;
    while(temp->next != NULL) {
        ++length;
        temp = temp->next;
    }
    //link last node to first node
    temp->next = head;
    k = k%length; //when k is more than length of list
    int end = length-k; //to get end of the list
    while(end--) temp = temp->next;
    //breaking last node link and pointing to NULL
    head = temp->next;
    temp->next = NULL;
        
    return head;
}

Time COmplexity :O(length of list) + O(length of list - (length of list%k))
Space Complexity:O(1)

Question--2 Flatten the LL
Link --> https://www.naukri.com/code360/problems/flatten-a-linked-list_1112655?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

# Approach:
Refer to this --> https://youtu.be/ysytSSXpAI0
The process to flatten the given linked list is as follows:-

We will recurse until the head pointer moves null. The main motive is to merge each list from the last.
Merge each list chosen using the merge algorithm. The steps are
Create a dummy node. Point two pointers, i.e, temp and res on dummy node. res is to keep track of dummy node and temp pointer is to move ahead as we build the flattened list.
We iterate through the two chosen. Move head from any of the chosen lists ahead whose current pointed node is smaller. 
Return the new flattened list found.

# Solution:
Node* mergeTwoLists(Node* a, Node* b) {
    
    Node *temp = new Node(0);
    Node *res = temp; 
    
    while(a != NULL && b != NULL) {
        if(a->data < b->data) {
            temp->child = a; 
            temp = temp->child; 
            a = a->child; 
        }
        else {
            temp->child = b;
            temp = temp->child; 
            b = b->child; 
        }
    }
    
    if(a) temp->child = a; 
    else temp->child = b; 
    
    return res -> child; 
    
}


Node* flattenLinkedList(Node* root) 
{
	 if (root == NULL || root->next == NULL) 
            return root; 
  
        // recur for list on right 
        root->next = flattenLinkedList(root->next); 
  
        // now merge 
        root = mergeTwoLists(root, root->next); 
  
        // return the root 
        // it will be in turn merged with its left 
        return root;
}

Time Complexity:O(N)
Space COmplexity:O(1)







*/