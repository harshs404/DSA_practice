
//Time complexity : O(n) 
// Auxiliary Space : O(d)
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,d;
	    cin>>n>>d;
	    int a[n],arr[n]={};
	    for(int i =0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(i+d>=n)
	        {
	            arr[i]=arr[i]+a[i+d-n];
	        }
	        else{
	            arr[i]=arr[i]+a[i+d];
	        }
	    }
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
