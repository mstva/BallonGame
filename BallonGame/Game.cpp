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
    while (this->mWindow->pollEvent(this->mEvent))
    {
        switch (this->mEvent.type)
        {
        case sf::Event::Closed:
            this->mWindow->close();
            break;
        case sf::Event::KeyPressed:
            if (this->mEvent.key.code == sf::Keyboard::Escape)
            {
                this->mWindow->close();
            }
            break;
        }
    }
}

void Game::updateGame()
{
    this->processInput();
}

void Game::renderGame()
{
    this->mWindow->clear(sf::Color(55, 100, 80, 255));
    this->mWindow->display();
}
