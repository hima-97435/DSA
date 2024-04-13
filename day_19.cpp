/*
Name - Himanshu Pokhriyal
Date - 13 April, 2024
Version - C++ 17


Question-> Donation Rewards 
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DOREWARD

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
	    if(x<= 3 ) cout<<"BRONZE"<<endl;
	    else if( x>3 && x<=6 ) cout<<"SILVER"<<endl;
	    else cout<<"GOLD"<<endl;
	    
	    
	    
	    
	}

}
Time Complexity -> O(t)
Space Complexity -> O(1)

Question -> True and False Paper
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TFPAPER

Approach 
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;;
	    cout<<(n-k)<<endl;
	    
	    
	}

}

Time Complexity -> O(t)
Space Complexity -> O(1)

















*/