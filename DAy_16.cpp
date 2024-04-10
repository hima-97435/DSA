/*
Name - Himanshu pokhriyal
DAte - 10 April , 2024
Version - C++ 17

Question -1 Chef gives Party
Link -  https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PARTY2?tab=statement

Approach& Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,k;
	cin>>t;
	while(t--){
	    cin>>n>>x>>k;
	    if(n*x<=k) cout<<"YES"<<endl;
	    else  cout<<"NO"<<endl;
	    
	    
	    
	}
	

}

Time Complexity --> O(t)
Space Complexity --> O(1)


Question -2 Time Complexity
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/COMPLEXITY

Approach& Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while( t--){
	    cin>>x>>y;
	    if(x>y) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    
	    
	}

}

Time Complexity --> O(t)
Space Complexity --> O(1)

Question-3 Interior Design
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INTRDSGN

Approach& Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    cout<<min((x1+y1),(x2+y2))<<endl;
	    
	    
	}

}


Time Complexity --> O(t)
Space Complexity --> O(1)









*/