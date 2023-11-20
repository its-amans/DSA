//sum of digits and product of digits
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int product=1;
    int i=1;
    while(n>0)
    {
        int r=n%10;
        n=n/10;
        sum=sum+r;
        product=product*r;
    }
    cout<<"the sum is:"<<sum<<endl;
    cout<<"the product is:"<<product;
}
*/




//program to reverse any number
//reverse integer leetcode
/*
#include<iostream>
#include<math.h>
using namespace std;
int reverseinteger(int n)
{
    int ans=0;
    int int_min=(-pow(2,31));
    int int_max=pow(2,31)-1;
    while(n!=0)
    {
        int digit=n%10;
        n=n/10;
        ans=ans*10+digit;
         if((ans>int_max/10)||(ans<int_min/10))
        {
            return 0;
        }
        
    }
    return ans;
}
int main(){
    
    int n;
    cin>>n;
    int ans=0;
    ans=reverseinteger(n);
    cout<<ans;
}
*/




//base 10 complement
/*
#include<iostream>
using namespace std;
int complement(int n)
{    
    int m=n;
    int mask=0;
    //edgecase
    if(n==0)
    {
        return 1;
    }
    while(m!=0)
    {
     
     mask=(mask<<1)|1;
     m=m>>1;  
    }
    int ans=(~n)&mask;
    return ans;
}   
int main()
{
    int n;
    cin>>n;
    int ans;
    ans=complement(n);
    cout<<ans;
}*/