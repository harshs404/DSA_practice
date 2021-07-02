// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int res,n;
	string s;
	cin>>s;
	res=s.size();
	n=s.size();
	for(int i=0;i<n;i++)
	{
		if(s[i]==s[i+1])
			res++;
		else if(n%2!=0 && s[i]==s[n-i-1])
			res++;
		break;
	}
	cout<<res;
}