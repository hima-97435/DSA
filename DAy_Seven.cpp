/*
NAme --> Himanshu Pokhriyal
Date --> 1 April, 2024
Version --> 5.4


Question --1 Beautiful matrix 
Link --> https://codeforces.com/problemset/problem/263/A

Approach & Solution:

#include<bits/stdc++.h>
using namespace std;
int main(){

int x=0;
for( int i=1;i<=5;i++){
    for ( int j=1;j<=5;j++){
        cin>>x;
        if(x == 1){
            cout<<abs(i-3)+abs(j-3)<<endl;
        }
    }

}
return 0;

}
Time Complexity--> O(N**2)
Space Complexity -->O(1)
Question --2 My pow.
Link --> https://www.naukri.com/code360/problems/find-x-raised-to-power-n-_626560?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

Appraoch:
1.Initialize ans as 1.0  and store a duplicate copy of n i.e 
nn using to avoid overflow
2. Check if nn is a negative number,
 in that case, make it a positive number.
3. Keep on iterating until nn is greater than zero, 
now if nn is an odd power then multiply x with ans 
ans reduce nn by 1. Else multiply x with itself and divide nn by two.
4. Now after the entire binary exponentiation is complete and
 nn becomes zero, check if n is a negative value 
 we know the answer will be 1 by and.

 # Solution:
 
 double myPow(double x, int n) {
   double ans = 1.0;
  long long nn = n;
  if (nn < 0) nn = -1 * nn;
  while (nn) {
    if (nn % 2) {
      ans = ans * x;
      nn = nn - 1;
    } else {
      x = x * x;
      nn = nn / 2;
    }
  }
  if (n < 0) ans = (double)(1.0) / (double)(ans);
  return ans;
}
Time Complexity--> O(logN)
Space Complexity-->O(1)






*/
