#ifndef SMEG_GT_h
#define SMEG_GT_h

#include "GT_Hardware.h"
#include "GT_Game.h"

class SMEG_GT {
public:
	SMEG_GT();
	~SMEG_GT();

	void loadGame(GT_Game* newGame);
	void handleSetup(GT_Hardware* hardware);
	void handleLoop();

private:
	GT_Game* game;
	GT_Hardware* hardware;
};

#endif