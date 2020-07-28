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
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event event;

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

