#include<iostream>

using namespace std;

void happyBirthday(string name, int age);

int main() {
    
    string birthdayboy = "John";
    int numebers = 30;

    happyBirthday(birthdayboy, numebers);
    return 0;
}

void happyBirthday(string name, int age) {
    std::cout << "Happy Birthday! "<<name<< std::endl;
    std::cout << "You are now " << age << " years old!" << std::endl;

   
}