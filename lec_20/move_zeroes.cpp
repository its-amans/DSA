//Move zeroes
#include<iostream>
#include<vector>
using namespace std;
 void moveZeroes(vector<int>& nums) {
 int nonzero=0;
    for(int i=0;i<nums.size();i++){
    if(nums[i]!=0){
     swap(nums[i],nums[nonzero]);
     nonzero++;
    }
 }
for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    vector<int> nums={0,1,0,3,2};
    moveZeroes(nums);
}