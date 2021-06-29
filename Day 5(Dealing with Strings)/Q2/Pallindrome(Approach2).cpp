#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;
	cin>>tc;
	cin.ignore();
	while(tc--){
		string str;
		getline(cin,str);
		string str_rev;
		int n=str.size()-1;
		for(int i = 0;i<=(n/2);i++)
		{
			if(str[i]==str[n-i-1])
			{
				cout<<"String is Pallindrome"<<endl;
			}
			else
			{
			cout<<"String is not pallindrome"<<endl;
			}
		}
		
	}
}