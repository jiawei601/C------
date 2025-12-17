#include<iostream>

using namespace std;

//object = A collection of attributes and methods

class yellowHuman{
  public:
    string name;
    int age;
    string occupation;
    string color= "yellow";

    void eat(){
        cout << name << " is eating." << endl;
    }

    void sleep(){
        cout << name << " is sleeping." << endl;
    }
    void work(){
        cout << name << " is working as a " << occupation << "." << endl;
    }
};


int main(){



    yellowHuman person1={"John",30,"Engineer"};
    yellowHuman person2={"Alice",28,"Doctor"};
    cout <<person1.color<<"humankind\n"<< person1.name << " is " << person1.age << " years old and works as a " << person1.occupation << "." << endl;
    person1.eat();
    cout <<person2.color<<"humankind\n"<< person2.name << " is " << person2.age << " years old and works as a " << person2.occupation << "." << endl;
    person2.work();

    return 0;
}
