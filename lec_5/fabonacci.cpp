//fabonacci

#include<iostream>
using namespace std;
int main()
{   int n;
cout<<"Enter no of terms:";
    cin>>n;
    int t1=0;
    int t2=1;
    int nextterm;
    cout<<t1<<" ";
    cout<<t2<<" ";
    nextterm=t1+t2;
    cout<< nextterm<<" ";
    int i;
    for(i=2;i<n-1;i++)
    {
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
        cout<< nextterm <<" ";
    }
}





