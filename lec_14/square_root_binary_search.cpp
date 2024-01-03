//square_root of number using binary search
// square root of perfec square.

/*
#include<iostream>
using namespace std;
int squareroot(int k){
    int s=0;
    int e=k;
    long long int mid=s+(e-s)/2;
    while(s<=e){
        long long int square=mid*mid;
        if(square==k)
        {
            return mid;
        }
        else if(square<k){
            s=mid+1;
        }
        else if(square>k){
            e=mid-1;
        }
         mid=s+(e-s)/2;
    }
    return -1;//not found
}
int main(){
    int k;
    cout<<"enter the number";
    cin>>k; 
    cout<<squareroot(k);  
}
*/


//precise square root


#include<iostream>
using namespace std;
int tempsol(int k){
    int s=0;
    int e=k;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e)
    {
        long long int square=mid*mid;
        if(square==k)
        {
            return mid;
        }
        else if(square<k){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid=s+(e-s)/2;
    }
    return ans;//not found
}

double solution(int k,int temproot,int precision){
    double ans=temproot;
    double factor=1;
    for(int i=0;i<precision;i++)
    {
    factor=factor/10;
    for(double j=ans;j*j<k;j=j+factor)
    {
        ans=j;
    }
}
return ans;
}

int main(){
    int k;
    cout<<"enter the number";
    cin>>k; 
    int temproot= tempsol(k);
    cout<<solution(k,temproot,3);
}



