#include<iostream>
using namespace std;
int find_power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    //recursion sambal lega.
    int ans=find_power(a,b/2);

    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main(){
    cout<<"Enter the no:";
    int a;
    cin>>a;
    cout<<"Enter the power:";
    int b;
    cin>>b;
    cout<<find_power(a,b);
}