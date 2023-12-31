#pragma once
#include <Arduino.h>
#include "Hardware.h"
#include "Game.h"

namespace SMEG_GT {
	void loadGame(Game* newGame);
	void setup(Hardware* newHardware);
	void loop();

	bool isButtonPressed(Button button);
}
