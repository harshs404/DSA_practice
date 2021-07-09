#include<bits/stdc++.h>

using namespace std;

int main() {
    int t,costOfGreen,costOfBlue,n;
    cin >> t;
    
    while (t--) {
        int ans1=0,ans2=0;
        cin>>costOfGreen>>costOfBlue>>n;
        for(int i=0;i<n;i++)
            {
                int a,b;
                cin>>a>>b;
                if(a) ans1+=a;
                if(b) ans2+=b;
            }
        int maxCost=max(costOfBlue,costOfGreen);
        int minCost=min(costOfBlue,costOfGreen);
        if(ans1>=ans2)   
            cout<<ans1*minCost+ans2*maxCost;
        else
            cout<<ans2*minCost+ans1*maxCost;
        cout<<"\n";
    }
    return 0;
}