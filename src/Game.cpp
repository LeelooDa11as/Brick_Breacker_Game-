#include "../inc/Game.hpp"

Game::Game(const int lvl) {
	level = new Level(lvl);
	ball = new Ball(40.f, 300.f, 60.f);
	paddle = new Paddle(0.f, 0.f, 45.f);
	return;
}

Game::~Game(void) {
	delete level;
	delete ball;
	delete paddle;
	return;
}