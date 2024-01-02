// binary search using recursion
#include<iostream>
using namespace std;
bool binarySearch(int arr[],int key,int s, int e){
        if(s>e){
            return 0;
        }
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return 1;
        }
        else if(arr[mid]>key){
            binarySearch(arr, key,s,mid-1);
        }
        else{
            binarySearch(arr, key,mid+1,e);
        }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    int key;
    cout<<"Enter the key:";
    cin>>key;
    cout<<binarySearch(arr,key,s,e);
}