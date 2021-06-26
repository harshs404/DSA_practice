#include<bits/stdc++.h>
using namespace std ;
int main(){
int n,sum=0,i,flag;
cin>>n;
for(i=1;i<n && sum<n;i++ )
{
	sum=sum+i;
	flag= 0;
	if(n-sum>0)
		{
		sum=sum+(2*i);
		flag =1;
		}
}
if(flag==0){
cout<<"Patlu"<<endl;
}
else{
cout<<"Motu"<<endl;
}
}