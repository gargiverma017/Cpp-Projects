#include<iostream>
using namespace std;

char getComputerMove(){
    int move;
    //0-2
    move= rand() % 3;
    if(move==0){
        return 'r';
    }
    else if(move==1){
        return 'p';
    }
    else if(move==2){
        return 's';
    }
}

int getResult(char playerMove,char computerMove){
    if(playerMove==computerMove){
        return 0;
    }

    if(playerMove=='r' && computerMove=='p'){
        return -1;
    }
    if(playerMove=='r' && computerMove=='s'){
        return 1;
    }
    if(playerMove=='p' && computerMove=='r'){
        return 1;
    }
    if(playerMove=='p' && computerMove=='s'){
        return -1;
    }
    if(playerMove=='s' && computerMove=='r'){
        return -1;
    }
    if(playerMove=='s' && computerMove=='p'){
        return 1;
    }
}



int main(){
    char playerMove;
    cout<<"Welcome to the game of Rock Ppaer Scissor"<<endl;

    cout<<"Choose r for Rock, p for Paper, s for scissor"<<endl;

    //taking input from player
    while(1){
        cin>>playerMove;
        if(playerMove=='r' || playerMove=='p'|| playerMove=='s'){
            break;
        }
        else{
            cout<<"Invalid Move"<<endl;
        }
    }

    char computerMove=getComputerMove();
    int result=getResult(playerMove,computerMove);

    if(result==0){
        cout<<"Draw"<<endl;
    }
    else if(result==1){
        cout<<"You Win"<<endl;
    }
    else if(result==-1){
        cout<<"You Lose"<<endl;
    }

    cout << "Your Move: " << playerMove << endl;
    cout << "Computer's Move: " << computerMove << endl;

}
