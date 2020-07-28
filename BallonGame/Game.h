#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Config.hpp"
#include "SFML/GpuPreference.hpp"
#include "SFML/Network.hpp"

class Game
{
private:
	// private variables
	sf::RenderWindow* mWindow;
	sf::VideoMode mVideoMode;
	sf::Event mEvent;

	// private functions
	void initVariables();
	void initWindow();

public:
	// constructor
	Game();
	~Game();

	// public functions
	bool running();
	void processInput();
	void updateGame();
	void renderGame();
};

