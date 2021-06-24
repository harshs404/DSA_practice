#include<bits/stdc++.h>
using namespace std;
int main(){
int testCase;
cin>>testCase;
while(testCase-->0){
	int n,rev=0;
	cin>>n;
	while(n>0){
		rev=rev*10+(n%10);
		n/=10;
		}
	cout<<rev<<endl;
	}
}