#include<iostream>

using namespace std;
class car
{
public:
    string brand;
    string model;
    int year;
    string color;

    void accelerate()
    {
        cout << brand << " " << model << " is accelerating." << endl;
    }
    void brake()
    {
        cout << brand << " " << model << " is braking." << endl;
    }
private:
   
    void burnFuel() {
        year += 10;
    }

};
int main()
{
    car car1 = {"xiaomi", "su7", 2020, "Red"};
    car car2 = {"tesla", "modely", 2019, "Blue"};

    cout << "Car 1: " << car1.brand << " " << car1.model << ", Year: " << car1.year << ", Color: " << car1.color << endl;
    car1.accelerate();

    cout << "Car 2: " << car2.brand << " " << car2.model << ", Year: " << car2.year << ", Color: " << car2.color << endl;
    car2.brake();

    return 0;
}