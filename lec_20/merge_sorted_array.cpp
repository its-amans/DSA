//Merge two sorted array
//Created by Aman Srivastava
//Also can be easily done by array
// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>& v1,vector<int>&v2,vector<int>& v)  // Very imp step which tells how to define vectors in function arguments.
    // {
//     int i=0;
//     int k=0;
//     int j=0;
//     while(i<v1.size() && j<v2.size()){
//         if(v1[i]<v2[j]){
//         v[k]=v1[i];
//         i++;
//         k++;
//         }
//         else{
//         v[k]=v2[j];
//         j++;
//         k++;
//         }

//     }
//     while(i<v1.size()){
//         v[k]=v[i];
//         i++;
//         k++;
//     }
//     while(j<v2.size()){
//         v[k]=v2[j];
//         j++;
//         k++;
//     }
// }
// void print(vector<int>& v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }
// int main(){
//     vector<int> v1={1,3,5,6,7,8};
//     vector<int> v2={2,6,9};
//     vector<int> v(8);
//     merge(v1,v2,v);
//     print(v);
// }



// merge sorted array using array.
// #include<iostream>
// using namespace std;
// void merge(int arr1[],int n,int arr2[],int m, int arr3[]){
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             arr3[k]=arr1[i];
//             i++;
//             k++;
//         }
//         else{
//             arr3[k]=arr2[j];
//             k++;
//             j++;
//         }
//     }
//     while(i<n){
//             arr3[k]=arr1[i];
//             i++;
//             k++;
//     }
//     while(j<m){
//             arr3[k]=arr2[j];
//             k++;
//             j++;
//     }
// }
// void printarray(int arr3[],int k){
//     for(int i=0;i<k;i++){
//         cout<<arr3[i]<<" ";
//     }
// }
// int main(){
//     int arr1[5]={1,3,5,7,9};
//     int arr2[3]={2,6,4};
//     int arr3[8]={0};
//     merge(arr1,5,arr2,3,arr3);
//     printarray(arr3,8);
// }