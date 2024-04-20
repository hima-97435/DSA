/*
Name - Himanshu Pokhriyal
Date - 20 April , 2024
Version - C++17


Ques-1 Greater Average
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while( t-- ){
        int a,b,c;
        cin>>a>>b>>c;
        if(float(a+b)/2>float(c)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

Time complexity - O(t)
Space Complexity - O(1)


Ques- 2 Subscriptions
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n,x;
	    cin>>n>>x;
	    if(n>1){
	   // int x_multiplicand=int(ceil(n/6));
	   int x_multiplicand = (int)ceil((double)n/6);

	    cout<<x_multiplicand*x<<endl;
	    
	    }
	    else {
	        cout<<x<<endl;
	    }
	}

}

Time Complexity - O(t)
Space Complexity - O(1)


*/