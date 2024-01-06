// Complement of base 10 number //Galat h abhi
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number";
  cin>>n;
  int arr[8]={0};
  int i=0;
  while(n!=0){
    int bit=n&1;
    if(bit==0){
      arr[i]=1;
    }
    else{
      arr[i]=0;
    }
    n=n>>1;
    i++;
  }

  int ans=0;








//   int digit[9] = {0}; // Initialize digit array separately
//   for(int j=8;j>=0;j--){



//     // cout<<arr[j]<<" ";     // To print the binary representation of the complement of base 10 number .


//     digit[j]=(arr[j]) % 10;   // Assign value to digit[j]
//     if(digit[j]==1){
//       ans+=digit[j]*pow(2,j);
//     }
//     arr[j]=arr[j]/10;
//   }
//   cout<<ans;
// }
