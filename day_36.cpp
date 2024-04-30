/*
Name - Himanshu Pokhriyal
DAte - 30 April , 2024
Version -- C++17


Ques-1 Qualify the round
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/QUALIFY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while ( t-- ){
	    int x,a,b;
	    cin>>x>>a>>b;
	    if(a+2*b>=x) cout<<"Qualify"<<endl;
	    else cout<<"NotQualify"<<endl;
	}

}

Time complexity - O(t)
Space complexity- O(1)


Ques-2 Elections in Chefland
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ELECTN

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(  t-- ){
	    int n,x;
	    cin>>n>>x;
	    int i=0;
	    int cnt=0;
	    while( n != 0){
	        cin>>i;
	        if(i>=x) cnt++;
	        n--;
	    }
	    cout<<cnt<<endl;
	}

}

Time complexity - O(t)
Space complexity- O(1)



*/