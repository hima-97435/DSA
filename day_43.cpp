/*
Name - himanshu Pokhriyal
Date - 7 may , 2024
Version -- C++17

Ques-1 Mario and Bullet
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BULLET


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
     int t;
     cin>>t;
     while ( t-- ){
         int x,y,z;
         cin>>x>>y>>z;
          double initialTime = (double)y / x;

        // Check if the initial time is greater than or equal to z seconds
        if (initialTime >= z) {
            cout << "0" << endl;
        } else {
            // Calculate additional time needed for the bullet to hit after z seconds
            double additionalTime = z - initialTime;
            cout << additionalTime << endl;
        }
         
     }
}

Time complexity - O(t)
Space Complexity  - O(1)


Ques-2 Chess Ratings
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/C_RATING

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	
	int x,y;
	cin>>x>>y;
    if(x== y) cout<<"0"<<endl;
	else if( (y-x) <= 8 ) cout<<"1"<<endl;
else {
    int games_needed = (y - x) / 8;
    if ((y - x) % 8 != 0) games_needed++;
    cout << games_needed << endl;
}

	}

}

Time complexity - O(t)
Space Complexity  - O(1)


*/