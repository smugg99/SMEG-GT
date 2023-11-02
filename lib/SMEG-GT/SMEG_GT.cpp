#include "SMEG_GT.h"


SMEG_GT::SMEG_GT() {

}

SMEG_GT::~SMEG_GT() {

}

void SMEG_GT::loadGame(GT_Game* newGame) {
	this->game = newGame;
	this->game->setup();
}

void SMEG_GT::handleSetup(GT_Hardware* hardware) {
	this->hardware = hardware;
}

void SMEG_GT::handleLoop() {
	if (game) {
		while (true) {
			game->input();
			game->update();
			game->render();
		}
	}
}