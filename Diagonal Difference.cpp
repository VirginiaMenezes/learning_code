/*====================================================================================================
 Given a square matrix of size , calculate the absolute difference between the sums of its diagonals.
 Source: https://www.hackerrank.com/challenges/diagonal-difference/problem
 ======================================================================================================*/
 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum_d1=0;   // sum of primary diagonal elements
    int sum_d2=0;   // sum of secondary diagonal elements
    int diff=0;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i==j)
                sum_d1 += a[i][j];
            if ((i+j) == (n-1))
                sum_d2 += a[i][j];
        }
    }
    //cout << sum_d1 << " " << sum_d2 <<endl;
    diff = sum_d1-sum_d2;
    cout<< abs(diff);
    return 0;
}

