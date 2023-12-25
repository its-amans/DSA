//Move zeroes using vector (Leetcode accepted).
// #include<iostream>
// #include<vector>
// using namespace std;
//  void moveZeroes(vector<int>& nums) {
//  int nonzero=0;
//     for(int i=0;i<nums.size();i++){
//     if(nums[i]!=0){
//      swap(nums[i],nums[nonzero]);    // Only this line is diffr=erent in both approaches. here we used one array and swapped elements of array to move zero elements.
//      nonzero++;
//     }
//  }
// for(int i=0;i<nums.size();i++){
//         cout<<nums[i]<<" ";
//     }
// }
// int main(){
//     vector<int> nums={0,1,0,3,2};
//     moveZeroes(nums);
// }

// move zeroes  using array.
// #include<iostream>
// #include<array>
// using namespace std;
// int main(){
//     int arr[]={0,1,0,3,12};
//     int k=0;
//     int arr1[5]={0};  // If not initialize with 0 then can take any garbage value.
//     for(int i=0;i<5;i++){
//       if(arr[i]==0){
//         continue;
//       }
//       else{
//         arr1[k]=arr[i];  // Here we used another result array to just store the elements (not swapped any).
//         k++;
//       }
//     }
//     for(int j=0;j<5;j++){
//         cout<<arr1[j]<<" ";
//     }
// }