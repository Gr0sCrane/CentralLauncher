#pragma once
#include <iostream>

class Game {

    std::string name;
    std::string path;
    std::string platform;
    std::string iconPath;
    std::string lastPlayed;

public:
    auto getName() const;
    auto getPath() const;
    auto getPlatform() const;
    auto getIconPath() const;
    auto getLastPlayed() const;

    void launch();
    void toJson();

};