#include <iostream>
#include <vector>


using std::cout;


//typedef vector<string<pair<string,int>> pairlist_t
//typedef std::string text_t;
//typedef int intnumber_t;
using text_t = std::string;

using intnumber_t = int;



int main() {


    text_t greeting = "Hello, Typedef!";
    cout << greeting << std::endl;

    intnumber_t a = 42;
    cout << "The int is: " << a << '\n';

    return 0;
}


