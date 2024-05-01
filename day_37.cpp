/*
NAme - Himanshu Pokhriyal
Date - 1 MAy, 2024
Version - C++17


Ques-1 Minimum Cars required
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINCARS


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while ( t-- ){
        int n;
        cin>>n;
       cout<<ceil(n/4.0)<<endl;
        // else cout<<"1"<<endl;
    }
}

Time complexity - O(t)
Space Complexity - O(1)


Ques-2 Test Score
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFSCORE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n,x,y;
	    cin>>n>>x>>y;
	    if(y%x == 0) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}

Time complexity - O(t)
Space Complexity - O(1)

*/