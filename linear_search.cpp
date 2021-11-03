#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int num,int size){
int flag=0;
for(int i=0;i<size;i++){
        if(num==arr[i]){
            flag=1;
            cout<<"Element found at Index: "<<i<<endl;
            break;
        }
    }
    if(flag==0)
        cout<<"Element Not Found";
}

int main(){
    int size;
    cout<<"Enter size of the array:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int n,flag=0;
    cout<<"Enter an element to search:"<<endl;
    cin>>n;
    linear_search(arr,n,size);
}


