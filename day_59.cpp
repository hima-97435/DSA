/*
Name - Himanshu Pokhriyal
Date - 23 May , 2024
Version - C++17


Ques-1 Chef and Dolls
Link - https://www.codechef.com/practice/course/arrays-strings-sorting/INTARR01/problems/MISSP?tab=statement

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while( t-- ){
        int n;
        cin>>n;
        for( int i=0;i<n;i++){
            map<long long int, long long int > freq;
            long long int type;
            cin>>type;
            freq[type]++;
        }
        for( auto x: freq){
            long long int key=x.first;
            long long int value=x.second;
                if( value%2 == 1) {
                    cout<<key<<endl;
                    return;

        }
    }
}
}
Time  complexity - O(t*n)
Space complexity - O(n) ## for storing the distinct values

Ques-2 Simple Sorting
Link 0 https://www.codechef.com/practice/course/sorting/SORTING/problems/TSORT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	int arr[N];
	for( int i=0;i<N;i++){
	    cin>>arr[i];
	}
	sort(arr,arr+N);
	for( int i=0;i<N;i++){
	    cout<<arr[i]<<endl;
	}
	

}

Time compelxity - O(N)
Space complecity - O(N)

*/