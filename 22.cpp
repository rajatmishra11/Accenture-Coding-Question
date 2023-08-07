/*
22. Adam decides to do some charity work. From day 1 till day n, he will give i^2 coins to charity.
 On day ‘i’ (1 < = i < = n), find the number of coins he gives to charity.
Example 1
Input:
2
Output:
5
Explanation:
There are 2 days.
Example 2
Input:
3
Output:
14
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=1; i<=n; i++){
        ans+=(i*i);
    }
    cout<<ans;
    return 0;
}