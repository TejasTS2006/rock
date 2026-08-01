#include <iostream>
using namespace std;
int win(char user , char comp){
    if((user=='r' && comp=='p')||(user=='p'&&comp=='s')||(user=='s'&&comp=='r'))return 0;
    else if ((user=='p' && comp=='r')||(user=='s'&&comp=='p')||(user=='r'&&comp=='s'))return 1;
    else return 2;
}
void displayChoices(char user , char comp){
    string userChoice , computerChoice;
    if(comp=='r')computerChoice="Rock";
    else if(comp=='s')computerChoice="Scissors";
    else computerChoice = "Paper";

    if(user=='r')userChoice="Rock";
    else if(user=='s')userChoice="Scissors";
    else userChoice = "Paper";

    cout<<"You chose:"<<userChoice<<"\n";
    cout<<"Computer chose:"<<computerChoice<<"\n";
}

char computerAns(){
        int val = rand()%3;
    if(val==0)return 'r';
    else if(val==1)return 'p';
    else return 's';
}
int main(){
    char choice='y';
    do{
    char userChoice;
    cout<<"Rock Papers or Scissors?(r,p,s)\n";
    cin>>userChoice;

    char computerChoice = computerAns() ;
    
    displayChoices(userChoice,computerChoice);
    
    if(win(userChoice,computerChoice)==0)cout<<"You lost\n";
    else if(win(userChoice,computerChoice)==1)cout<<"You won\n";
    else cout<<"Draw\n";

    cout<<"Continue?(y/n):";
    cin>>choice;
    }while(choice=='y');
}
