#include "SMEG_GT.h"

namespace SMEG_GT {
	Hardware::Hardware() {
		buttonUpPin = 2;
		buttonDownPin = 3;
		buttonLeftPin = 4;
		buttonRightPin = 5;

		buzzerPin = 6;
		batteryPin = 7;
	}

	Hardware::~Hardware() {

	}
}
