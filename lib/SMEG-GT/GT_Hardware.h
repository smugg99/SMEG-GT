#ifndef GT_Hardware_h
#define GT_Hardware_h

class GT_Hardware {
public:
	int buttonUpPin;
	int buttonUpActiveLow;

	int buttonDownPin;
	int buttonDownActiveLow;

	int buttonLeftPin;
	int buttonLeftActiveLow;

	int buttonRightPin;
	int buttonRightActiveLow;

	int buzzerPin;
	int batteryPin;

	GT_Hardware();
};

#endif
