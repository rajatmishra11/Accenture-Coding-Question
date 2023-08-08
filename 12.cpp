/*
12. Perform the function Checkpassword (char str[], int n)
Execute the function which happens to be 1 if the str is a valid password or it remains 0.
Conditions for a valid password: 
o	The password should have at least 4 characters.
o	It should have at least 1 digit.
o	It should have one capital letter.
o	It should not have any spaces or obliques (/).
o	The first character should not be a number.
 
Assumption
The input is not empty.
Example
Input:
aA1_67
Output:
1
*/

#include<bits/stdc++.h>
using namespace std;
 
bool Checkpassword (char str[], int n){
    if(n<4) return 0;
    if(isdigit(str[0])) return 0;
    bool dig=0;
    bool cap=0;
    for(int i=0; i<n; i++){
        if(str[i]==' ' or str[i]=='/') return 0;
        if(isdigit(str[i])) dig=1;
        if(isupper(str[i])) cap=1;
    }
    if( dig and cap) return 1;
    else return 0;
}

int main()
{
    string str;
    cin>>str;
    int n=str.size();
    char charArray[n+1];
    strcpy(charArray, str.c_str());
    cout<< Checkpassword(charArray, n);
    return 0;
}