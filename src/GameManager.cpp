#include "GameManager.h"

std::vector<Game> GameManager::getGames() const
{
    return games;
}

void GameManager::addGame(Game g){
    games.push_back(g);
}