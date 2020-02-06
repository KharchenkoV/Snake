#pragma once
#include "Map.h"

class Input {
public:
	void input() {
		if (_kbhit()) {
			switch (_getch()) {
			case 'a':
				dir = LEFT;
				break;
			case 'w':
				dir = UP;
				break;
			case 's':
				dir = DOWN;
				break;
			case 'd':
				dir = RIGHT;
				break;
			case 'q':
				dir = PAUSE;
				break;
			}
			


		}
	}
};