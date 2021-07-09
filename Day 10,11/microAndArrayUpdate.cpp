#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    int n,k,minimum=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            minimum=a[0];
        }
    for(int i = 0; i < n; i++) {
      // cout<<" "<<a[i];
      if(minimum > a[i])
         minimum= a[i];
    }
    if((k-minimum)>0)
    cout<<k-minimum<<endl;
    else
    cout<<"0"<<endl;
    }
    return 0;
}