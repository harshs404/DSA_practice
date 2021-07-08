#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc,numberOfJewelsMined=0,i,j;
	cin>>tc;
	while(tc--)
	{	
		string J,S;
		cin>>J>>S;
		numberOfJewelsMined=0;
		for(i=0;i<S.size();i++)
		{
			for(j=0;j<J.size();j++)
			{
				if(S[i]==J[j])
					{
						numberOfJewelsMined++;
						break;
					}
			}
		}
		cout<<numberOfJewelsMined<<endl;
	}
}