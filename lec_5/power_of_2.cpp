//Power of 2
#include<iostream>
#include<math.h>
using namespace std;
 bool isPowerOfTwo(int n) {
       for(int i=0;i<=30;i++){
            int ans=pow(2,i);
            if(ans==n)
            {return true;
            }
        }
        return false;
 }

int main(){
  int n;
  cout<<"Enter the number:";
  cin>>n;
  cout<<isPowerOfTwo(n);
}