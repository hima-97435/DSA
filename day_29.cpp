/*
Name - Himanshu Pokhriyal
Date - 23 April, 2024
Version - C++17



Ques-1 Sale Season
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SALESEASON

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int x;
	    cin>>x;
	    if(x<=100) cout<<x<<endl;
	    else if(x>100 && x<=1000 ) cout<<(x-25)<<endl;
	    else if(x>1000 && x<=5000 ) cout<<(x-100)<<endl;
	    else cout<<(x-500)<<endl;
	}

}
Time Complexity ->O(t)
Space Complexity -O(1)


Ques-2 Minimum Pizzas
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINPIZZA

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n,x;
	    cin>>n>>x;
	    if( (n*x) % 4 != 0)
	    cout<<((n*x)/4)+1<<endl;
	    else cout<<(n*x)/4<<endl;
	}

}

Time Complexity ->O(t)
Space Complexity -O(1)


*/