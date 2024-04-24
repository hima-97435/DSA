/*
Name - Himanshu Pokhriyal
Date - 24 April, 2024
Version - C++17


Que-1 Chef and NextGen
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/HELIUM3

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while( t-- ){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if((a*b)<=(x*y)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}

Time complexity -O(t)
Space Complexity - O(1)


Que-2 Sugarcane Juice Business
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUGARCANE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n;
	    cin>>n;
	    int ans= 50*n;
	   cout<<(ans - ((20*ans)/100 + (20*ans)/100 + (30*ans)/100))<<endl;
	   // cout<<ans<<endl;
	}

}

Time complexity -O(t)
Space Complexity - O(1)




*/