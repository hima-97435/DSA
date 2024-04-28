/*
Name - himanshu pokhriyal
Date - 28 April , 2024
Version - C++17

Ques-1 Nearest Exit
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NEARESTEXIT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int x;
	    cin>>x;
	    if(x<=50) cout<<"LEFT"<<endl;
	    else cout<<"RIGHT"<<endl;
	}

}

Time complexity - O(t)
Space Complexity - O(1)


Ques-2 Reverse The Number
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW007

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while( t-- ){
	    int n;
	    cin>>n;
	    int rev_number=0;
	    while(n != 0){
	    rev_number = rev_number*10 + n%10;
            n /= 10;
	    }
	    cout<<rev_number<<endl;
	}
	
	

}
Time complexity - O(t)
Space Complexity - O(1)

*/