#include<iostream>
#include<ctime>

using namespace std;

char getuserinput();
char getcomputerinput();
void showchoice(char choice);
char determinewinner(char user, char computer);



int main()
{
    char player;
    char computer;

    player=getuserinput();
    cout<<"Player choice: "<<endl;
    showchoice(player);
    computer=getcomputerinput();
    cout<<"Computer choice: "<<endl;
    showchoice(computer);
    determinewinner(player,computer);

    return 0;

}



char getuserinput(){
    char input;
    cout<<"Welcome to Rock, Paper, Scissors!"<<endl;

    do
    { cout<<"Please enter your choice (r for rock, p for paper, s for scissors): ";
    cin>>input;
    cout<<"You chose: "<<input<<endl;
        /* code */
    } while (input!='r' && input!='p' && input!='s');
    
   
    return input;
}
char getcomputerinput(){
    srand(time(NULL));
    int num=rand()%3+1;
    switch (num)
    {case 1:
        return 'r';
        break;
    case 2:
        return 'p';
        break;
    case 3:
        return 's';
        break;
    default:
       cout<<"Error!"<<endl;
        break;
    }
    return 0;
}
void showchoice(char choice){

    switch (choice)
    {
    case 'r':
        cout<<"Rock"<<endl;
        /* code */
        break;
    case 's':
        cout<<"Scissors"<<endl;
        /* code */
        break;
    case 'p':
        cout<<"Paper"<<endl;
        /* code */
        break;
    }
}
char determinewinner(char user, char computer){
    
    switch (user)
    {
    case 'r':
        if (computer=='r')
        {
            cout<<"It's a tie!"<<endl;
            /* code */
        }
        else if (computer=='p')
        {
            cout<<"Computer wins!"<<endl;
            /* code */
        }
        else if (computer=='s')
        {
            cout<<"Player wins!"<<endl;
            /* code */
        }
        break;
    case 'p':
        if (computer=='r')  
        {
            cout<<"Player wins!"<<endl;
            /* code */
        }
        else if (computer=='p')
        {
            cout<<"It's a tie!"<<endl;
            /* code */
        }
        else if (computer=='s')
        {
            cout<<"Computer wins!"<<endl;
            /* code */
        }
        break;
    case 's':
        if (computer=='r')  
        {
            cout<<"Computer wins!"<<endl;
            /* code */
        }
        else if (computer=='p')
        {
            cout<<"Player wins!"<<endl;
            /* code */
        }
        else if (computer=='s')
        {
            cout<<"It's a tie!"<<endl;
            /* code */
        }    
        
        break;
    
   
    }
    return 0;}