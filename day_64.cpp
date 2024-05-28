/*
Name - Himanshu Pokhriyal
Version - C++17
Date - 28 May , 2024

Ques-1 Reverse Integer 
Link - https://leetcode.com/problems/reverse-integer/description/
class Solution {
public:
    int reverse(int x) {
        long r =0;  
        while( x != 0){
        r=r*10+x%10;
        x=x/10;
        }
        if(r>INT_MAX || r<INT_MIN) return 0;
        return int(r);
    }
};

Time complexity - O(n) ## n --> no of digits in number
Space complexity - O(1)

Ques-2 Palindrome Number
Link https://leetcode.com/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x <0)  return false;
         long r =0; 
         int ans=x; 
        while( x != 0){
        r=r*10+x%10;
        x=x/10;
        }
        if( r == ans) return true;
        else return false;


    }
};

Time complexity - O(n)
Space complexity - O(1)


*/