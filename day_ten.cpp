/*
Name -- Himnashu Pokhriyal
Date -- 4 April , 2024
Version -- 5.4

Question --1 Rain in Chefland {Difficulty - 328}
Link -- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/RAINFALL1

Approach & Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x<3){
	        cout<<"LIGHT"<<endl;
	    }
	    else if(x>=3 && x<7){
	        cout<<"MODERATE"<<endl;
	    }
	    else{
	        cout<<"HEAVY"<<endl;
	    }  
	}

}

Time Complexity --> O(T)
Space Complexity --> O(1)


Question -- 2 Bidding { Difficulty - 330 }
Link -- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AUCTION

Approach & Solution:

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(a>b && a>c){
	        cout<<"Alice"<<endl;
	    }
	    else if(b>a && b>c){
	        cout<<"Bob"<<endl;
	    }
	    else{
	        cout<<"Charlie"<<endl;
	    }
	    
	}

}

Time Complexity --> O(T)
Space Complexity --> O(1)


Question -- 3 Overspeeding Fine { Difficulty - 335 }
Link -- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FINE


Approach & Solution:

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x<=70){
	        cout<<"0"<<endl;
	    }
	    else if( x>70 && x<=100){
	        cout<<"500"<<endl;
	    }
	    else{
	        cout<<"2000"<<endl;
	    }
	      
	    
	}
	

}


Time Complexity --> O(T)
Space Complexity --> O(1)

Question -- 4 Chess Time
link -- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHESSTIME

Approach & Solution:

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t , n;
	 cin>>t;
	 while( t-- ){
	     cin>>n;
	     cout<<(3*n)<<endl;
	     
	 }

}

Time Complexity --> O(T)
Space Complexity --> O(1)







*/