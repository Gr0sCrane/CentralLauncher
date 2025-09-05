#include "Game.h"


Game::Game(std::string name,std::string platform) : name(name), platform(platform) {}
Game::~Game() = default;

std::string Game::getName() const
{
    return name;
}

std::string Game::getPath() const 
{
    return path;
}

std::string Game::getPlatform() const
{
    return platform;
}

std::string Game::getIconPath() const
{
    return iconPath;
}

std::string Game::getLastPlayed() const
{
    return lastPlayed;
}

void Game::launch(){

}

void Game::toJson(){
    
}