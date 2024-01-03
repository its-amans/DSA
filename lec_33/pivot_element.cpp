// Lower pivot using two pointer

// #include<iostream>
// using namespace std;
// int  lower_pivot(int arr[],int n){
//     int s=0;
//     int e=n-1;
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
// int main (){
//     int arr[]={8,9,11,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<lower_pivot(arr,n);
// }

//  lower pivot using recursion

// #include<iostream>
// using namespace std;
// int  lower_pivot(int arr[],int s,int e){
//     int mid=s+(e-s)/2;
//         if(s>=e){
//             return -1;
//         }
//         if(arr[mid]>arr[mid+1]){
//             lower_pivot(arr, mid+1, e);
//         }
//         else if (arr[mid]<arr[mid+1]) {
//             lower_pivot(arr, s, mid);
//         }
//         return mid;
// }
// int main (){
//     int arr[]={8,9,11,12,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int s=0;
//     int e=n-1;
//     cout<<lower_pivot(arr,s,e)+1;  // i dont know answer is 1 less than required in all cases so maine 1 add krr diya.
// }


//heigher pivot using binary search// confusion

// #include<iostream>
// using namespace std;
// int  heigher_pivot(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }
//         else if (arr[mid]>arr[mid+1]) {
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return mid;
// }
// int main (){
//     int arr[]={7,9,1,2,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<heigher_pivot(arr,n);
// }