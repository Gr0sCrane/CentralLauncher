#pragma once
#include <iostream>

class Game {

    std::string name;
    std::string path;
    std::string platform;
    std::string iconPath;
    std::string lastPlayed;

public:

    Game(std::string name,std::string platform);
    ~Game();

    std::string getName() const;
    std::string getPath() const;
    std::string getPlatform() const;
    std::string getIconPath() const;
    std::string getLastPlayed() const;

    void launch();
    void toJson();

};