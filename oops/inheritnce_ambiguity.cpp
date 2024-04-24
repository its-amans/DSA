#include<iostream>
using namespace std;
class A{
    public:
    int age1;

    public:
    void func1(){
        cout<<"this A class is executed";
    }
};
class B{
    public:
    int age2;

    public:
    void func1(){
        cout<<"this B class is executed";
    }
};
class C :public A ,public B{

};
int main(){
    C obj1;
    //obj1.func1(); This will show error 
    obj1.A::func1();
    obj1.B::func1();
}
