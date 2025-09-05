#pragma once
#include <iostream>
#include <vector>
#include "Game.h"

class GameManager {

    std::vector<Game> games;

public:

    std::vector<Game> getGames() const;

    void scanFolder();
    void addGame(Game g);
    void getFiltredGameList(); //??
};