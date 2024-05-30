/*
Name - Himanshu Pokhriyal
version - C++17
Date - 30 MAy , 2024

Ques-1 Stair, Peak, or Neither?
Link - https://codeforces.com/contest/1950/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	if(a>=b) cout<<"NONE"<<endl;
	else {
		if(b>c) cout<<"PEAK"<<endl;
		else if(b<c) cout<<"STAIR"<<endl;
		else cout<<"NONE"<<endl;
	}

}

Time complexity - O(1)
Space complexity - O(1)

Ques- 2 Clock Conversion
Link - https://codeforces.com/contest/1950/problem/C

#include <bits/stdc++.h>
using namespace std;

vector<string> splitString(const string& str, char delimiter) {
    vector<string> result;
    stringstream ss(str);
    string item;

    while (getline(ss, item, delimiter)) {
        result.push_back(item);
    }

    return result;
}

string convertTo12HourFormat(const string& s) {
    char delimiter = ':';
    vector<string> splittedStrings = splitString(s, delimiter);
    int hh = stoi(splittedStrings[0]);
    string mm = splittedStrings[1];
    string period = "AM";

    if (hh == 0) {
        hh = 12;  // Midnight case
    } else if (hh == 12) {
        period = "PM";  // Noon case
    } else if (hh > 12) {
        hh -= 12;
        period = "PM";
    }

    string hh_str = (hh < 10) ? "0" + to_string(hh) : to_string(hh);

    return hh_str + ":" + mm + " " + period;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << convertTo12HourFormat(s) << endl;
    }

    return 0;
}

Time complexity - O(t)
Space complexity - O(n) ## n here is size of string


Ques-3 Product of Binary Decimals
Link - https://codeforces.com/contest/1950/problem/D

#include <bits/stdc++.h>
using namespace std;

bool isBinaryDecimal(int n) {
    // Convert the integer to a string
    string str = to_string(n);
    
    // Check each character in the string
    for (char c : str) {
        if (c != '0' && c != '1') {
            return false; // Found a digit that is not 0 or 1
        }
    }
    return true; // All digits are 0 or 1
}

int main() {
    int n,t;
	cin>>t;
	while( t-- ){
    cin >> n;

    if (isBinaryDecimal(n)) {
       cout<<"Yes"<<endl;
    } else {
        while(n<11){
			int rem = n% 11;
			
			if( rem > 1 && rem< 11){

			cout<<"NO"<<endl;
			break;

			}
			n= rem;

		}
		cout<<"YES"<<endl;
    }
	}

    return 0;
}

Time complexity - O(t)
Space complexity - O(1)


*/