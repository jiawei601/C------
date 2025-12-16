#include<iostream>


#include<ctime>
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(NULL));
    //srand()：全称是seed random（随机数种子），
    //是 C/C++ 中用来初始化随机数生成器的函数。如果不调用srand()，
    //随机数生成器会使用默认的种子（通常是 1），导致每次运行程序生成的随机数序列都是固定的

    // Generate a random number between 0 and 99
    int randomNumber = (rand() % 7);

    // Output the random number
    cout << "Random Number: " << randomNumber << std::endl;

    return 0;
}