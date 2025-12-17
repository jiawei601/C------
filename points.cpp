#include<iostream>



using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;

    int age = 30;
    int *pAge = &age;
    string name = "ChatGPT";
    string freePizza[5] = {"Margherita", "Pepperoni", "Hawaiian", "Veggie", "BBQ Chicken"};

    string *pPizza = &freePizza[2];

    string *pName = &name;
    cout<<*pName<<endl;
    cout<<*pAge<<endl;
    cout<<freePizza<<endl;

    cout<<*pPizza<<endl;

    return 0;
}

