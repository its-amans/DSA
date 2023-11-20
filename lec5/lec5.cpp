//fabonacci
/*
#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;
    int t1=0;
    int t2=1;
    int nextterm;
    cout<<t1<<" ";
    cout<<t2<<" ";
    nextterm=t1+t2;
    cout<< nextterm<<" ";
    int i;
    for(i=1;i<=n;i++)
    {
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
        cout<< nextterm <<" ";


    }
}
*/
//prime no
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
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
            cout<<" not prime";
        }
}
*/
//problem 1
/*
#include<iostream>
using namespace std;
int main()
{
for(int i=0;i<=5;i++)
{cout<<i<<" ";
i++;}
}
*/
// problem 2 infinite loop aa rha h
/*
#include<iostream>
using namespace std;
int main()
{
for(int i=0;i<=5;i--)
{cout<<i<<" ";
i++;}
}
*/
//problem3
/*
#include<iostream>
using namespace std;
int main(){
    for( int i=0;i<=15;i+=2)
    {cout<<i<<" ";
    if(i&1){
        continue;
    }
    i++;
    }
}
*/
// problem 5
/*
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            if(i+j==10)
            {
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
}
*/





