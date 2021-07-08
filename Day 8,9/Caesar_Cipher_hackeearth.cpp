#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	string s;
	cin>>n>>s>>k;
	for(int i = 0; i<=n;i++)
	{
		if(isalpha(s[i]))
			s[i]=s[i]+k;
	}
	cout<<s<<endl;
}