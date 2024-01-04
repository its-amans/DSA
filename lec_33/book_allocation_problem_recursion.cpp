// book allocation problem using binaryb search

#include<iostream>
using namespace std;
int get_max(int arr[],int n){
    int max=-1;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[max]){
            max=i;
        }
        else{
            max=arr[i];
        }
        return ans;
    }
    
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]); // no of books
    int m=2; // no of students
    cout<<get_max(arr,n);
    }