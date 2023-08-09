/*
23. Perform a function to reverse a string word-wise. The input here will be the string. In the output, the last word mentioned should come as the first word and vice versa.
Example
Input:
Welcome to code
Output:
code to Welcome
Explanation
The Reversed string word wise function is applied.
Example
Input:
Code to Crack Puzzle
Output:
Puzzle Crack to Code
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{   
    string str;
    getline(cin, str);
    stack<string>st;
    string temp="";
    string ans="";
    for(int i=0; i<str.size(); i++){
        if(str[i]!=' '){
            temp+=str[i];
        }
        else{
            st.push(temp);
            temp="";
        }
    }
    st.push(temp);
    temp="";
    while(!st.empty()){
        temp=st.top();
        st.pop();
        ans+=(temp+' ');
        //cout<<temp<<","<<ans<<endl;
    }
    cout<<ans;
    return 0;
}