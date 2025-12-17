#include<iostream>
template <typename T, typename U>
//typename：关键字，用于声明 “后面的标识符是一个类型”。

auto max(T a, U b) {
    return (a > b) ? a : b;
}


using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}


double max(double a, double b) {
    return (a > b) ? a : b;
}

char max(char a, char b) {
    return (a > b) ? a : b;
}



int main() {


    cout << "Max of 3 and 7 is: " << max(3, 7) << endl;
    cout << "Max of 'A' and 'a' is: " << max('2', '5') << endl;
    cout << "Max of 3.5 and 2 is: " << max(3.5, 2) << endl;
    cout << "Max of 10 and 15.5 is: " << max(10, '15.5') << endl;

    
    return 0;
}