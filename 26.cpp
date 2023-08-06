/*
26. Find a string of a length of 1000 for a large number. Output is the modulo of 11. The output specification is to return the remainder modulo 11 of the input.
Input:
121
Output:
0
Explanation
121 mod 11 = 0
*/
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    cin>>str;

    int res=0;
    for(int i=0 ; i<str.length(); i++){
        res= (res*10+str[i]-'0')%11;
    } 
    cout<<res;
    return 0;
}