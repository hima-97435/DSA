/*
Name - Himanshu Pokhriyal
Date - 27 April , 2024
Version - C++17


Que-1 Problems in your to-do list
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TODOLIST

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n;
	    cin>>n;
	    int arra[n];
	    int ans=0;
	    for( int i=0;i<n;i++){
	        cin>>arra[i];
	        if(arra[i]>=1000) ans+=1;
	    }
	    cout<<ans<<endl;
	    
	}

}

cTime Complexity - O(t)
Space Complexity - O(1)

Ques-2 Air Conditioner Temperature
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ACTEMP

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if( max(a,c)<= b ) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}

}
Time Complexity - O(t)
Space Complexity - O(1)


*/