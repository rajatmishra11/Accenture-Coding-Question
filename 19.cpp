/*
19. We have mentioned a list of integers that have no duplicates. Find how many swaps it will take to sort the list in ascending order using Bubble sort.
Input:
3
5
2 1 4 6 3
10
123 21 34 45 25 675 23 44 55 900
1
23
Output:
3
16
0
*/

#include<bits/stdc++.h>
using namespace std;
 

int solve(int arr[], int n, int &ans){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
                ans++;
            }
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
        for(int i=0; i<n ;i++){
            cin>>arr[i];
        }
        int ans=0;
        cout<<solve(arr,n,ans)<<endl;
    }
    return 0;
}