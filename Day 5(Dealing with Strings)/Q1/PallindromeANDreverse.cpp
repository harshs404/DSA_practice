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
		for(int i = str.size()-1;i>=0;i--)
		{
			str_rev.push_back(str[i]);
		}
		cout<<str_rev<<" ";
		if(str==str_rev){
			cout<<"String is Pallindrome"<<endl;
		}else{
			cout<<"String is not pallindrome"<<endl;
		}
	}
}