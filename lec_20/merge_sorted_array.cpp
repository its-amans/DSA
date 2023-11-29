//Merge two sorted array
//Created by Aman Srivastava
//Also can be easily done by array
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& v1,vector<int>&v2,vector<int>& v){
    int i=0;
    int k=0;
    int j=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]){
        v[k]=v1[i];
        i++;
        k++;
        }
        else{
        v[k]=v2[j];
        j++;
        k++;
        }

    }
    while(i<v1.size()){
        v[k]=v[i];
        i++;
        k++;
    }
    while(j<v2.size()){
        v[k]=v2[j];
        j++;
        k++;
    }
}
void print(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> v1={1,3,5,6,7,8};
    vector<int> v2={2,6,9};
    vector<int> v(8);
    merge(v1,v2,v);
    print(v);
}