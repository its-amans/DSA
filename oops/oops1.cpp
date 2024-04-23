#include<iostream>
#include<cstring>
using namespace std;
class Hero{
    int health;
    public://By default the class memebers are private.
    char level;
    char *name;
    
    Hero(){
        cout<<"Constructor is called"<<endl;
        name=new char[100];//aray of name
        //allocating heap mem
    }
    //Multiple parameterized constructor.
    Hero(int health){
        this->health=health; 
        // Here this pointer contains the address of the current object.Hence this ->health refers to health feild of the object
    }
    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }

    // Copy Constructor 
    Hero(Hero& temp){ // Here we are using call by reference bcz same object r is considered here with name temp.
                      //  No any new object will be created.
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<"Health is "<<health<<endl;
        cout<<"Level is "<<level<<endl;
        cout<<"Name is "<<name<<endl<<endl;
    }
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health=h;
    }
    char getlevel(){
        return level;
    }
    void setlevel(char l){
        level=l;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }
};

int main(){

    // Concept of deep copy and shallow copy
    Hero hero1;
    hero1.sethealth(20);
    hero1.setlevel('c');
    hero1.setname("Aman");
    hero1.print();

    Hero hero2(hero1); // Hero hero1=hero2; Both are same.
    hero2.print();

    // here we are changing the name in the hero1 object .
    hero1.name[0]='C'; //   Actually i only changed the first letter of the name
    hero1.print();
    
    // now this change is also updated in the hero2 object but we have actually changed the hero1 object here
    hero2.print();

    //Copy constructor
    Hero r(200,'B');
    r.print();
    Hero s(r);
    s.print();

    //Default and parametrised constructor
    //static
    Hero b;
    b.print();
    //Dynamic
    Hero *c=new Hero(100);
    (*c).print();
    Hero *d=new Hero(100,'A');
    d->print();


    //Static Alllocation
    // Hero a;
    // a.sethealth(100);
    // a.setlevel('A');
    // cout<<"The heath of a is "<<a.gethealth()<<endl;
    // cout<<"The level of a is"<<a.getlevel()<<endl;

    // //Dynamically Allocation
    // Hero *b=new Hero; //Hero *b=new Hero();  Both are same
    // (*b).sethealth(100);
    // (*b).setlevel('B');
    // cout<<"The health of *b is "<<(*b).gethealth()<<endl;
    // cout<<"The level of *b is "<<(*b).getlevel()<<endl;

    //     //Alternatively
    //     cout<<"The health of *b is "<<b->gethealth()<<endl;
    //     cout<<"The level of *b is "<<b->getlevel()<<endl;


    // Hero Aman;

    // //accesing the private (health) variable using getter and setter.
    // //use setter
    // Aman.sethealth(70); 
    // //use getter
    // cout<<"The health is"<<Aman.gethealth()<<endl;

    // //when heath is public class member
    // //Aman.health=70;
    // //cout<<"Heath is "<<Aman.health<<endl;

    // Aman.level='A';//We have to use getter and setter sfor good practice .
    // cout<<"Level is "<<Aman.level<<endl;
}