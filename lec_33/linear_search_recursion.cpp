//Linear search using recursion
#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n,int key){
    if(n==0){
        return 0;
    }
    else if(arr[0]==key){
        return 1;
    }
    else{
        int remainingpart=linearSearch(arr+1,n-1,key);
        return remainingpart;
    }
}
int main(){
    int arr[]={1,3,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the key:";
    cin>>key;
    cout<< linearSearch(arr,n,key);
}