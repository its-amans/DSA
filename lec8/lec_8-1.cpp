
//even odd program
/*
#include<iostream>
using namespace std;
bool ifeven(int n){
    
    
    if(n&1)
    //if(n&1) also can be used
    {
        return 0;
    }
    else
    {return 1;
    }
}
int main(){
    cout<<"enter the number";
    int a;
    cin>>a;
    int ans=ifeven(a);
   if (ans==0)
   {cout<<"the no is odd";}
   else{cout<<"the no is even";}
    
}
*/




// program to find combination.
/*
#include<iostream>
using namespace std;
int fact(int n)
{
    int fact =1;
    for(int i=1;i<=n;i++)
    {
        fact =fact*i;
    }
    return fact;
}
int ncr(int n, int r)
{
int num=fact(n);
int denom=fact(n-r)*fact(r);
return num/denom;
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
}
*/




//function with no arg and no return type
/*
#include<iostream>
using namespace std;
void printcount()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=0;i<=n;i++){
    cout<<i<<endl;

}
}
int main(){
printcount();
}



*/
//function with return type and with arg
//using bool
/*
#include<iostream>
using namespace std;
//if prime-1 if not-0
bool ifprime(int n){
    
    for(int i=2;i<=n;i++){
        if(n%i==0)
        return 0;
        else
        return 1;

    }
}
int main(){
    int n;
    cin>>n;
    int ans=ifprime(n);
    if(ans==0)
    cout<<"not prime";
    else
    cout<<"prime";
}
*/





//ap with given expression
/*
#include<iostream>
using namespace std;
int ap(int n){
    int ans=3*n+7;
    return ans;
}
int main(){
    int n;
    cin>>n;
    int N_term=ap(n);
    cout<<N_term;
}
*/




//problem2 not running incomplete logic
//program to find the setbit(no.count of 1 in bit format of both number)

/*
#include<iostream>
using namespace std;
int setbit(int n)
{int mask=1;
int count;
while(n!=0)
{if((n&mask)!=0)
{count++;}
n=n>>1;
}
return count;    
}
int main(){
    int n;
    cin>>n;
    int ans=setbit(n);
    cout<<ans;
}*/





//fabanacci series
/*
#include<iostream>
using namespace std;
void fabonacci (int n){
    int t1=0,t2=1;
    int nexterm=t1+t2;
    cout<<t1<<" "<<t2<<" ";
    for(int i=3; i<=n;i++)
    {
    cout<<nexterm<<" ";t1=t2;
    t2=nexterm;
    nexterm=t1+t2;
   
    }
    return;
}
int main(){
    int n;
    cin>>n;
    fabonacci(n);  
}
*/