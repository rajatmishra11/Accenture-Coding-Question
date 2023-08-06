/*
28. Write a function to find roots of a quadratic equation ax^2 + bx + c = 0.
Note: The formula to find the roots of a quadratic equation is given below:
Example
Input 1: 1
Input 2: 2
Input 3: -3
Output:
{3.0,–1.0}
Explanation:
On substituting the values of a, b, and c in the formula, the roots will be as follows:
+X = 3.0
-X = –1.0
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 int a, b,c;
 cin>>a>>b>>c;
 int x=b*b - 4*a*c;
 if(x<0){
    cout<<"Roots are Imaginary";
    return 0;
 }
 cout<<"Roots are Real : ";
 int d=sqrt(x);
 int x1= (-1*b+d)/2*a;
 int x2= (-1*b-d)/2*a;
 cout<<"{"<<x1<<","<<x2<<"}";
    return 0;
}