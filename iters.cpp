#include<iostream>



int factorialiter(int num);

int factorialdigui(int num);



int main(){

    std::cout << "Factorialiter of 5 is: " << factorialiter(5) << std::endl;
    std::cout << "Factorialdigui of 5 is: " << factorialdigui(4) << std::endl;
    return 0;
}


int factorialiter(int num){
    int result = 1;
    for(int i = 1; i <= num; ++i){
        result *= i;
    }

    return result;
}

int factorialdigui(int num){
    if(num <= 1){
        return 1;
    } else {
        return num * factorialdigui(num - 1);
    }
}