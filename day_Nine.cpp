/*
Name - Himanshu POkhriyal
Date -- 3 April, 2024
Version -- 5.4


Question --1 Just One More Episode

Link --> https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/ONEMORE

Approach & Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, x;
	cin>>t;
	while(t--){
	    
	    cin>>x;
	    if(x>24){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	    
	}

}

Time complexity : O(t)

Space Complexity:O(1)

Question --2 Mana Points
Link -- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MANAPTS?tab=statement

Approach & Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	cout<<floor(y/x)<<endl;
	   
	}
	    
return 0;
}

Time complexity : O(t)
Space Complexity:O(1)



*/