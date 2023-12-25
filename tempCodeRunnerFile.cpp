#include<iostream>
using namespace std;
int minelement(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min<arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int maxelement(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max>arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[]={-1,0,3,-2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxelement(arr,n)<<endl;
    cout<<minelement(arr,n)<<endl;
}