#include <Adafruit_GFX.h>
#include <Adafruit_SH1106.h>

#include <Arduino.h>
#include <SMEG_GT.h>

// 3A 2B
#define UP_BUTTON_PIN 7
#define DOWN_BUTTON_PIN 6
#define LEFT_BUTTON_PIN 8
#define RIGHT_BUTTON_PIN 4

#define OLED_RESET 4
Adafruit_SH1106 display(OLED_RESET);

SMEG_GT gt;

void setup() {
	GT_Hardware gt_hardware;
	gt_hardware.buttonUpPin = 7;
	gt_hardware.buttonDownPin = 6;
	gt_hardware.buttonLeftPin = 8;
	gt_hardware.buttonRightPin = 4;
	gt_hardware.buzzerPin = 11;
	gt_hardware.batteryPin = A3;

	gt.handleSetup(&gt_hardware);

	display.begin(SH1106_SWITCHCAPVCC, 0x3C);
	delay(1000);

	randomSeed(analogRead(0));

	pinMode(UP_BUTTON_PIN, INPUT);
	pinMode(DOWN_BUTTON_PIN, INPUT);
	pinMode(LEFT_BUTTON_PIN, INPUT);
	pinMode(RIGHT_BUTTON_PIN, INPUT);
}

void loop() {
	gt.handleLoop();
}
