#include<iostream>

using namespace std;



int getDigit(const int number);

int sunoddigits(const string cardnumber);

int sumevendigits(const string cardnumber);



int main(){


    string cardnumber;
    int result= 0;

    cout << "Enter credit card number: ";
    cin >> cardnumber;

    result = sumevendigits(cardnumber) + sunoddigits(cardnumber);
    if (result % 10 == 0)
    {cout << cardnumber << " is valid" << endl;
        /* code */
    }
    else
    {
        cout << cardnumber << " is invalid" << endl;
    }


    return 0;
}
int getDigit(const int number){
    if(number < 10)
        return number;
    else
        return( number / 10 %10)+ number % 10;
}

int sunoddigits(const string cardnumber){
    int sum = 0;
    for(int i = cardnumber.length() - 1; i >= 0; i -= 2){
        sum += (cardnumber[i] - '0');
    }
    return sum;
}

int sumevendigits(const string cardnumber){
    int sum = 0;
    for(int i = cardnumber.length() - 2; i >= 0; i -= 2){
        int digit = (cardnumber[i] - '0') * 2;
        sum += getDigit(digit);
    }
    return sum;
}