# include <iostream>
#include <cmath>

using namespace std;

int main() {
    char operator1;
    double num1, num2,result;


    cout <<"*****************calculate*******************\n";



   cout <<"Enter operator (+, -, *, /,and so on): ";

   cin >> operator1;//string input

   cout <<"enter the first number: ";
   cin >> num1;
    cout <<"enter the second number: "; 
    cin >> num2;
    switch(operator1)
    {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result;
            break;

        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result;
            break;

        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result;
            break;

        case '/':
            if(num2 != 0)
            {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result;
            }
            else
            {
                cout << "Error! Division by zero.";
            }
            break;

         case '@':
            result = pow(num1, num2);
            cout << num1 << " ^ " << num2 << " = " << result;
            break;   

        default:
            cout << "Error! operator is not correct, ";
            break;
    }










    cout <<"*****************calculate***************************\n";






    std::cout << "Hello, World!" << std::endl;
    return 0;
}