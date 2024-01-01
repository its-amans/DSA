#include<iostream>
using namespace std;
int main(){
    char ch ;
    cin>> ch;

    if(ch>='a'&&ch<='z')
    cout<<" it is small letter"<<endl;
    else if(ch>='A'&&ch<='Z')
    cout<<" it is LARGE letter"<<endl;
    else if(ch>='1'&&ch<='9')
    cout<< "digits"<<endl;
    else
    cout<<"wrong input";


}