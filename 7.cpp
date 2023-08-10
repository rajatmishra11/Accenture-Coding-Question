/*
7. The given function has a string (str) and two characters, ch1 and ch2. 
Execute the function in such a way that str returns to its original string, 
and all the events in ch1 are replaced by ch2, and vice versa.
Replacecharacter(Char str1, Char ch1, Int 1, Char ch2)
Assumption
This string has only alphabets that are in lower case.
Example
Input:
str: apples
ch1: a
ch2: p
Output:
paales
Explanation
All the ‘a’ in the string is replaced with ‘p’. And all the ‘p’s are replaced with ‘a’.
*/

#include<bits/stdc++.h>
using namespace std;
string Replacecharacter(string str1, char ch1, int len, char ch2){
    for(int i=0; i<len; i++){
        if(str1[i]==ch1){
            str1[i]=ch2;
        }
        else if(str1[i]==ch2){
            str1[i]=ch1;
        }
    }
    return str1;
}
int main()
{
    string str1;
    char ch1,ch2;
    cin>>str1>>ch1>>ch2;
    int len=str1.size();
   cout<< Replacecharacter(str1, ch1,len, ch2);
    return 0;
}