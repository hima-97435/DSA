/*
Name- Himanshu Pokhriyal
DAte - 21 April, 2024
Version - C++17


Ques-1 Chef in his Office
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/OFFICE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int x,y;
	    cin>>x>>y;
	    cout<<(4*x+y)<<endl;
	}

}

Time complexity - O(t)
Space Complexity - O(1)


Que-2 Mahasena
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AMR15A

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
// 	while( t-- ){
// 	    int  n;
// 	    c

	    int arr[t];
	    int luckey_count = 0, unlucky_count = 0;
	    for( int i=0;i<t;i++){
	        cin>>arr[i];
	        if(arr[i] % 2 == 0) luckey_count++;
	        else unlucky_count++;
	        
	    }
	    if(luckey_count> unlucky_count) cout<<"READY FOR BATTLE"<<endl;
	    else cout<<"NOT READY"<<endl;
// 	}

}

Time complexity - O(t)
Space Complexity - O(n) 


*/