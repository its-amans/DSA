#include<iostream>
using namespace std;
class A{
    public:
    int a;
    int b;

    public:
    void print(){
        cout<<"Its A world"<<endl;
    }

    void operator+(A &obj){  // obj is copy of obj2 reference
        int value1=this->a;  //obj1 ia as current object
        int value2=obj.a;
        cout<<"The result is "<<value1-value2<<endl;
    }

    void operator()(){
        cout<<"Accesing current object obj1 "<<this->a<<endl;   
        cout<<"Helllo Aman!"<<endl;
    }
};
class B:public A{
    public:
    void print(){
        cout<<"Its B world"<<endl;
    }
};
class C:public A{
    
};

int main(){
    A obj1;
    A obj2;
    obj1.a=7;
    obj2.a=4;
    //Overloading + with -functionality
    obj1 + obj2; // Here object 2 will be passed as call and object 1 act as current object  
    //Overloading () operator with print functaionality.

    obj1();  //Here obj 1 act as current object and no object is passed in call

    //Run Time polymorphism /Method overloading dynamically
    A ob;
    ob.print();
    B ob1;
    ob1.print();
    C ob2;
    ob2.print();  //here not any print()function is overlwridded in child hence the parent print ()method is called.

}