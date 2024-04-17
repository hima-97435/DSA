/*
Name - Himanshu Pokhriyal
DAte - 17  April , 2024
version -- C++ 17

Question -1 Broken Phone
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BROKENPHONE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int  t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x<y) cout<<"REPAIR"<<endl;
	    else if ( x>y) cout<<"NEW PHONE"<<endl;
	    else cout<<"ANY"<<endl;
	}

}

Time Complexity - O(t)
Space Complexity -O(1)

Question -2 Tyre problem
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TYRE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n,m;
	    cin>>n>>m;
	cout<<(2*n+4*m)<<endl;
	}

}
Time Complexity - O(t)
Space Complexity -O(1)



*/