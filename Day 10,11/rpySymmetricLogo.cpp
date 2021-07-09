#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       char a[n][n]; 
       //input a 2D array of n*n
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
       }
       //flagging
       bool flag=true;
        for(int i=0;i<n;i++)
        {
            int j=0,k=n-1;
            while(j<k)
            {
                if(a[i][j]!=a[i][k])
                {
                    flag=false;
                }
                j++;
                k--;
            }
        }
        for(int i=0;i<n;i++)
        {
            int j=0,k=n-1;
            while(j<k)
            {
                if(a[j][i]!=a[k][i])
                {
                    flag=false;
                }
                j++;
                k--;
            }
        }
        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}