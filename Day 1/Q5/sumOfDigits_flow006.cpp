#include<bits/stdc++.h>
using namespace std;
int main(){
int testCase;
cin>>testCase;
while(testCase-->0){
	int n,sum=0;
	cin>>n;
	while(n>0){
		sum=sum+(n%10);
		n/=10;
		}
	cout<<sum<<endl;
	}
}