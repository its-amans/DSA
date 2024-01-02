// simple code
#include<iostream>
using namespace std;
void say_digits(int n,string arr[]){
    if(n==0){
        return;  // means it is terminated here.
    }
    else{
        int digit=n%10;
        n=n/10;
        say_digits(n,arr);
        cout<< arr[digit]<<" ";
    }

}
int main(){
    string a[]={"zero","one ","two ","three ","four ","five ","six ","seven ","eight ","nine "};
    int n;
    cout<<"Enter the number";
    cin>>n;
    say_digits(n,a);
}

// special case.
// input
// 043

// output
// four  three