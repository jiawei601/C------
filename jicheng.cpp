
#include<iostream>

class animal{

public:
    bool alive =true;
void eat(std::string food){

    std::cout <<"this animal is eating"<<food;
}    


};



class dog : public animal{};


int main (){

    dog menmen;

    std::cout<<menmen.alive<<std::endl;


    menmen.eat("youtiao");




    return 0;
}
