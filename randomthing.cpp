#include<iostream>

#include<ctime>
int main() {
    int num;
    int guess;
    int tries;
    srand(time(NULL));
    num = rand() % 100 + 1;
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;

    do
    {

        std::cout << "Enter your guess (1-100): ";
        std::cin >> guess;
        tries++;
        if (guess>num)
        {std::cout << "Too high! Try again." << std::endl;
            /* code */
        }
        else if (guess<num)
        {
            std::cout << "Too low! Try again." << std::endl;
            /* code */
        }
        else
        {
           std::cout<<"correct!" <<tries/* code */;
        }
        
        
        /* code */
    } while (guess != num);

    






    





    std::cout << "Hello, World!" << std::endl;
    return 0;
}