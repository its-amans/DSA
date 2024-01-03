//Search in rotated sorted array

// #include<iostream>
// using namespace std;
// int rotatearray(int arr[],int n,int s,int e){
//     int mid=s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]>arr[mid+1]){
//             s=mid+1;
//         }
//         else if (arr[mid]<arr[mid+1]) {
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return mid;
// }
// int binarySearch(int arr[],int s,int e,int k){
//     int start=s;
//     int end=e;
//     int mid=start+(end-start)/2;
//     while(start<=end){
//         if(arr[mid]==k){
//             return mid;
//         }
//         else if(arr[mid]>k){
//             end=mid-1;
//         }
//         else if(arr[mid]<k){
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return -1;
// }

// int main(){
//     int arr[]={7,9,1,2,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int s=0;
//     int e=n-1;
//     int key;
//     cout<<"Enter the key";
//     cin>>key;
//     int pivot=rotatearray(arr,n,s,e);
//     cout<<pivot<<endl;
//     if((key>=arr[pivot]) && (key<=arr[n-1]))
//     {
//         cout<< binarySearch(arr,pivot,e,key);
//     }
//     else{
//         cout<< binarySearch(arr,s,pivot-1,key);
//         }
// }



// Using recursion    // working
#include<iostream>
using namespace std;
int  lower_pivot(int arr[],int s,int e){
    int mid=s+(e-s)/2;
        if(s>=e){
            return -1;
        }
        if(arr[mid]>arr[mid+1]){
            lower_pivot(arr, mid+1, e);
        }
        else if (arr[mid]<arr[mid+1]) {
            lower_pivot(arr, s, mid);
        }
        return mid;
}
int binarySearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=(s+e)/2;
        if(s>e){
            return 0;
        }
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            binarySearch(arr, key,s,mid-1);
        }
        else{
            binarySearch(arr, key,mid+1,e);
        }
}

int main(){
    int arr[]={7,9,1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    int key;
    cout<<"Enter the key";
    cin>>key;
    int pivot=lower_pivot(arr,s,e)+1;
// pivot ki value 1 km aa rahi thi sbme islea usme maine 1 add kr diya.

    cout<<pivot<<endl<<endl;
    if((key>=arr[pivot]) && (key<=arr[n-1]))
    {
        cout<< binarySearch(arr,pivot,e,key);
    }
    else{
        cout<< binarySearch(arr,s,pivot-1,key);
        }
}