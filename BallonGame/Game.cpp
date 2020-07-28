#include "Game.h"

void Game::initVariables()
{
    this->mWindow = nullptr;
}

void Game::initWindow()
{
    this->mVideoMode.width = WIDTH;
    this->mVideoMode.height = HIEGHT;

    this->mWindow = new sf::RenderWindow(
        this->mVideoMode,
        "Ballon Game",
        sf::Style::Titlebar | sf::Style::Close);
}

Game::Game()
{
    this->initVariables();
    this->initWindow();
}

Game::~Game()
{
    delete this->mWindow;
}

bool Game::running()
{
    return this->mWindow->isOpen();
}

void Game::processInput()
{
}

void Game::updateGame()
{
}

void Game::renderGame()
{
}
