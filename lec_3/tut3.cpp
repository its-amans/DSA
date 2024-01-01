#include<iostream>
using namespace std;
int main()
{
  int n,m;
  
  cout<<"enter the both values "<<endl<< "enter ";
  cin>>n>>m;
  if(n>m)
    cout<<"N is big"<<endl;
  else
  {
    if(n==m)
      cout<<"equal"<<endl;
    else
      cout<<"m is big"<<endl;
  }
}