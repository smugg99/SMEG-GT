#include <Adafruit_GFX.h>
#include <Adafruit_SH1106.h>

#include <Arduino.h>
#include <SMEG_GT.h>

Adafruit_SH1106 display(4);

void setup() {
	SMEG_GT::Hardware hardware;
	hardware.buttonUpPin = 7;
	hardware.buttonDownPin = 6;
	hardware.buttonLeftPin = 8;
	hardware.buttonRightPin = 4;
	hardware.buzzerPin = 11;
	hardware.batteryPin = A3;

	SMEG_GT::setup(&hardware);
	// SMEG_GT::loadGame(&snake);

	display.begin(SH1106_SWITCHCAPVCC, 0x3C);
}

void loop() {
	SMEG_GT::loop();
}
