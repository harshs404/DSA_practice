// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count=0;
	string A,B;
	cin>>A>>B;
	for(int i = 0; i<A.size();i++)
	{
		if(A[i]!=B[i])
			count++;
	}
	if(count%2)
		cout<<"-1";
	else
		cout<<count/2;
}