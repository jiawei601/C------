#include<iostream>
using namespace std;

struct student
{string name;
 double gpa;
 bool enrolled;  

    /* data */
};



int main() {

    student s1;
    s1.name = "Alice";
    s1.gpa = 3.8;
    s1.enrolled = true;
    student s2 = {"Bob", 2.1, false};
    cout << "Name: " << s1.name << endl;
    cout << "GPA: " << s1.gpa << endl;
    cout << "Enrolled: " << (s1.enrolled ? "Yes" : "No") << endl;
    cout << "Name: " << s2.name << endl;
    cout << "GPA: " << s2.gpa << endl;  
    cout << "Enrolled: " << (s2.enrolled ? "Yes" : "No") << endl;

    return 0;
}