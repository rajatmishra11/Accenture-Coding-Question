/*
29. Write a function to find if the given string is a palindrome or not. Return 1 if the input string is a palindrome, else return 0.
Input:
level
Output:
1
Explanation:
The reverse of the string ‘level’ is ‘level’. As they are the same, the string is a palindrome.
*/

#include<bits/stdc++.h>
using namespace std;
 

bool check_palindrome(string str){
    int len=str.length();
    for(int i=0 ; i<len/2; i++){
        if(str[i]!=str[len-i-1]) return 0;
    }
    return 1;
}

int main()
{
    string str;
    cin>>str;
    cout<<check_palindrome(str);
    return 0;
}