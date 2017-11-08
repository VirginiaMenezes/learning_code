/*======================================================================================================
Given an array of integers, calculate which fraction of its elements are positive, 
which fraction of its elements are negative, and which fraction of its elements are zeroes, respectively. 
Print the decimal value of each fraction on a new line.
Note: This challenge introduces precision problems. The test cases are scaled to six decimal places

	Sample Input
	6
	-4 3 -9 0 4 1         

	Sample Output
	0.500000
	0.333333
	0.166667
Source: https://www.hackerrank.com/challenges/plus-minus/problem
========================================================================================================*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>      // setprecision
using namespace std;


int main(){
    int n;
    double pos=0, neg=0, zer=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for (int arr_i = 0; arr_i < n; arr_i++)
    {
        if (arr[arr_i] > 0)
            pos++;
        else if (arr[arr_i] < 0)
            neg++;
        else
            zer++;
    }
    cout << std::fixed;
    cout << setprecision(6) << pos/n << endl;
    cout << neg/n << endl;
    cout << zer/n << endl;
    return 0;
}
