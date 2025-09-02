#include <iostream>
#include <vector>
#include "Game.h"

class GameManager {

    std::vector<Game> games;

public:

    auto getGames() const;

    void scanFolder();
    void addGame(Game g);
    void getFiltredGameList(); //??
};