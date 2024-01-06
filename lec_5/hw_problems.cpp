
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

