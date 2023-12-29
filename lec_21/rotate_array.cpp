// rotate the array
// #include<iostream>
// #include<vector>
// using namespace std;
//  void rotate(vector<int>& nums, int k) {
//         vector<int> temp(nums.size());
//         for(int i=0;i<nums.size();i++){
//             temp[(i+k)%nums.size()]=nums[i];
//             //here we have kept the values in another vector because if values are placed in nums then some values get overwritted.
//         }
//         //copy the vector temp to vector nums
//         nums=temp;
//     }
//     void print(vector<int> nums){
//         for(int i=0;i<nums.size();i++){
//             cout<<nums[i]<<" ";
//         }
//     }
// int main(){
//     vector<int> v={1,3,4,5,7,8};
//     rotate(v,2);
//     print(v);
// }

// program to rotate the array but not accepted by leetcode.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,7,8,3,4,5};
//     int k;
//     cout<<"Enter the index to rotate:";
//     cin>>k;
//     int i;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(i=1;i<n+1;i++){                     // if using for(i=0;i<n;i++) the  it will rotate the array from the given index not from ahead of the given index.
//         if(i>k){
//             cout<<arr[i-k-1]<<" ";
//         }
//         else{
//             cout<<arr[i+k]<<" ";
//         }
//     }
// }



// simple logic to rotate the array leetcode accepted.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,7,8,3,4,5};
//     int k;
//     cout<<"Enter the index to rotate:";
//     cin>>k;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=1;i<n+1;i++){                     // if using for(i=0;i<n;i++) the  it will rotate the array from the given index not from ahead of the given index.
//         cout<<arr[(i+k)%n]<<" ";
//     }
// }