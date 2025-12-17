#include<iostream>

using namespace std;


class Student {
public:
    string name;
    int age;
    double gpa;
Student(string name , int age, double gpa ){

    this->name = name;
    this->age = age;
    this->gpa = gpa;
}
    // Constructor with default parameters
};



int main(){

    Student student1{"Alice", 20, 3.8};
    cout << "Name: " << student1.name << ", Age: " << student1.age << ", GPA: " << student1.gpa << endl;

     Student student2("Bob", 22, 3.5);
    return 0;
}