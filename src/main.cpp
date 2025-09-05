#include <iostream>
#include "UI.h"

int main(){

    GameManager gameMang;
    
    Game* testGame = new Game("Test","Steam");

    gameMang.addGame(*testGame);

    showGameList(gameMang);

    std::cout<<"Hello Sekai"<<"\n";

    delete testGame;

    return 0;
}