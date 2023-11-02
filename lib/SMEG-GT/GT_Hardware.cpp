#include "GT_Hardware.h"

GT_Hardware::GT_Hardware() {
	buttonUpPin = 2;
	buttonUpActiveLow = true;

	buttonDownPin = 3;
	buttonDownActiveLow = true;

	buttonLeftPin = 4;
	buttonLeftActiveLow = true;

	buttonRightPin = 5;
	buttonRightActiveLow = true;

	buzzerPin = 6;
	batteryPin = 7;
}
