// Normal binary to decimal conversion

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[32];
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     int i=0;
//     while(n>0){
//         arr[i]=n%2;
//         n=n/2;
//         i++;
//     }
//     cout<<"binary representation is";
//     for(int j=i-1;j>=0;j--){
//         cout<<arr[j]<<" ";
//     }
// }

// How it is represented on memory
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int arr[32];
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     int i=0;
//     while(n!=0){
//         arr[i]=n%2;
//         i++;
//         n=n/2;
//     }
//     cout<<"The binary elements are:";
//     for(i=i-1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
// }

// To represent negative and postive both decimal number in binary
// #include <stdio.h>

//     int main(void){
//         int i = 0;
//         unsigned int u_i = 0;
//         int j = 0;
//         int b[16] = {0}; //Assuming your integer size is 16bit

//         printf("Enter the number");   //enter postive either negative number
//         scanf("%d",&i);

//         u_i = (unsigned int)i;

//         for(j=15;j>=0;j--) {
//             b[j] = u_i & 0x1;
//             u_i  = u_i >> 1;
//         }

//         for (j=0;j<=15;j++)
//             printf("%d ", b[j]);

//         printf("\n");
//         return 0;
//     }


// // Complement of base 10 number
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//   int n;
//   cout<<"Enter the number";
//   cin>>n;
//   int arr[8]={0};
//   int i=0;
//   while(n!=0){
//     int bit=n&1;
//     if(bit==0){
//       arr[i]=1;
//     }
//     else{
//       arr[i]=0;
//     }
//     n=n>>1;
//     i++;
//   }

//   int ans=0;
//   int digit[9] = {0}; // Initialize digit array separately
//   for(int j=8;j>=0;j--){


//     // cout<<arr[j]<<" ";     // To print the binary representation of the  base 10 number complement.


//     digit[j]=(arr[j]) %10; // Assign value to digit[j]
//     if(digit[j]==1){
//       ans+=digit[j]*pow(2,j);
//     }
//     arr[j]=arr[j]/10;
//   }
//   cout<<ans;
// }



// Power of 2
// #include<iostream>
// #include<math.h>
// using namespace std;
//  bool isPowerOfTwo(int n) {
//        for(int i=0;i<=30;i++){
//             int ans=pow(2,i);
//             if(ans==n)
//             {return true;
//             }
//         }
//         return false;
//  }

// int main(){
//   int n;
//   cout<<"Enter the number:";
//   cin>>n;
//   cout<<isPowerOfTwo(n);
// }
