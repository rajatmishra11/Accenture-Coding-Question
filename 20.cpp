/*
20. Write a program to count the number of swaps required to sort a given list of integers in ascending order using the selection sort algorithm.
Input:
2
3
4 2 5
5
10 11 8 7 1
Output:
1
3
*/

#include<bits/stdc++.h>
using namespace std;
 

int selectionsort(int arr[], int n, int &ans){
    int min_idx;
     for(int i=0;i<n-1;i++){
        min_idx=i;
           for(int j=i+1;j<n;j++){
               if(arr[min_idx]>arr[j]){
                   min_idx=j;
               }
           }
           if(min_idx!=i){
            swap(arr[min_idx], arr[i]);
            ans++;
           }
       }
       return ans;
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ans=0;
        cout<<selectionsort(arr, n,ans)<<endl;
    }
 
 
 
    return 0;
}