/*

Name - Himanshu Pokhriyal
DAte - 9 April , 2024
Version - C++ 17

Question-1 A. Yogurt Sale
Link -- https://codeforces.com/contest/1955/problem/A

Approach & Solution:

What we did here is basically calculated the 2 posiibilites like 
a  if the buyer buys all the bucket for one yogurt.
b it also have 2 cases ,
i-> if number of yougurts to buy is even , so it directly take 2 yogurt one.
ii-> if not then it buys the that one yogurt also and also that 2 yougurt to.

#include<bits/stdc++.h>
using namespace std;


int main() {

int t;
int n,a,b;
cin>>t;
while(t--){
cin>>n>>a>>b;
int prob_1=a*n;
int prob_2=(n/2)*b;

if(n % 2 !=0){
    // prob_2+=b;
prob_2+=a;
}

cout<<min(prob_1,prob_2)<<endl;


}

return 0;
}
Time Complexity --> O(N)
Space Complexity --> O(1)


Question -2 B. Progressive Square
Link - https://codeforces.com/contest/1955/problem/B

Approach & Solution:
Read the number of test cases t.
For each test case, do the following:
Read n, c, and d.
Initialize b as a vector of size n*n and read the elements into b.
Initialize matrix as a n*n matrix.
Find the minimum element in b, assign it to matrix[0][0], and remove it from b.
Fill the first row of the matrix using the rule ai,j+1=ai,j+d.
Fill the rest of the matrix using the rule ai+1,j=ai,j+c.
Sort b and the elements in matrix.
If b and the sorted elements in matrix are the same, print “YES”. Otherwise, print “NO”.


#include<bits/stdc++.h>
using namespace std;


int main() {
int t;
    cin >> t;
    while(t--){
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> b(n*n);
        for(int i = 0; i < n*n; i++){
            cin >> b[i];
        }

        vector<vector<int>> matrix(n, vector<int>(n));
        auto min_iter = min_element(b.begin(), b.end());
        matrix[0][0] = *min_iter;
        b.erase(min_iter);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 && j == 0)
                    continue;
                else if(i == 0)
                    matrix[i][j] = matrix[i][j-1] + d;
                else
                    matrix[i][j] = matrix[i-1][j] + c;
            }
        }

        sort(b.begin(), b.end());
        vector<int> sorted_matrix;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                sorted_matrix.push_back(matrix[i][j]);
            }
        }
        sort(sorted_matrix.begin(), sorted_matrix.end());

        if(sorted_matrix == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;

}


Time Complexity --> 
Space COmplexity -> 


















*/