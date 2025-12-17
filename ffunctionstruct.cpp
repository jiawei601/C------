#include<iostream>
#include<string>


using namespace std;


struct Car
{ string brand;
  int year;
  string color;  
    /* data */
};

void printcar (Car c );
void colorchange(Car c, string newcolor);
int main() {


    Car car1 = {"Toyota", 2020, "Red"};
    Car car2;
    car2.brand = "xiaomi"; 
    car2.year = 2021;
    car2.color = "Black";

    
    printcar(car1);
    cout<<"After color change:"<<endl;
    colorchange(car1, "White");
    
    printcar(car1);

    string str = "Hello, World!";
    cout << str << endl;
    printcar(car2);
    cout<<"After color change:"<<endl;
    colorchange(car2, "Blue");
    printcar(car2);
    return 0;
}

void printcar (Car c )//把结构体传递给函数时，实际上传递的是结构体的一个副本
{
    cout << "Brand: " << c.brand << ", Year: " << c.year << ", Color: " << c.color << endl;
}

void colorchange(Car c, string newcolor)
{
    c.color = newcolor;
}