#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int size,int num){
    int l=0;
    int r=size-1;
    while(l<=r){
        int mid= l+(r-l)/2;
        if(arr[mid]==num)
            return mid;
        else if(arr[mid]<num)
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
}

int main(){
    int size,num,op;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched:";
    cin>>num;
    op=binary_search(arr,size,num);
    if(op==-1)
        cout<<"Element Not Found";
    else
        cout<<"Element Found At Position:"<<op<<endl;
    return 0;
}
