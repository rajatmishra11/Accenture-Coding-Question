/*
27. Find out if the given set of points are on a straight line or not. If the points are on a straight line, then return the equation. If not, then return 0.
Example
Input:
3
1 1 2 2 3 3
Output:
1x – 1y = 0
Explanation
The three points here are [1,1], [2,2], and [3,3]. These lie on a line, so the function returned the equation.
*/

#include<bits/stdc++.h>
using namespace std;
 
bool solve(int a, int b, int c, vector<pair<int,int>>v){
    for(auto it: v){
        int x=it.first;
        int y=it.second;
        cout<<x<<","<<y<<endl;
        if(a*x+b*y+c!=0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    vector<pair<int,int>>v;
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    int x1=v[0].first;
    int y1=v[0].second;
    int x2=v[1].first;
    int y2=v[1].second;

    //eqution in the form of ax+by+c=0;
    int a=(y1-y2);
    int b=(x2-x1);
    int c=(x1*y2-x2*y1);
    if(solve(a,b,c,v)){
        cout<<"Equation of line is: "<<a<<"x+ "<<b<<"y+ "<<c<<"= 0 "<<endl;
    }
    else{
        cout<<"Not in Straight Line";
    }

    return 0;
}