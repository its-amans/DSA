#include<iostream>
using namespace std;

class Human{ //Super Class or parent class
   // private data member of any class cannot be inherited;                                                  but can be accesed through getter setters
   // where as protected data membber can be accesed into class and child class through inheritance.and also in the derived class of child.
    private:
    string name; // This datamember cannot be inherited .
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
class Male:public Human{  // Sub Class or child class 
    public:
    string color;

    public:
    void Sleep(){
        cout<<"Male sleeping"<<endl;
    }
};

int main (){
    //Here the child class can acess the public data members and methods of the parent class.
    //This property is called inheritance.

    Male obj1;
    obj1.setAge(32);
    cout<<obj1.age<<endl;
    cout<<obj1.getAge()<<endl;
    cout<<"The color is:"<<obj1.color<<endl;
    obj1.Sleep();
}