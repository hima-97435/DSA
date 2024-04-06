/*
Name -- Himanshu Pokhriyal
Date -- 6 April , 2024
Version --  C++14 (GCC 6-32)

Question --1A. Petya and Strings
Link -- https://codeforces.com/problemset/problem/112/A

Approch -->
we have to convert the string into lower/upper 
case either and basically check if str1 str2 which is 
bigger or smallr or equal.
#include<bits/stdc++.h>
using namespace std;

int compareStrings(const std::string& str1, const std::string& str2) {
    string lowerStr1 = str1;
    string lowerStr2 = str2;

   
    transform(lowerStr1.begin(), lowerStr1.end(), lowerStr1.begin(), ::tolower);
    transform(lowerStr2.begin(), lowerStr2.end(), lowerStr2.begin(), ::tolower);

  
    if (lowerStr1 < lowerStr2) {
        return -1;
    } else if (lowerStr1 > lowerStr2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    int result = compareStrings(str1, str2);

    cout << result << endl;

    return 0;
}

# Time Complexity -> O(N){Lowercase version }+O(n){ lexicographical comaparsion }
For lexicographiical 
In the compareStrings function, after converting the strings to lowercase, we perform a lexicographical comparison using the < operator (if (lowerStr1 < lowerStr2)).
Lexicographical comparison involves comparing characters at corresponding positions in the strings until a difference is found or one string is exhausted.
The time complexity for this comparison is indeed O(n), where n is the length of the input strings.
This is because in the worst case scenario, we may need to compare each character of both strings until we find a difference or reach the end of the shorter string.

Space Compleity -> O(N){ String length is N}

Question -- 2 Couple Game
Link -- https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/COUGAME

Approach & Solution:

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,girl,boy;
	cin>>t;
	while(t--){
	    cin>>girl>>boy;
	    cout<<(boy-girl)<<endl;
	    
	}

}

Time Complexity - O(T)
Space Complexity - O(1)















*/