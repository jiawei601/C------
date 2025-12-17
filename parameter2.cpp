#include <iostream>
using namespace std;



void printInfo(const std:: &name, int &age) {


    
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}


int main(){
        string name = "menmen";

        int age = 18;

        printInfo(name, age);



    return 0;
}

