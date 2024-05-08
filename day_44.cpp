/*
Name - himanshu pokhriyal
Date - 8 May, 2024
Version - C++17


Ques-1 Complementary Strand in a DNA
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DNASTRAND

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n;
	    
	    cin>>n;
	    char str[n];
	    cin>>str;
	        
	     for( int i=0;i<n;i++){
	         if(str[i] == 'A') {
	             str[i] ='T';
	         }
	         else if(str[i] == 'T'){
	             str[i] = 'A';
	         }
	         else if( str[i] == 'C'){
	             str[i]='G';
	             
	         }
	         else if( str[i] == 'G'){
	             str[i] = 'C';
	         }
	         
	     }   
	     cout<<str<<endl;
	    }
	    
	    
	

}
Time Complexity - O(t)
Space complexity - O(1)

Ques-2 Chef and Water Bottles
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFBOTTLE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while( t-- ){
        int n,x,k;
        cin>>n>>x>>k;
        int dividend=k/x;
        if(x>k) cout<<"0"<<endl;
        
        else if(dividend>=n) cout<<n<<endl;
        else if( dividend<n) cout<<dividend<<endl;
        
    }
}

Time Complexity - O(t)
Space complexity - O(1)


*/


	#include<bits/stdc++.h>
	using namespace std;

	void generate_all_string(int k , char str[] , int n){
		if( k == n){
			str[n]='\0';
			cout<<str<<" ";
			return ;
		}

		if(str[n-1] == '1'){
			str[n]='0';	
			generate_all_string(k,str,n+1);
		}
		if(str[n-1]== '0'){
			str[n] ='0';
			generate_all_string(k,str,n+1);
			str[n]='1';
			generate_all_string(k,str,n+1);
		}

	}

	void gen_all(int k){
		if(k<=0){
			return ;
		}
		char str[k+1];

		str[0]='0';
		generate_all_string(k,str,1);

		str[0]='1';
		generate_all_string(k,str,1);
	}

	int main(){
		int k =4;
		gen_all(k);
		return 0;

	}