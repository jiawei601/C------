#include <iostream>



using std::string;
using std::cout;
using std::cin;    

int main() {
    string name;
    int age;


    cout << "Enter your age: "; 
    cin >> age; 
    cout << "Enter your full name: ";

    std::getline(cin>>std::ws, name);
    
    
    cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;



    
    return 0;
}