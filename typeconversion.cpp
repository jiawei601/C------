#include<iostream>



using intnumber_t = int;

using std::cout;


int main() {
    

    intnumber_t correct = 8;

   // implicit conversion from int to double
    int questions = 10;
    double score = correct /(double)questions * 100.0;
    cout << "The score is: " << score << "%\n";





    




    return 0;
}