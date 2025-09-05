#include "UI.h"

void showGameList(GameManager gM){

    auto games = gM.getGames();

    if (games.empty()){
        std::cout<<"The game list is empty"<<"\n";
    }

    for (Game g : gM.getGames()){
        std::cout<<"Game name : " + g.getName() + " - platform : " + g.getPlatform() <<"\n";
    }
}