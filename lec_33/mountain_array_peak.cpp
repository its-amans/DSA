// peak element index in mountain array using two pointer approach.
// #include<iostream>
// using namespace std;
// int  mountain_array_peak(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]>arr[mid+1]){
//             e=mid;
//         }
//         else if (arr[mid]<arr[mid+1]) {
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return mid;
// }
// int main (){
//     int arr[]={1,2,5,1,0};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<mountain_array_peak(arr,n);
// }


// using recursion

#include<iostream>
using namespace std;
int  mountain_array_peak(int arr[],int n,int s,int e){
    int mid=s+(e-s)/2;
        if(s>=e){
            return -1;
        }
        else{
        if(arr[mid]>arr[mid+1]){
            mountain_array_peak(arr,n,s,mid);
        }
        else if (arr[mid]<arr[mid+1]) {
            mountain_array_peak(arr,n,mid+1,e);
        }
        return mid+1;
    }
}
int main (){
    int arr[]={1,2,5,6,7,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    cout<<mountain_array_peak(arr,n,s,e);
}
