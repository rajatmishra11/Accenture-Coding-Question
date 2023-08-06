/*
11. The binary number system only uses two digits 1 and 0.
Perform the function: Int OperationsBinarystring(char* str)
Assumptions
o	Return to –1 if str is null.
o	The str is odd.
 
Example:
Input:
Str: ICOCICIAOBI
Output:
1
Explanation
The input when expanded is “1 XOR 0 XOR 1 XOR 1 XOR 1 AND 0 OR 1”. The result becomes 1 and hence the output is 1.
*/
#include<bits/stdc++.h>
using namespace std;
//11th Question
int check(char ch){
    if(ch=='I') return 1;
    else return 0;
}

int solve(string str,int &ans){
    //cout<<str[0]<<endl;
    for(int i=0; i<str.size()-1; ){
        int op2=check(str[i+1]);
       // cout<<"ans="<<ans<<" "<<"op2="<<op2<<"op1="<<str[i]<<endl;
        if(str[i]=='C'){
            ans=ans^op2;
        }
         else if(str[i]=='A'){
             ans=ans&op2;
        }
        else if(str[i]=='B'){
            ans=ans|op2;
         }
         i=i+2;
    }
    return ans;
}

int main()
{
 
 string str;
 cin>>str;
 int ans=1;
 int op1=check(str[0]);
 int op2=check(str[1]);
 int len=str.length();
 if(str[1]=='C'){
    ans=op1^op2;
 }
 else if(str[1]=='A'){
    ans=op1&op2;
 }
 else if(str[1]=='B'){
    ans=op1|op2;
 }
if(len<3) {
    cout<<"-1"<<endl;
    return -1;
}
//cout<<str.substr(3)<<" ans:"<<ans<<endl;
 solve(str.substr(3),ans);
 cout<<ans<<endl;

    return 0;
}