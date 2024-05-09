/*
Name - Himanshu pokhriyal
Date - 9 May, 2024
Version - c++17

Ques-1 Candy Distribution
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CANDYDIST

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n,m;
	    cin>>n>>m;
	    int final = n/m;
	    if(n%m != 0 ) cout<<"No"<<endl;
	    else if(final %2 != 0) cout<<"No"<<endl;
	    else cout<<"Yes"<<endl;
	   
	}

}

Time complexity - O(t)
Space Complexity - O(1)

Ques-2 The Last Levels

Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/LASTLEVELS?tab=statement

    #include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int totalTime = x * y; 
	    if(x%3 != 0){
	        x=floor(x/3);
	    }
	    else{
	        x=(x/3)-1;
	    }
	    
        int sessionTime = totalTime + x*z;
        cout << sessionTime << endl;
	}

}

Time complexity - O(t);
Space complexity - O(1)

Ques-3 Blackjack

Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BLACKJACK

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int a,b;
	    cin>>a>>b;
	    int z=21-(a+b);
	    
	    if(z>=1 && z<=10) {
	        cout<<z<<endl;
	        
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	}

}

time complexity - O(t);
space complexity - O(1)

*/