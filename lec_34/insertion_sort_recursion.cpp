// insertion sort using recursion.

#include<iostream>
#include<array>
using namespace std;
void insertion_sort(int arr[],int n,int index){
    if(n==1){
        return;
    }
    int temp=arr[index];
    int j=index-1;
    for(;j>=0;j--){
        if(temp<arr[j]){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
    }
    arr[j+1]=temp;
    // index++ // Can use this or pre increment..
    insertion_sort(arr,n-1,++index);
}
int main(){
    int arr[]={10,1,7,4,8,2,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n,1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



// using loops 
