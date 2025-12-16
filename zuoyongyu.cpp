#include <iostream>


int number=1;
void printnumber(){
    std::cout << "this is gobal varriable  "<<number<< std::endl;
}
int main() {
    
    float number=1.2;
    std::cout << "this is local varriable  " << number << std::endl;
    printnumber();
    return 0;   


}