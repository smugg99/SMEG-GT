#pragma once

namespace SMEG_GT {
	enum Button {
		UP,
		DOWN,
		LEFT,
		RIGHT,
		ACTION1,
		ACTION2
	};

	// Implement an ADC and PWM classes

	class Pin {
	public:
		Pin(int address, bool isInput, bool isActiveLow);
		~Pin();

		int address;
		bool isInput;
		bool isActiveLow;

		bool getState();
		void setState(bool newState);
	};

	class Hardware {
	public:
		Hardware();
		~Hardware();

		int buttonUpPin;
		int buttonDownPin;
		int buttonLeftPin;
		int buttonRightPin;

		int buzzerPin;
		int batteryPin;
	};
}
