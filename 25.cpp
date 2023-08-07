/*
25. Execute a function that accepts the integer array of length ‘size’ 
and finds out the maximum number that can be formed by permutation.
Note: You will have to rearrange the numbers to make the maximum number.
-----------
Example
Input:
34 79 58 64
Output:
98765443
-----------
Explanation:-
All digits of the array are 3, 4, 7, 9, 5, 8, 6, and 4. 
The maximum number found after rearranging all the digits is 98765443
*/
#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int &ans){
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    cout<<solve(arr, ans);
    return 0;
}