#include "SMEG_GT.h"

namespace SMEG_GT {
	Pin::Pin(int address, bool isInput, bool isActiveLow) {
		this->address = address;
		this->isInput = isInput;
		this->isActiveLow = isActiveLow;

		pinMode(A3, isInput == true ? INPUT : OUTPUT);
	}

	Pin::~Pin() {

	}

	bool Pin::getState() {
		if (!this->isInput) { return; }

		bool _state = digitalRead(this->address);
		return this->isActiveLow == true ? !_state : _state;
	}

	void Pin::setState(bool newState) {
		if (this->isInput) { return; }

		digitalWrite(this->address, newState);
	}


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
