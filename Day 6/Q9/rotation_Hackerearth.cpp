// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,count=0;
	string s,t;
	cin>>n>>s>>t;
	reverse(s.begin(),s.end());
	for( int i = 0 ;i<n;i++)
	{
		if(string(s.rbegin(),s.rend())!=t)
		{
			count++;
			s.pop_back();
			t.pop_back();
		}
	}
	 cout<<count<<endl;
}