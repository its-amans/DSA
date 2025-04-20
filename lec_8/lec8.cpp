//simple calculator
#include<iostream>
using namespace std;
/*
int main(){
    int n;
    int m;
    cin>>n>>m;
    char ch;
    cin>>ch;
    switch(ch)
    {
        case '+':
        cout<<n+m;
        break;
        case '-':
        cout<<n-m;
        break;
        case '*':
        cout<<n*m;
        break;
        case '/':
        cout<<n/m;
        break;
        default:
        cout<<"wrong character";

    }
    
}*/
//get out from infinite loop in switch case
/*
#include<iostream>
using namespace std;
int main()
//we can use goto statement to get out of the loop
//we can use exit(0)-->(exit with succsesful compilation of program) or exit(1)-->(exit when unsuccesful compilation)
{int n;
    while(true)//while(1)
{
    cin>> n;
    switch(n)
    {
        case 1:
            cout<<"one";
            break;
            exit(0);//till here program should run succesfully to execute exit(0)
        case 2: 
            cout<<"two";
            break;
     }
}
}
*/





//n rupee distribution problem
/*
#include<iostream>
using namespace std;
int main(){
    int amount;
    cin>>amount;
    int note2000,note500,note100,note200,note50,note20,note10,note1;
    note2000=note500=note200=note100=note20=note50=note10=note1=0;
    switch(amount>=2000)
	{
		case 1:
			note2000 = amount/2000;
        	amount -= note2000 * 2000;
        break;
	}
    
    switch(amount>=500)
	{
		case 1:
			note500 = amount/500;
        	amount -= note500 * 500;
        break;
	}
    
    switch(amount>=200)
	{
		case 1:
			note200 = amount/200;
        	amount -= note200 * 200;
        break;
	}
    switch(amount>=100)
	{
		case 1:
			note100 = amount/100;
        	amount -= note100 * 100;
        break;
	}
    switch(amount>=50)
	{
		case 1:
			note50 = amount/50;
        	amount -= note50 * 50;
        break;
	}
    switch(amount>=20)
	{
		case 1:
			note20 = amount/20;
        	amount -= note20 * 0;
        break;
	}
    switch(amount>=10)
	{
		case 1:
			note10 = amount/10;
        	amount -= note10 * 10;
        break;
	}
    switch(amount>=1)
	{
		case 1:
			note1 = amount/1;
        	amount -= note1 * 1;
        break;
	}
    cout<<"note2000:"<<note2000<<endl;
    cout<<"note500:"<<note500<<endl;
    cout<<"note200:"<<note200<<endl;
    cout<<"note100:"<<note100<<endl;
    cout<<"note50:"<<note50<<endl;
    cout<<"note20:"<<note20<<endl;
    cout<<"note10:"<<note10<<endl;
    cout<<"note1:"<<note1<<endl;
}
*/

//Another solution using single switch case without using nested switch case
int main(){
    int amount;
    cin>>amount;
    int note2000,note500,note100,note200,note50,note20,note10,note1;
    note2000=note500=note200=note100=note20=note50=note10=note1=0;
    switch(amount>=2000)
    {
        case 1:
            note2000 = amount/2000;
        	amount -= note2000 * 2000;
        case 0:
        	switch(amount>=500)
            {
                case 1:
                    note500 = amount/500;
        			amount -= note500 * 500;
        		case 0:
        			switch(amount>=200)
                    {
                        case 1:
                            note200 = amount/200;
        					amount -= note200 * 200;
        				case 0:
        					switch(amount>=100)
                            {
                                case 1:
                                    note100 = amount/100;
        							amount -= note100 * 100;
        						case 0:
        							switch(amount>=50)
                                    {
                                        case 1:
                                            note50 = amount/50;
        									amount -= note50 * 50;
        								case 0:
        									switch(amount>=20)
                                        {
                                            case 1:
                                                note20 = amount/20;
        										amount -= note20 * 20;
        									case 0:
        										switch(amount>=10)
                                            {
                                                case 1:
                                                    note10 = amount/10;
        											amount -= note10 * 10;
        										case 0:
        											switch(amount>=1)
                                                {
                                                    case 1:
                                                        note1 = amount/1;
        												amount -= note1 * 1;
        											case 0:
        												break;
                                                }
                                            }
                                        }
                                    }
        						}
        					}
        			}
            }
    cout<<"note2000:"<<note2000<<endl;
    cout<<"note500:"<<note500<<endl;
    cout<<"note200:"<<note200<<endl;
    cout<<"note100:"<<note100<<endl;
    cout<<"note50:"<<note50<<endl;
    cout<<"note20:"<<note20<<endl;
    cout<<"note10:"<<note10<<endl;
    cout<<"note1:"<<note1<<endl;
}

