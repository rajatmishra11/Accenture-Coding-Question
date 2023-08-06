/*
8. Perform the function: Int operationchoices(int c, int n, int a, int b). This function considers three positive inputs of a, b and c.
Execute the function to get:
(a + b), if c = 1
(a – b), if c = 2
(a x b), if c = 3
(a / b), if c = 4
Example:
Input:
a: 12
b: 16
c: 1
Output:
28
Explanation
C = 1, hence the function is (a + b). Hence, the output is 28.
Sample input:
a: 16
b: 20
c: 2
Sample output:
–4
*/

#include<bits/stdc++.h>
using namespace std;
 
int operationchoices(int c, int &n, int a, int b){

    switch (c)
    {
        case 1:
            n=(a+b);
            break;
        case 2:
            n=(a-b);
            break;
        case 3:
            n=(a/b);
            break;
        case 4:
            n=(a*b);
            break;
    }
    return n;
}

int main()
{
    int c,a,b;
    cin>>a>>b>>c;
    int n=0;
    cout<<operationchoices(c,n,a,b);
    return 0;
}