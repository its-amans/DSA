//prime no

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no:";
    cin>>n;
    int count=0;
    if(n==0||n==1){
        count++;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
           count++;
           break;
        }
    }
        if(count==0)
        {
            cout<<"prime";
        }
        else
        {
            cout<<"not prime";
        }
}
