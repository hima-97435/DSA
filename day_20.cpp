/*

Name -- Himanshu Pokhriyal
Date -- 14 April , 2024
Version -- C++ 17

Question -1 Instagram
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INSTAGRAM

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
{
    int x,y;
    cin>>x>>y;
  if(x>10*y) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
}
Time Complexity - O(t)
Space Complexity -O(1)

Question -2 Volume Control
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/VOLCONTROL

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    cout<<abs(x-y)<<endl;
	    
	}

}

Time Complexity - O(t)
Space Complexity -O(1)


Question - 3 ATM
Link - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/HS08TEST

#include <bits/stdc++.h>
using namespace std;

int main() {
	 int x;
    double y;
    cin>>x>>y;
    if(x % 5 == 0 && x + 0.50 <= y){
        cout<<fixed<<setprecision(2)<<(y-(x+0.50))<<endl;
    } else {
        cout<<fixed<<setprecision(2)<<y<<endl;
    }
    return 0;
	

}

Time Complexity - O(1)
Space Complexity - O(1)













*/