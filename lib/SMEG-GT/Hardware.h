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
