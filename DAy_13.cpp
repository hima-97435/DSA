/*

Name - Himanshu Pokhriyal
DAte - 7 April , 2024
Version - C++ 17

Question -1 Air Quality Index
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AIRINDEX

Approach & Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes herint x;
	int x;
	cin>>x;
	if(x>=100) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}

Time Complexity - O(1)
Space Complexity - O(1)


Question -2 Fever
Link -- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FEVER

Approach & Solution :
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,temp;
	cin>>t;
	while(t--){
	    cin>>temp;
	    if(temp>98) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
    
	}

}

Time Complexity - O(t)
Space COmplexity - O(1)


Question -3 Sleep deprivation 
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SLEEP

Approach & Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x<7) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    
	    
	}

}

Time Complexity - O(t)
Space COmplexity - O(1)

Question - 4 MAth-1 Enrollment
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/M1ENROL

Approach & Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int  t , x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x>y) cout<<"0"<<endl;
	    else cout<<(y-x)<<endl;
	    
	    
	}
	

}

Time Complexity - O(t)
Space COmplexity - O(1)

Question - 5 Chef and Chapters
Link -  https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SEMCOURSES

Approach & Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t,x,y,z;
cin>>t;
while(t--){
    cin>>x>>y>>z;
    cout<<(x*y*z)<<endl;
    
    
    
}
}

Time Complexity - O(t)
Space COmplexity - O(1)

Question -6 Water Requirement 
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/WATERREQ

Approach & Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, N_HOurs;
	cin>>t;
	while(t--){
	    cin>>N_HOurs;
	    cout<<2*N_HOurs<<endl;
	    
	    
	}

}


Time Complexity - O(t)
Space COmplexity - O(1)


Question - 7 Lunch Time 
Link- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/LTIME

Approach & SOlution :
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, x_Hour;
	cin>>t;
	while( t-- ){
	    cin>>x_Hour;
	    if(x_Hour>= 1 && x_Hour<=4) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    
	    
	}

}


Time Complexity - O(t)
Space COmplexity - O(1)












*/