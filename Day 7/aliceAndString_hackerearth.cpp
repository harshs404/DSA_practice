// Write your code here
#include<bits/stdc++.h>
using namespace std;

bool checkOne(string a,string b){
	// string a,b;
	// cin>>a>>b;
	if(a.size()!=b.size())
		return false;
	for(int i = 0; i<a.size();i++)	
		if(b[i]<a[i] || a[i]=='z')
			return false;
		return true;
	
}

int main() {
    string a, b; 
    cin>>a>>b;
    bool check1 = checkOne(a,b);
    if(check1) cout<<"YES";
    else cout<<"NO";
    return 0;       
}

