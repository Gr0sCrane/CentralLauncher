#include "Game.h"

auto Game::getName() const
{
    return name;
}

auto Game::getPath() const 
{
    return path;
}

auto Game::getPlatform() const
{
    return platform;
}

auto Game::getIconPath() const
{
    return iconPath;
}

auto Game::getLastPlayed() const
{
    return lastPlayed;
}

void Game::launch(){

}

void Game::toJson(){
    
}