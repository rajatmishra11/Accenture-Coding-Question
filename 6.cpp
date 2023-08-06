/*
6. Execute the function for the given purpose.
When the sum of the digits exceeds a total of 9, a carry digit is added to the right-left of the digit. Execute the function: Int Numberofcarry(Integer num 1, Integer num 2)
Assumption
num1, num2 > = 0
Example
Input:
num1: 451
num2: 349
Output:
2
Explanation
When we add these two numbers from the right to the left, we get two carries. The value of each of the carries is 1. Hence, the output is the total of these two carries, i.e., 2.
Sample input:
num1: 23
num2: 563
Sample output:
0
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{

 int n,m;
 cin>>n>>m;
 int carry_count=0;
 int carry=0;
 while(n and m){
    int lastdigit_n= n%10;
    int lastdigit_m= m%10;
    if( lastdigit_m+ lastdigit_n+ carry>9){
        carry= (lastdigit_m+ lastdigit_n+ carry)/10;
        carry_count+=1;
    }
    n/=10;
    m/=10;
 }
 
 cout<<carry_count<<endl;
    return 0;
}