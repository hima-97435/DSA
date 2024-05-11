/*
Name - Himanshu pokhriyal
Date - 11 May , 2024
Version - C++17

Ques-1  Chef and his Apps

Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFAPPS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while ( t-- ){
	    int s,x,y,z;
	    cin>>s>>x>>y>>z;
	    if((s-(x+y))>=z) cout<<"0"<<endl;
	    
	    else if(x>=z || y>=z) cout<<"1"<<endl;
	        else if(s-x>=z || s-y>=z) cout<<"1"<<endl;
	        else cout<<"2"<<endl;
	        
	    
	}
	

}
Time complexity - O(t)
Space complexity - O(1)


Ques-2 Chef Eren

Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFEREN

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while( t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    int no_of_even =floor(n/2);
	    int no_of_odd=n-no_of_even;
	    cout<<no_of_even*a+no_of_odd*b<<endl;
	}

}
Time complexity - O(t)
Space complexity - O(1)

Ques-3 Minimum number of coins

Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINCOINS?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int x;
	    cin>>x;
	    if(x%5 != 0) cout<<"-1"<<endl;
        else if(x%10 == 0) cout<<floor(x/10)<<endl;
        else if(x%5 == 0 && x%10 !=0) cout<<floor(x/10)+1<<endl;
	}

}

Time complexity - O(t)
Space complexity - O(1)

Ques-4 Airlines

Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPCP2?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int x,n;
	    cin>>x>>n;
	    if(x>=((n+99)/100)) cout<<"0"<<endl; 
	    else  cout<<(n+99)/100 -x<<endl;
	    
	}

}

Time complexity - O(t)
Space complexity - O(1)

Ques-5 Self Defence Training

Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SELFDEF



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n;
	    int x=0;
	    cin>>n;
	    int cnt=0;
	    for( int i=0;i<n;i++){
	        cin>>x;
	        if(x>=10 && x<=60) cnt++;
	   	    }
	    cout<<cnt<<endl;
	    
	}

}

Time complexity - O(t)
Space complexity - O(1)




*/