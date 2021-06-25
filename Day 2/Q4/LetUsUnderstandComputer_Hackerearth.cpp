#include<bits/stdc++.h>
using namespace std;

int* dectobinary(int n)
{
int bin[32];
int i=0;
	while(n>0)
	{
		bin[i]=n%2;
		n=n/2;
		i++;
	}
	return bin;
}

int main(){
int tc;
cin>>tc;
while(tc--)
	{
		int x,result,ans=0;
		cin>>x;
		for(int i=1;i<=x;i++)
		{
			result=x/i;
			int binI=dectobinary(i);
			int binRes=dectobinary(result);
			cout<<binI<<" "<<binRes<<endl;
		}
		cout<<ans<<endl;
	}
}