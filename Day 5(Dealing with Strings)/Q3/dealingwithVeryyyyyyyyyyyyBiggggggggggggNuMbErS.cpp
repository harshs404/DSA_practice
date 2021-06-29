//Question: WAP to print last digit at end of number 12345678901223465980943708439043218840391280943093489432098493203948756394825
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int last_digit = s[s.size()-1]-'0';
	cout<<last_digit<<endl;
}