#pragma once

namespace SMEG_GT {
	class Game {
	public:
		Game();
		~Game();

		virtual void setup() = 0;
		virtual void input() = 0;
		virtual void update() = 0;
		virtual void render() = 0;
	};
}
