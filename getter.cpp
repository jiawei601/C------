


#include<iostream>


using namespace std;


class stove{
private:
    int temperature = 0;
   
/* data */
public:

   int gettemperature(){

    return temperature;
   }
 

};


int main(){

    stove huolu;

    cout <<huolu.gettemperature()<<endl;



    return 0;
}
