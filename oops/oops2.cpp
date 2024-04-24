#include<iostream>
using namespace std;

class Human{ //Super Class or parent class

    public:
    int age;
    int weight;
    int height;

    public:
    int getAge(){
        return this->age;
    }
    int setAge(int age){
        this->age=age;
    }
    int setWeight(int weight){
        this->weight=weight;
    }
};
class Male:private Human{  // Sub Class or child class 
    public:
    string color;

    public:
    void Sleep(){
        cout<<"Male sleeping"<<endl;
        cout<<age;
    }
};

int main (){
    //Here the child class can acess the public data members and methods of the parent class.
    //This property is called inheritance.

    Male obj1;
    // obj1.setAge(32);
    // cout<<obj1.age<<endl;
    // cout<<obj1.getAge()<<endl;
    cout<<"The color is:"<<obj1.color<<endl;
    obj1.Sleep();
}