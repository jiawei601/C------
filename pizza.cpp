    #include <iostream>

    using namespace std;



    class pizza
    {

    public:

    string topping1;
    string topping2;
    string topping3;
/*
    pizza(){
        this->topping1 = "";
        this->topping2 = "";
    }

    pizza(string topping1){
        this->topping1 = topping1;
    }

    pizza(string topping1,string topping2){

        this->topping1=topping1;
        this->topping2 = topping2;

    }*/
    };
    

    int main(){


        pizza pizza1{"yidalisausage"};
        cout <<pizza1.topping1<<endl;

        pizza pizza2{"mushroom","cucumber"};
        cout<<pizza2.topping2<<endl;

        pizza pizza3{"mushroom","cucumber","orange"};
        cout<<pizza2.topping2<<endl;
        pizza pizza4{};

        return 0;
    }
