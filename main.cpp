#include<iostream>
#include "app/services/battleship/models/player.cpp"

using namespace std;

int main(){
    cout<<"Hello World!\n";

    Player* p = new Player(3);

    cout<<p->getA()<<" Yahoo!\n";
    p->setA(7);
    cout<<p->getA()<<" Yahoo!\n";

}