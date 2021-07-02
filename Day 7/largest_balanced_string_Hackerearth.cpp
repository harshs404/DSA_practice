// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;
	cin>>tc;
	while(tc--)
	{
		string s;
		cin>>s;
		int a1=0,a2=0,a3=0;
		for (int i =0;i<s.size();i++)
		{
			if(s[i]=='(')
				a1++;
			else if(s[i]==')')
				a1--;
			if(s[i]=='{')
				a2++;
			else if(s[i]=='}')
				a2--;
			if(s[i]=='[')
				a3++;
			else if(s[i]==']')
				a3--;
		}
		cout<<s.size()-abs(a1)-abs(a2)-abs(a3)<<endl;
	}
}