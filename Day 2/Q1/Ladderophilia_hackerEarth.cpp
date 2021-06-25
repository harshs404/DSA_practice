#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j;
cin>>n;
for(i=1;i<=n-2;i++){
	cout<<"*   *"<<endl;
	for(j=1;j<=n-2;j++)
	{if(j%2!=0)
		{
		cout<<"*   *"<<endl;
		}else{
		cout<<"*****"<<endl;
		}
	}
	cout<<"*   *"<<endl;
}
}