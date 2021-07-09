#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        cout<<max((7*x),(y*d)+z*(7-d))<<endl;
    }
    return 0;
}