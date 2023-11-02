class GT_Game {
public:
	GT_Game() {

	}

	~GT_Game() {

	}

	virtual void setup() = 0;
	virtual void input() = 0;
	virtual void update() = 0;
	virtual void render() = 0;
};