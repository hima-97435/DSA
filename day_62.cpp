/*
NAme - Himanshu Pokhriyal
Version - C++ 17
Date - 26 May , 2024

Ques-1 Fitness
Link - https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/FIT

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<2*x*5<<endl;
    }
	// your code goes here

}

Time complexity - O(t)
Space complexity - O(1)

Ques-2 Second Max of Three Numbers
Link - https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/SNDMAX

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N,x,y,z;
	cin>>N;
	while(N--){
	    
	    cin>>x>>y>>z;
	  int  arr[3]={x,y,z};
	   sort(arr,arr+3);
	   cout<<arr[1]<<endl;
	    
	}

}

Time complexity - O(N)
Space complexity - O(1)



*/