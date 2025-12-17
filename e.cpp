#include<iostream>
using namespace std;

 
void findMaxMin(int a , int b) {
  a>b ? cout<<a<<" is maximum and "<<b<<" is minimum"<<endl : cout<<b<<" is maximum and "<<a<<" is minimum"<<endl;
    
}



int main() {

    int num1, num2;

    do
    {cout << "Enter two numbers not string: ";
    cin >> num1 >> num2;   
        /* code */
    } while (num1-num2==0 );
    
    
    findMaxMin(num1, num2);

    

    cout << "Hello, World!" << endl;
    return 0;
}