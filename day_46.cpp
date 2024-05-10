/*
Name - himanshu Pokheiyal
Date - 10 May, 2024
Version - C++17


Ques-1 
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FILLCANDIES?tab=solution

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n,k,m;
	    cin>>n>>k>>m;
	    if( n<(k*m))  cout<<"1"<<endl;
	    else{
	        if(n%(k*m) == 0) cout<<(n/(k*m))<<endl;
	        else if(n%(k*m)>0) cout<<(n/(k*m))+1<<endl;
	    }
	}

}


Ques-2 Water Mixing

Link- https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WTRMIXING

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    while( t-- ){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a>b){
            int req_value=a-b;
            if(req_value>y){
                cout<<"No"<<endl;
                
            }
            else cout<<"Yes"<<endl;
        }
        else if(a<b){
            int req_value=b-a;
            if(req_value>x) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
        else cout<<"Yes"<<endl;
    }	
	

}

Time complexity - O(t)
Space complexity -- O(1)

# Slight optimisation
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        
        int temp_diff = abs(a - b);  // Absolute difference in temperatures
        
        // Check if the temperature difference can be achieved with available water
        cout << ((temp_diff <= x + y && temp_diff % 2 == (x + y) % 2) ? "Yes" : "No") << endl;
    }

    return 0;
}

Ques-3 Weights

Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WGHTS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	   if( w == x || w== y || w==z || w == ( x+y) || w== (y+z) || w== (x+z) || w== (x+y+z) ) cout<<"Yes"<<endl;
	   
	   else cout<<"No"<<endl;
	    
	}

}

Time complexity - O(t)
Space complexity - O(1)




*/