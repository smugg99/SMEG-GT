#include "SMEG_GT.h"

namespace SMEG_GT {
	Game* game = nullptr;
	Hardware* hardware = nullptr;

	void loadGame(Game* newGame) {
		game = newGame;
		game->setup();
	}

	void setup(Hardware* hw) {
		hardware = hw;

		int _outputs[] = {
			hardware->batteryPin,
			hardware->buzzerPin,
		};

		int _inputs[] = {
			hardware->buttonUpPin,
			hardware->buttonDownPin,
			hardware->buttonLeftPin,
			hardware->buttonRightPin,
		};

		for (int _output : _outputs) {
			pinMode(_output, OUTPUT);
		}

		for (int _input : _inputs) {
			pinMode(_input, INPUT);
		}
	}

	void loop() {
		if (game) {
			game->input();
			game->update();
			game->render();
		}
	}
}
