/*
30. Write a function to check if the given two strings are anagrams or not. Return ‘Yes’ if they are anagrams, otherwise, return ‘No’.
Example
Input 1: build
Input 2: dubli
Output:
Yes
*/

#include<bits/stdc++.h>
using namespace std;
 
bool anagram(string str1, string str2){
    map<char,int>mp;
    for(int i=0; i<str1.size(); i++){
        mp[str1[i]]++;
    }
    for (int i = 0; i < str2.size(); i++)
    {
        if(mp.find(str2[i])==mp.end()){
            return 0;
        }
        else{
            mp[str2[i]]--;
        }
    }
    for(auto it:mp){
        if(it.second!=0){
            return 0;
        }
    }
    return 1;

}

int main()
{
  string str1, str2;
  cin>>str1>>str2;
  cout<<anagram(str1,str2);
    return 0;
}