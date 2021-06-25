#include<bits/stdc++.h>
using namespace std;
int main(){
long long int d,oc,of,od,cs,cb,cm,cd,onlineTaxiFare,ClassicTaxiFare;
cin>>d;
cin>>oc>>of>>od;
cin>>cs>>cb>>cm>>cd;
onlineTaxiFare = (oc)+((d-of)*od);
ClassicTaxiFare = cb + ((d/cs)*cm) + (d *cd);
if(onlineTaxiFare<=ClassicTaxiFare)
	{
		cout<<"Online Taxi"<<endl;
	}
else
	{
		cout<<"Classic Taxi"<<endl;
	}
}