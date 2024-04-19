/*
Name - Himanshu Pokhriyal
Date - 19 April , 2024
Version - C++


Ques-1 Monopoly in Chefland
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MONOPOLY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int r1,r2,r3;
	    cin>>r1>>r2>>r3;
	    if((r1>r2+r3 && r1>r3+r2)||(r2>r1+r3 && r2>r3+r1) || (r3>r1+r2 && r3>r2+r1))  cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}

Time Complexity ->O(t)
Space Complexity -> O(1)

Ques-2 Bucket and Water Flow
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/WATERFLOW


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	int x_ans=y*z+w;    
	    if(x_ans>x) cout<<"OVERFLOW"<<endl;
	    else if(x_ans==x) cout<<"FILLED"<<endl;
	    else if( x_ans<x) cout<<"UNFILLED"<<endl;
	}

}
Time Complexity ->O(t)
Space Complexity -> O(1)





*/