#pragma once
#include"Logic.h"
class GameManager {
public:
	Map mp;
	Input it;
	Logic lc;
	Point pt;
	void Level1() {
		
		setup();
		while (!gameover) {
			mp.Draw1();
			it.input();
			lc.logic1();
			cout << "Score:  " << score << endl;
		}
	}
	void Level2() {
		setup();
		while (!gameover) {
			mp.Draw2();
			it.input();
			lc.logic2();
			cout << "Score:  " << score << endl;
		}
	}
	void Level3() {
		setup3();
		while (!gameover) {
			mp.Draw3();
			it.input();
			lc.logic3();
			cout << "Score:  " << score << endl;
		}
	}
	void Level4() {
		setup4();
		while (!gameover) {
			mp.Draw4();
			it.input();
			lc.logic4();
			cout << "Score:  " << score << endl;
		}
	}
	void ChooseGame() {
		srand(time(0));
		int ind = rand() % 4+1;
		switch (ind) {
		case 1:
			Level1();
			break;
		case 2:
			Level2();
			break;
		case 3:
			Level3();
			break;
		case 4:
			Level4();
			break;
		}
	}
};