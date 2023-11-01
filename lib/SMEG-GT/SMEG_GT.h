#include "Game.h"

class SMEG_GT {
public:
	static SMEG_GT& getInstance() {
		static SMEG_GT instance;
		return instance;
	}

	void loadGame(Game* game) {
		currentGame = game;
		currentGame->setup();
	}

	void runGameLoop() {
		if (currentGame) {
			while (true) {
				currentGame->input();
				currentGame->update();
				currentGame->render();
			}
		}
	}

private:
	Game* currentGame;

	SMEG_GT() : currentGame(nullptr) {}
	~SMEG_GT() {}
};
