//mountain peak/max element of array

#include<iostream>
using namespace std;
int mountainarray(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}
int main(){
    int arr[]={1 ,2 ,5, 1, 0};
    cout<<mountainarray(arr,5);
    
}

