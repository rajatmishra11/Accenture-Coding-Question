/*
24. Find the sum of the divisors for the N integer number.
Example 1
Input:
6
Output:
12
Explanation
Divisors of 6 are 1, 2, 3, and 6. The sum of these numbers is 12.
Example 2
Input:
36
Output:
91
*/

#include<bits/stdc++.h>
using namespace std;
 
// int main()
// {   
//     //O(n/2) solution
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=1; i<=n/2; i++){
//         if(n%i==0) {
//             sum+=i;
//         }
//     }
//     sum+=n;
//     cout<<sum;
//     return 0;
// }

//efficient solution->
//O(sqrt(n));
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            if(n/i==i){
                cout<<i<<endl;
                sum+=i;
            }
            else{
               // cout<<i<<" "<<n/i<<endl;
                sum+=(i+n/i);
            }
        }
    }
   cout<<sum;
    return 0;
}


