/*
Name -- Himanshu POkhriyal
Date-- 2 MArch, 2024
Version -- 5.4

Question --1 Good Number 

Approach & Solution:
bool isValid(int n, int d) 
{ 
    // Get last digit and initialize sum from right side 
    int digit = n%10; 
    int sum = digit; 
 
    // If last digit is d, return 
    if (digit == d) 
    return false; 
 
    // Traverse remaining digits 
    n /= 10; 
    while (n) 
    { 
        // Current digit 
        digit = n%10; 
 
        // If digit is d or digit is less than or 
        // equal to sum of digits on right side 
        if (digit == d || digit <= sum) 
            return false; 
 
        // Update sum and n 
        else
        { 
            sum += digit; 
            n /= 10; 
        } 
    } 
    return 1; 
} 

vector<int> goodNumbers(int a, int b, int digit) {
 vector<int> goodNumbers;
    for (int i = a; i <= b; ++i) {
        if (isValid(i, digit)) {
            goodNumbers.push_back(i);
        }
    }
    return goodNumbers;

	
}

Time Complexity-- O(b-a)+O(N)
Space Complexity -- O(1)

Question -- 2 Waiting time 
Link --> https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/WAITTIME

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,k,x;
	cin>>t;
	while(t--){
	    cin>>k>>x;
	    cout<<(k*7)-x<<endl;
	    
	    
	    
	}

}
Time Complexity --O(t)
Space Complexity -- O(1)

Question --3 October Marthon ( Difficult -- 319)
Link -- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/OCTATHON 

# Approach & Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	if(x<3){
	    cout<<"GOLD";
	}
	else if(x>=3 && x<6){
	    cout<<"SILVER";
	}
	else{
	    cout<<"BRONZE";
	}

}

Time complexity -->O(1)
Space COmplexity --> O(1)





*/