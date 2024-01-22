//normal n*n pattern
/*
****
****
****
*/
// *
// **
// ***
// ****

/*
#include<iostream>
using namespace std;
int main()
{int n;
cin>> n;
int i=1;
while(i<=n)
 {
  int j=1;
  while(j<=n)
   {
    cout<<"*";
    j++;
   }
 cout<<endl;
 i=i+1;
 }
}

*/

// pattern2
/*
111
222
333
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n)
    {   int j=1;
        while(j<=n)
        {
       
        cout<<i;
        j++;
        }
        cout<<endl;
        i++;

    }
}
*/
//pattern3
/*
1234
1234
1234
1234
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {cout<<j;
        j++;}
    
    cout<<endl;
    i++;}
}*/
//pattern 4
/*
4321
4321
4321
4321 
*/
/*
#include<iostream>
using namespace std;
int main()
{int n;
    cin >> n;
    int i=1;
    while(i<=n)
    //if we dont want to use decrement loop then canuse simple pattern loop and print n-j+1
    {
        int j=n;
        while(j>=1)
        {cout<<j;
        j--;}
    
    cout<<endl;
    i++;}

}*/
//pAttern5
/*
1111
222
33
4
*/
/*

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=i;
        
        while(j<=n)
        {cout<<i;
        j++;
        }
        cout<<endl;
        i++;

    }
}*/

//pattern5
/*
123
456
789
*/
/*

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int i=1;
    int k=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {cout<<k<<" ";
        k++;
        j++;
        }
        cout<<endl;
        i++;
    }
}*/

//pattern6
/*
*
**
***
****
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {cout<<"* ";
        j++;}
        cout<<endl;
        i++;
    }
}*/
//pattern7
/*
1
22
333
4444
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
        cout<<i;
        j++;
        }
        cout<< endl;
        i++;
    }
}*/
//pattern8
//ek hi jaise h bs ek count=1 leke prink aur increment bhi krdo
/*
1
2 3
4 5 6
7 8 9 10
*/


//pattern9

/*
1
23
345
4567
*/

/*
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows:";
    cin>>n;
    int i=1;
    while(i<=n){
        int k=i;
        int j=1;
        while(j<=i){
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
*/


//pattern10
/*
1
21
321
4321
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {cout<<i-j+1;
        j++;}
        cout<<endl;
        i++;
    }
}*/
// pattern11
/*
AAA
BBB
CCC
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    char k='A';//char k='A'+i-1;
    cin>> n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<< k;
            
            j++;
        }
        k++;//can ommit in second type
        cout<<endl;
        i++;

    }
}*/
// pattern12
/*
ABC
def
ghi
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    char k='A';
    cin>> n;
    while(i<=n)
    {   
        int j=1;
        while(j<=n)
        {   
            cout<< k;
            k++;
            j++;
        }
        
        cout<<endl;
        i++;

    }
}*/
//pattern12
/*
ABC
ABC
ABC
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    cin>> n;
    while(i<=n)

   { int j=1;
     
    while(j<=n)
    {   char k='A'+j-1;
        cout<<k;
        
        j++;
    }
    cout<<endl;
    i++;

}
}
*/
//pattern13
/*
     *
    **
   ***
  ****
*/
/*
#include<iostream>
using namespace std;
int main()

{
    int n;
    cin>> n;
    int i=1;
    while(i<=n)
    {
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;

        }
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;

        }
        cout<<endl;
        i++;

    }
   
}*/
//pattern14
/*
****
***
**
*
*/\
/*
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    cin>>n;
    while(i<=n)

    {
        int j=n;
        while(j>=i)

        {
          cout<<"*";
          j--;
        }
        cout<<endl;
        i++;
    }
}*/
//pattern15
/*
*****
 ****
  ***
   **
    *
 */
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space=1;
        
        while(space<=i-1)

        {cout<<" ";
        space++;
        }
        int j=n;
        while(j>=i)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
        
    }
}*/
//pattern16
/*
          1
         121
        12321
       1234321
*/

/* 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space=1;
        while(space<=n-i)
        {
            cout<<" ";
            space++;

        }
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        int k=1;
        while(k<=i-1)
        {
            cout<<i-k;
            k++;
        }
        cout<<endl;
        i++;

    }
}
*/
//dabang pattern
/*
1234554321
1234**4321
123****321
12******21
1********1
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=i;
        while(j<=n)
        {
            cout<<j-i+1;
            j++;
        }
        int k=1;
        while(k<=i-1)
        {
            cout<<"*";
            k++;
        }
        int l=1;
        while(l<=i-1)
        {
            cout<<"*";
            l++;
        }
        int m=n;
        while(m>=i)
        {
            cout<<m-i+1;
            m--;
        }
        cout<<endl;
        i++;
    }
}


/*
//pattern homework
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space=1;
        while(space<=i-1)
        {
            cout<<" ";
            space++;
        }
        int j=1;
        while(j<=n+1-i)
        {
          cout<<i;
          j++;
        }
        cout<<endl;
        i++;
    }
}*/


