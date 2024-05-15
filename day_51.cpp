/*
Name - Himanshu Pokhriyal
Date - 15 May , 2024
Version - C++17

Ques-1 Chef And Operators
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHOPRT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while( t-- ){
        long int a,b;
        cin>>a>>b;
        if(a>b) cout<<">"<<endl;
        else if( a<b) cout<<"<"<<endl;
        else cout<<"="<<endl;
        
    }
}

Time complexity - O(t)
Space complexity - O(1)

Ques-2 Mutated Minions
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHN15A

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while( t-- ){
        int n,k;
         cin>>n>>k;
         int x;
         int cnt=0;
         for( int i=0;i<n;i++){
             cin>>x;
             if((x+k)%7==0) cnt++;
             
         }
         cout<<cnt<<endl;
    }
}

Time complexity - O(t)
Space complexity - O(1)

Ques-3 Reach fast
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/REACHFAST?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while( t-- ){
        int x,y,k;
        cin>>x>>y>>k;
        int d=abs(x-y);
        cout<<(int)(ceil((double)d/k))<<endl;
    }
}

Time complexity - O(t)
Space complexity - O(1)

Ques-4 Single-use Attack
Link -  https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SINGLEUSE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int x,y,h;
	    cin>>x>>y>>h;
	    int d=abs(x-h);
        cout<<(int)(ceil((double)d/y))+1<<endl;
	}

}

Time complexity - O(t)
Space complexity - O(1)

Ques-5 Get Lowest Free
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SALE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int a,b,c;
	    cin>>a>>b>>c;
	    cout<<(a+b+c)-min(a,min(b,c))<<endl;
	}

}

Time complexity - O(t)
Space complexity - O(1)

Ques-6 Minimum number of Flips
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINFLIPS?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n,x;
	    cin>>n;
	    int sum=0;
	    for( int i=0;i<n;i++){
	        cin>>x;
	        
	        sum+=x;
	    }
	    sum=abs(sum);
	    if( sum == 0)  cout<<"0"<<endl;
	    else {
	        if(sum%2 != 0) cout<<"-1"<<endl;
	        else cout<<sum/2<<endl;
	    }
	}

}

## Why i used "sum = abs(sum)"
Try to dry run  this testcase without the "sum = abs(sum)" then you will get idea of it .
5
-1 -1 -1 -1 -1
6
-1 -1 -1 -1 -1 -1
6
1 -1 -1 -1 -1 -1

Ques-7 Binary Battles
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BIN_BAT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while( t-- ){
        int n,a,b;
        cin>>n>>a>>b;
        cout<<(log2(n)*a)+(log2(n)-1)*b<<endl;
    }
}

Time complexity - O(t)
Space complexity - O(1)

Ques-8 Best of Two
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DICEGAME2

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int a1,a2,a3,b1,b2,b3;
	    cin>>a1>>a2>>a3>>b1>>b2>>b3;
	    int alice_point=(a1+a2+a3)-min(a1,min(a2,a3));
	    int bob_point=(b1+b2+b3)-min(b1,min(b2,b3));
	    if(alice_point>bob_point) cout<<"Alice"<<endl;
	    else if( alice_point<bob_point) cout<<"Bob"<<endl;
	    else cout<<"Tie"<<endl;
	}

}

Time complexity - O(t)
Space complexity- O(1)

Ques-9 The Lead Game
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TLG

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a,b;
	int old_a=0;
	int old_b=0;
	int  flag=0;
    int maimum =INT_MIN;	
	for( int i=0;i<n;i++){
	    cin>>a>>b;
	   old_a+=a;
	   old_b+=b;
	   if(maimum<abs(old_a-old_b)){
	       maimum=abs(old_a-old_b);
	       if(a>b) flag=0;
	    else if( a<b) flag=1;
	   }
	    
	}
	if( flag == 0 ) cout<<"1"<<" "<<maimum<<endl;
	else cout<<"2"<<" "<<maimum<<endl;

}

Time complexity - O(n) 
Space complexity - O(1)

Ques-10 Degree of Polynomial
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DPOLY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while( t-- ){
        int n;
        cin>>n;
        // int assumed=n-1;
        int x;
        int maimum=0;
        for( int i=0;i<n;i++){
            cin>>x;
            if ( x == 0) continue;
            else maimum=i;
        }
        cout<<maimum<<endl;
    }
    
}

time complexity - O(t)
space complexity - O(1)




*/