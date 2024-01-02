// // Find thatr the array is sorted or not using recursion

// #include<iostream>
// using namespace std;
// int isSorted(int a[],int n){

//     // base case
//     if(n==0||n==1){
//         return 1;
//     }
//     //prog statements
//     if(a[0]>a[1]){
//         return 0;
//     }
//     // Recursive relation.
//     else{
//         isSorted(a+1,n-1);
//     }
// }
// int main(){
//     int arr[]={1,2,5,4,6,3,7,9};
//     cout<<isSorted(arr,7);    
// }

// Find the sum of the array using recursion
// #include<iostream>
// using namespace std;
// int sum(int arr[],int n){
//     if(n==0){
//         return 0;
//     }
//     else if(n==1){
//         return arr[0];
//     }
//     else{
//         int remainingpart=sum(arr+1,n-1);
//         int ans= arr[0]+remainingpart;
//         return ans;
//     }
// }
// int main(){
//     int arr[]={3,4,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<sum(arr,n);
// }
