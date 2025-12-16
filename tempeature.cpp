#include<iostream>


using namespace std;

int main() {
    double celsius, fahrenheit;
    char unit;

    cout<<"**********************Temperature Converter**********************"<<endl;


    cout<<" F = fahrenheit "<<endl;
    cout<<" C = celsius "<<endl;
    cout<<"what do you want to convert to ? (Type F or C) : ";

    cin>>unit;

    switch (unit)
    {
    case 'F':
        cout<<"Enter temperature in C: ";
        cin>>celsius;
        fahrenheit = (celsius * 9.0/5.0) + 32.0;
        cout<<"Temperature in F: "<<fahrenheit<<endl;   
        
        break;
    case 'C':
        cout<<"Enter temperature in F: ";
        cin>>fahrenheit;    
        celsius = (fahrenheit - 32.0) * 5.0/9.0;
        cout<<"Temperature in C: "<<celsius<<endl;    
        break;
    case 'f':
        cout<<"Enter temperature in C: ";
        cin>>celsius;
        fahrenheit = (celsius * 9.0/5.0) + 32.0;
        cout<<"Temperature in F: "<<fahrenheit<<endl;   
        
        break;   
    case 'c':
        cout<<"Enter temperature in F: ";
        cin>>fahrenheit;    
        celsius = (fahrenheit - 32.0) * 5.0/9.0;
        cout<<"Temperature in C: "<<celsius<<endl;    
        break;    
    
    default:

        cout<<"Invalid input! Please enter F or C."<<endl;
        break;
    }








    return 0;
}