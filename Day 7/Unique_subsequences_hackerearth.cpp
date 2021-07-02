

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;
	cin>>tc;
	while(tc--)
	{	
		long long int n,sizeOfSubsequence=0;
		cin>>n;
		string s;
		cin>>s;
		for(int i =0;i<n;i++)
		{
			if(s[i]!=s[i+1])
				{
				sizeOfSubsequence++;
				
				}
			
		}
		cout<<sizeOfSubsequence<<endl;
	}
}