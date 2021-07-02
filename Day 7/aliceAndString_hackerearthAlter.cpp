// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main() {
    string a, b; 
    cin>>a>>b;
    if(a.size()!=b.size())
		cout<<"NO";
	for(int i = 0; i<a.size();i++)	
		if(b[i]<a[i] || a[i]=='z')
			cout<<"NO";
		cout<<"YES";   
}

