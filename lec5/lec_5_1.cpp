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
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int arr[32];
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int i=0;
    while(n!=0){
        arr[i]=n%2;
        i++;
        n=n/2;
    }
    cout<<"The binary elements are:";
    for(i=i-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}