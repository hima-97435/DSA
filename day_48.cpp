/*
Name - himanshu Pokhriyal
Date - 12 May , 2024
Version - C++17


Ques-1 Cup Finals
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CRICUP

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int x,y,d;
	    cin>>x>>y>>d;
	    if(abs(x-y)<=d) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}

}

Time complexity - O(t)
Space complexity - O(1)

Ques-2 Too many Floors
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOORS?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int x,y;
	    cin>>x>>y;
	    cout<<abs(((x-1)/10)-((y-1)/10))<<endl;
	}

}

Time complexity - O(t)
Space complexity - O(1)

Ques-3 Speed Limit Test
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPEEDTEST?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int a,x,b,y;
	    cin>>a>>x>>b>>y;
	    if(a*y>b*x) cout<<"Alice"<<endl;
	    else if(a*y<b*x) cout<<"Bob"<<endl;
	    else cout<<"Equal"<<endl;
	}

}


## Special Test case :{Try division approach in it and then multiplication approach }
3 3 3 2


time complexity - O(t)
space complexity - O(1)

Ques-4 Decrement OR Increment
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DECINC

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;

	    if( t % 4 == 0) cout<<t+1<<endl;
	    else cout<<(t-1)<<endl;


}

time complexity - O(1)
space complexity - O(1)

Ques-5 A or B
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AORB?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int x,y;
	    cin>>x>>y;
	    int A_point=500-2*x+1000-4*(x+y);
	    int B_point= 1000-4*y+500-2*(x+y);
	    cout<<max(A_point,B_point)<<endl;
	}

}

time complexity - O(t)
Space complexity - O(1)





*/