// Problem URL
// https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/decode-1-6eab2976/
#include<bits/stdc++.h>
using namespace std;
string decode(string);
int main()
{
	/* code */
	int tc;
	cin>>tc;
	while(tc--)
	{
		string s;
		cin>>s;
		cout<<decode(s)<<endl;
	}
	return 0;
}

string decode(string s)
{
	string res;
	int k=0;
	if(s.size()%2==0)
		k=1;
	for(int i=1;i<s.size();i+=2)
	{
		res.push_back(s[s.size()-1-i]);
	}
	for(int i=k;i<s.size();i+=2)
	{
		res.push_back(s[i]);
	}
	return res;
}