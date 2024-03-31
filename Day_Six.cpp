/*
NAme --> Himanshu Pokhriyal
Date --> 31 MArcch, 2024
Version --> 5.4

Question --1)  Clone a Linked List with random pointers
Link --> https://www.naukri.com/code360/problems/clone-a-linked-list-with-random-pointers_983604?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

# Approach -I--> 
I got Approach  from --> https://youtu.be/VNf6VynfpdM

We will use a hash-map for keeping track of deep copies of every node.

Iterate through the entire list.
For each node, create a deep copy of each node and hash it with it. Store it in the hashmap.
Now, again iterate through the given list. For each node, link the deep node present as the hash value of the original node as per original node. 
the head of the deep copy list will be the head of hashed value of original node.

# Solution:
Node* copyRandomList(Node* head) {
    unordered_map<Node*,Node*> hashMap;
    Node* temp = head;
//first iteration for inserting deep nodes of every node in the hashmap.
    while(temp != NULL) {
        Node* newNode = new Node(temp->val);
        hashMap[temp] = newNode;
        temp = temp->next;
    }
    Node* t = head;
//second iteration for linking next and random pointer as given question.
    while(t != NULL) {
        Node* node = hashMap[t];
        node->next = (t->next != NULL) ? hashMap[t->next]:NULL;
        node->random = (t->random != NULL) ? hashMap[t->random]:NULL;
        t = t->next;
    }
    return hashMap[head];
}


Time complexity--> O(N)+O(N)
Space COmplexity --> O(N)

# Approach - II

Using a dummy Node 

The optimisation will be in removing the extra spaces, i.e, the hashmap used in brute force. This approach can be broken down into three steps. 

Create deep nodes of all nodes. Instead of storing these nodes in a hashmap, we will point it to the next of the original nodes.
Take a pointer, say itr, point it to the head of the list. This will help us to point random pointers as per the original list. This can be achieved by itr->next->random = itr->random->next
Use three pointers. One dummy node whose next node points to the first deep node. itr pointer at the head of the original list and fast which is two steps ahead of the itr. This will be used to separate the original linked list with the deep nodes list.

# Solution:
Node* copyRandomList(Node* head) {
     Node* temp = head;
	//step 1
    while(temp != NULL) {
        Node* newNode = new Node(temp->val);
        newNode->next = temp->next;
        temp->next = newNode;
        temp = temp->next->next;
    }
	//step 2
    Node* itr = head;
    while(itr != NULL) {
        if(itr->random != NULL)
            itr->next->random = itr->random->next;
        itr = itr->next->next;
    }
	//step 3
    Node* dummy = new Node(0);
    itr = head;
    temp = dummy;
    Node* fast;
    while(itr != NULL) {
        fast = itr->next->next;
        temp->next = itr->next;
        itr->next = fast;
        temp = temp->next;
        itr = fast;
    }
    return dummy->next;

}

# Time Complexity --> O(N)+O(N)+O(N)
# Space COmplexity --> O(1)


Question --2)   A. Next Round
Link --> https://codeforces.com/problemset/problem/158/A

# Approach & Solution --> 
int main(){
int n,k;
cin>>n>>k;
 int arr[n];
 int cnt=0;
for ( int i=0;i<n;i++){
   
cin>>arr[i];
}
int target =arr[k-1];

for( int i=0;i<n;i++){
    if(arr[i]>= target && arr[i]>0){
        cnt++;
    }
}
cout<<cnt;
    return 0;
}

Time COmplexity --> O(N)
Space COmplexity --> O(N)

Question --3 Domino piling
Link --> https://codeforces.com/problemset/problem/50/A?csrf_token=9a9189623bc8897a241dd622384cb828

# Approach & Solution:
int main(){
int n,m;
cin>>n>>m;
if(n % 2 ==0){
cout<<(m*(n/2) );
}
else{
    cout<<(m*(n/2) +floor(m/2));
}
return 0;
} 




*/