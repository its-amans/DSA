//SORTED ROTATED ARRAY

#include<iostream>
using namespace std;
int pivot_element(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
     if(arr[mid]>=arr[0]){
        s=mid+1;
     }
     else{
        e=mid;
     }
     mid=s+(e-s)/2;
    }
    return s;
}

int binarysearch(int arr[],int s,int e,int k){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int arr[]={7,9,1,2,3,4};
    int k;
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    cout<<"enter the key";
    cin>>k;
    int pivot=pivot_element(arr,6);
    cout<<"pivot eleme:"<<pivot<<endl;
    if((k>=arr[pivot]) && (k<=arr[n-1]))
    {
        cout<< binarysearch(arr,pivot,e,k);
    }
    else{
        cout<< binarysearch(arr,s,pivot-1,k);
    }
}




