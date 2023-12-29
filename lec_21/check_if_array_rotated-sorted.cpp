//   #include<iostream>
//   #include<vector>
//   using namespace std;
//   bool check(vector<int>& nums) {
//         int count=0;
//         int n=nums.size();
//         for(int i=1;i<n;i++){
//             if(nums[i-1]>nums[i]){
//                 count++;
//             }
//         }
//             if(nums[n-1]>nums[0])
//             {
//                 count++;
//             }
//         return count<=1;
//     }
// int main(){
//     vector<int> v={7,8,3,4,5};    //v={8,3,4,7,5}; ex for the array which is not sorted and not rotated
//     int ans=check(v);
//     cout<<"if 1 then array is sorted rotated and if 0 then array is not sorted rotated:"<<endl<<ans<<endl;
// }

