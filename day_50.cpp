/*
Name - himanshu pokhriyal
Date - 14 MAy, 2024
Version - C++17


Ques-1 Chef Fantasy 11
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FIZZBUZZ2303?tab=statement

#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
    int t;
    cin>>t;
    while( t-- ){
        int n;
        cin>>n;
        
        cout<<n*(n-1)<<endl;
    }
}

Time complexity - O(t)
Space Complexity - O(1)

Ques-2 Building Race
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BUILDINGRACE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	   double a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if((a/x) <(b/y) ) cout<<"Chef"<<endl;
	    else if((a/x) == (b/y)) cout<<"Both"<<endl;
	    else cout<<"Chefina"<<endl;
	    
	}

}

Time  Complexity - O(t)
Space Complexity - O(1)


Ques-3 Chef and Races
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFRACES

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int x,y,a,b;
	    cin>>x>>y>>a>>b;
	    if( (x==a || x==b) && (y==a || y==b)  ) cout<<"0"<<endl;
	    else if( ((x==a || x==b) && !(y==a || y==b))||(!(x==a || x==b) && (y==a || y==b))  ) cout<<"1"<<endl;
	    else cout<<"2"<<endl;
	}

}

Time complexity - O(t)
Space complexity - O(1)

Ques-4 Endless Appetizers
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MOZZ
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int x,y,r;
	    cin>>x>>y>>r;
	    x=x+(r/30);
	    if(x%y == 0) cout<<x/y<<endl;
	    else cout<<(x/y)+1<<endl;
	}

}
Time complexity - O(t)
Space complexity - O(1)

Ques-5 Presents for Cheffina
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PRESENTS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n;
	    cin>>n;
	    if(n%5  == 0) cout<<(n/5)*4<<endl;
	    else cout<<(n/5)*4+n%5<<endl;
	}

}

Time complexity - O(t)
Space complexity - O(1)

Ques-6 Small Factorial
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW018

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t--){
	    int n;
	    cin>>n;
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    cout<<result<<endl;
	}
}

Time complexity - O(t)
Space complexity - O(1)

Ques-7 Dracula Eats
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEAT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t--){
	     int n;
	     cin>>n;
	     if( n==1 ) cout<<"0"<<endl;
	     else cout<<((n-2)/7 +1)<<endl;
	     
	}

}

Time complexity - O(t)
Space complexity - O(1)

Ques-8 Possible Victory
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/T20MCH?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long int r,o,c;
	cin>>r>>o>>c;
	long int possible_run = (20-o)*6*6;
	long int run_left=r-c;
	if(possible_run>run_left) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

}
Time complexity - O(t)
Space complexity - O(1)




*/