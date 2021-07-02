// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;
	cin>>tc;
	while(tc--)
	{
		string s,a,s1,s2;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			{
				a.push_back(s[i]);
			}
		}
		s1=a;
		sort(s1.begin(),s1.end());
		s2=s1;
		reverse(s2.begin(),s2.end());
		if(a==s1)
			cout<<"Good"<<endl;
		else if(a==s2)
			cout<<"Worst"<<endl;
		else
			cout<<"Bad"<<endl;
	}
}