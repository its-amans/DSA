// rotate the array
#include<iostream>
#include<vector>
using namespace std;
 void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
            //here we have kept the values in another vector because if values are placed in nums then some values get overwritted.
        }
        //copy the vector temp to vector nums
        nums=temp;
    }
    void print(vector<int> nums){
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
    }
int main(){
    vector<int> v={1,3,4,5,7,8};
    rotate(v,2);
    print(v);
}