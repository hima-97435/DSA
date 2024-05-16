/*
Name - Himanshu Pokhriyal
Date - 16 MAy , 2024
Version - C++17


Ques-1 Recent contest problems
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/RECENTCONT?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while( t-- ){
        int n;
        cin>>n;
        string code;
        int starter,ltime=0;
        for( int i=0;i<n;i++){
            cin>>code;
            if(code != "START38") ltime++;
            else if (code != "LTIME108") starter++;
        }
        cout<<starter<<" "<<ltime<<endl;
        starter=0;
        ltime=0;
    }
}

Time complexity - O(t)
Space complexity - O(1)

Ques-2 Primality Test
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PRB01?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int flag=0;
    while( t-- ){
        int n;
        cin>>n;
        flag =0;
     for (int i = 2; i < n; i++) {
        if (n % i == 0) {
          flag = 1;
        }        
    }
    if( flag == 1 || n == 1) cout<<"no"<<endl;
    else cout<<"yes"<<endl;
}
}
Time complexity - O(t)
Space complexity - O(1)

Ques-3 The Cooler Dilemma 2
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERCOOLER2?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes 
	int t;
	cin>>t;
	while( t-- ){
	    int x,y;
	    cin>>x>>y;
	   
	        if( y % x != 0) cout<<(y/x)<<endl;
	        else cout<<(y/x)-1<<endl;
	    
	}

}

Time complexity - O(t)
Space complexity - O(1)

Ques-4 Richie Rich
Link -  https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/CHFRICH

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while( t-- ){
        int a,b,x;
        cin>>a>>b>>x;
        cout<<(b-a)/x<<endl;
    }

}

Time complexity - o(t)
Space complexity - O(1)

Ques-5 Vaccine Dates
Link - https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/VDATES?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int d,l,r;
	    cin>>d>>l>>r;
	    if((d>=l && d<=r)||(d>=r && d<=l)) cout<<"Take second dose now"<<endl;
	    else if(d<l) cout<<"Too Early"<<endl;
	    else if(d>r) cout<<"Too Late"<<endl;
	    
	}

}

time complexity - O(t)
Space complexity - O(1)

Ques-6 Hoop Jump
Link - https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/HOOPS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while( t-- ){
	    int n;
	    cin>>n;
	    int i=0,j=n;
	    while(!(i>=j)) {
	        i++;
	        j--;
	    }
	    cout<<i<<endl;
	}

}
Time complexity - O(t)
Space complexity - O(1)

Ques-7 The Two Dishes
Link - https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/MAX_DIFF

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n,s;
	    cin>>n>>s;
	   if(s<=n) cout<<s<<endl;
	   else cout<<(2*n-s)<<endl; 
	}

}

Time complexity - O(t)
Space compelxity - O(1)

Ques-8 Helpful Maths
Link - https://codeforces.com/problemset/problem/339/A

#include<bits/stdc++.h>
using namespace std;


int main(){
    string x;
    cin>>x;
    vector<char> numbers;
    for( char c: x){
        if(c != '+'){
            numbers.push_back(c);

        }
    }
    sort(numbers.begin(),numbers.end());
    string result;
    for( size_t i=0;i<numbers.size() ;++i){
        result+=numbers[i];
        if( i< numbers.size()-1){
            result+='+';
        }
    }
    cout<<result<<endl;


  return 0;
}

Time complexity - O(n) ## n= size of string
Space complexity - O(n/2) 


*/