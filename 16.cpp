/*
16. In a given list of integers, find the number that has the highest frequency. If there are one or more such numbers, give the smaller one as output.
Input:
3
7
2 4 5 2 3 2 4
6
1 2 1 1 2 1
10
1 1 1 1 1 1 1 1 1 1
Output:
2
1
1
*/

#include<bits/stdc++.h>
using namespace std;
 

int solve(int arr[], int &n){
    map<int,int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    int max=INT_MIN;
    int ans=0;
    for(auto it: mp){
        if(it.second>max){
            max=it.second;
            ans=it.first;
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
    cout<<solve(arr,n)<<endl;
 }
    return 0;
}