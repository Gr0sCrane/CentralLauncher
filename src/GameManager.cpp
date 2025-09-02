#include "GameManager.h"

auto GameManager::getGames() const
{
    return games;
}

void GameManager::addGame(Game g){
    games.push_back(g);
}