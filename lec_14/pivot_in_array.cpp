//pivot elements in rotated sorted array using binary search

//for lover pivot element

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
int main(){
    int arr[]={7,9,1,2,3,4};
    cout<<pivot_element(arr,6);
}




//for heigher pivot element


// #include<iostream>
// using namespace std;
// int pivot_element(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]<=arr[0]){
//              s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return s;
// }
// int main(){
//     int arr[]={8,9,11,3,4,5};
//     cout<<pivot_element(arr,6);
// }


