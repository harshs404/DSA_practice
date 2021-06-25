#include<bits/stdc++.h>
using namespace std;
int main(){
int d,toffee=0;
cin>>d;
while(d--){
	int r,x;
	cin>>r>>x;
	double dist=100*x;
	double p=2*3.14*r;
	if(dist>p){
		toffee++;
	}
	}
	cout<<toffee;
}