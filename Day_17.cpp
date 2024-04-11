/*
NAme -- Himanshu Pokhriyal
DAte - 10 April , 2024
Version - C++ 17


Question - 1 Car Trip
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CARTRIP

Approach & Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int x;
	cin>>x;
	if(x<300){
	    cout<<"3000"<<endl;
	}
	else{
	    cout<<x*10<<endl;
	}
	
	}

}


Time Complexity --> O(t)
Space Complexity --> O(1)


Question - 2 Multivitamin Tablets
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TABLETS

Approach & Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if((3*x)<=y) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}

Time Complexity --> O(t)
Space Complexity --> O(1)


Question --3 Sort Stack
Link - https://www.naukri.com/code360/problems/sort-stack_1229505?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

Approach & Solution;
#include <bits/stdc++.h> 

void insert(stack<int> &s , int temp){
if(s.empty()  || temp>s.top()){
	s.push(temp);
	return;	 
}
int val=s.top();
s.pop();
insert(s,temp);
s.push(val);

}

stack<int> sortStack(stack<int> &s)
{
	// Write code here.
	if (!s.empty()) {
        int temp = s.top();
        s.pop();
        sortStack(s);
        insert(s, temp);
    }
	else{

	}
	return s;

}

Time Complexity --> O(N^2)
Here’s why:

--> The sortStack function is called n times for n elements in the stack.
--> Each call to sortStack involves a call to the insert function, 
which can also be called up to n times in the worst-case scenario 
(when the element to be inserted needs to be placed at the bottom 
of the stack).
--> Therefore, in the worst-case scenario, we have n calls to sortStack, each involving n calls to insert, leading to a time complexity of O(n^2).
Space Complexity --> O(1)


*/