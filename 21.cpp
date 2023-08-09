/*
21. Form an array of 1000 integers and find out the second-largest number. If there is no second largest number, return the value to –1.
Example
Input 1:
3
Input 2:
{2,1,2}
Output:
1
Explanation
The integer 1 is the second largest in the array.
Example
Input 1:
5
Input 2:
{4,7,9,8,0}
Output:
8
*/

/*
Brute force->
O(nlogn)->
1. sort the given array in increasing order 
2. return arr[1] is second largest
*/

//O(n) solution->
#include<bits/stdc++.h>
using namespace std;

int arr[1000]; 
int second_largest(int arr[], int n){
    int max1=arr[0];
    int max2=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]<max1 and arr[i]>max2){
            max2=arr[i];
        }
    }
    if(max2==INT_MIN){
        return -1;
    }
    return max2;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    cout<<second_largest(arr,n);
    return 0;
}