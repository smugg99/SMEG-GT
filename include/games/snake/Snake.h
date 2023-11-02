#pragma once
#include <SMEG_GT.h>

class Snake : public SMEG_GT::Game {
public:
	Snake();
	~Snake();

	void setup() override;
	void input() override;
	void update() override;
	void render() override;
};
