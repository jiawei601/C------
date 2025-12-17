#include<iostream>

using namespace std;


enum Days {
    SUNDAY=0,
    MONDAY=1,
    TUESDAY=2,
    WEDNESDAY=3,
    THURSDAY=4,
    FRIDAY=5,
    SATURDAY=6
};

int main() {
    
    Days today = WEDNESDAY;

    switch (today)
    {
    case SUNDAY:
        cout << "Today is Sunday." << endl;
        break;
    case MONDAY:
        cout << "Today is Monday." << endl;
        break;
    case TUESDAY:
        cout << "Today is Tuesday." << endl;
        break;
    case WEDNESDAY:
        cout << "Today is Wednesday." << endl;
        break;
    case THURSDAY:
        cout << "Today is Thursday." << endl;
        break;
    case FRIDAY:
        cout << "Today is Friday." << endl;
        break;
    case SATURDAY:
        cout << "Today is Saturday." << endl;
        break;

    default:
        break;
    }
    return 0;
}

