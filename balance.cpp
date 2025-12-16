#include<iostream>

using namespace std;


void showblance(double balance){
    cout<<"your balance is: "<<balance<<endl;
}


double deposit(){
    double amount;
    cout<<"enter amount to deposit: ";
    cin>>amount;
    if(amount>0)
    {return amount;
}
else{
    cout<<"invalid amount"<<endl;
    return 0;
}
}
double withdraw(double balance){
    double amount;
    cout<<"enter amount to withdraw: ";
    cin>>amount;
    if(amount > balance){
        cout<<"insufficient funds"<<endl;
        return 0;
    }
    else if(amount <= 0){
        cout<<"invalid amount"<<endl;
        return 0;
    }
    else return amount;
}



int main() {
    double balance = 0.0;
    int choice;

    do
    {cout<<"enter your choice: 1-deposit, 2-withdraw, 3-show balance,4-exit "<<endl;
    cin>>choice;
    switch (int(choice))
    {
    case 1:
        balance += deposit();
        break;
    case 2:
        balance -= withdraw(balance);
        /* code */
        break;
    case 3:
        showblance(balance);
        break;
    case 4:
        cout<<"exiting..."<<endl;
        break;
    default:
        cout<<"invalid choice"<<endl;
        break;
    }
        /* code */
    } while (choice != 4);
    


    


    
    
}