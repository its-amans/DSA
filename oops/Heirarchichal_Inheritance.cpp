#include<iostream>
using namespace std;
class A{ // Both heirarchichal and hybrid inheritance
    public:
    int age=20;
};
class B:public A{
    public:
    int weight=70;
};
class C:public A{

};
class D:public B{

};
int main(){
    B obj1;
    cout<<obj1.age<<endl;
    C obj2;
    cout<<obj2.age<<endl;
    D obj3;
    cout<<obj3.age<<endl;
    cout<<obj3.weight<<endl;
}