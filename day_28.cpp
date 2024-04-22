/*
Name - Himanshu Pokhriyal
Date - 22 April , 2024
Version - C++ 17

Quest-1 CRED Coins
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CREDCOINS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	 while( t--){
	     int x,y;
	     cin>>x>>y;
	     cout<<(x*y)/100<<endl;
	 }

}

Time Complexity - O(t)
Space Complexity - O(1)


Ques-2 Water Filling
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERFILLING

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t--){
	    int b1,b2,b3;
	    cin>>b1>>b2>>b3;
	    if((b1 == 1 && b2 == 1)|| (b2 == 1 && b3 == 1) ||( b3 == 1 && b1 == 1)) cout<<"Not now"<<endl;
	    else cout<<"Water filling time"<<endl;
	}

}

Time Complexity - O(t)
Space Complexity - O(1)






*/