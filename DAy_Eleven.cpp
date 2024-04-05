/*
Name -- Himanshu Pokhriyal
DAte -- 5 April, 2024
Version -- C++ 17

Question -1 Passes for Fair
Link -- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FAIRPASS

Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    if(n+1>k){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	    
	}

}
Time Complexity -- O(N)
Space COmplexity -- O(1)


Question --2 Read Pages
Link --  https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/READPAGES


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,y;
	cin>>t;
	while(t--){
	    cin>>n>>x>>y;
	    if(n>(x*y)){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	    	    	    
	}

}
Time Complexity -- O(N)
Space COmplexity -- O(1)




*/