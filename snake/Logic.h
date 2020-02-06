#pragma once
#include"Input.h"
class Logic{
public:
	Point pt;
	void logic1() {

		int lastX, lastY;
		lastX = fruitX;
		lastY = fruitY;

		switch (dir) {
		
		case RIGHT:
			points[0].x++;
			break;
		case LEFT:
			points[0].x--;
			break;
		case UP:
			points[0].y--;
			break;
		case DOWN:
			points[0].y++;
			break;
		case PAUSE:
			break;
		}
		if (points[0].x == fruitX && points[0].y == fruitY) {
			Point point;
			point.x = lastX;
			point.y = lastY;
			points.push_back(point);
		}
		
		for (int i = points.size()-1; i > 0; i--) {
			points[i].x = points[i - 1].x;
			points[i].y = points[i - 1].y;
		}
			
		if (points[0].x<0 || points[0].x>rows-2 || points[0].y<0 || points[0].y>column){
			gameover = true;
			
		}
			
		for(int i=2; i<points.size();i++)
			if (points[i].x == points[0].x && points[i].y == points[0].y) {
				gameover = true;
				
			}
				
		
		if (points[0].x == fruitX && points[0].y == fruitY) {
			score++;
			srand(time(0));
			fruitX = rand() % (rows-2);
			fruitY = rand() % (column-2);
		}
		
	

	}
	void logic2() {
		int lastX, lastY;
		lastX = fruitX;
		lastY = fruitY;

		switch (dir) {

		case RIGHT:
			points[0].x++;
			break;
		case LEFT:
			points[0].x--;
			break;
		case UP:
			points[0].y--;
			break;
		case DOWN:
			points[0].y++;
			break;
		case PAUSE:
			break;
		}
		if (points[0].x == fruitX && points[0].y == fruitY) {
			Point point;
			point.x = lastX;
			point.y = lastY;
			points.push_back(point);
		}

		for (int i = points.size() - 1; i > 0; i--) {
			points[i].x = points[i - 1].x;
			points[i].y = points[i - 1].y;
		}

		if (points[0].x < 0)
			points[0].x = rows -3;
		if (points[0].x > rows - 2)
			points[0].x = 1;
		if (points[0].y < 0)
			points[0].y = column-2;
		if (points[0].y > column - 1)
			points[0].y = 1;
		for (int i = 2; i < points.size(); i++)
			if (points[i].x == points[0].x && points[i].y == points[0].y) {
				gameover = true;
				
			}
				

		if (points[0].x == fruitX && points[0].y == fruitY) {
			score++;
			srand(time(0));
			fruitX = rand() % (rows - 2);
			fruitY = rand() % (column - 2);
		}
	}
	void logic3() {
		int lastX, lastY;
		lastX = fruitX;
		lastY = fruitY;

		switch (dir) {

		case RIGHT:
			points[0].x++;
			break;
		case LEFT:
			points[0].x--;
			break;
		case UP:
			points[0].y--;
			break;
		case DOWN:
			points[0].y++;
			break;
		case PAUSE:
			break;
		}
		if (points[0].y == column / 2) {
			gameover = true;
			
		}
			
		if (points[0].x == fruitX && points[0].y == fruitY) {
			Point point;
			point.x = lastX;
			point.y = lastY;
			points.push_back(point);
		}

		for (int i = points.size() - 1; i > 0; i--) {
			points[i].x = points[i - 1].x;
			points[i].y = points[i - 1].y;
		}

		if (points[0].x < 0)
			points[0].x = rows - 3;
		if (points[0].x > rows - 2)
			points[0].x = 1;
		if (points[0].y < 0)
			points[0].y = column - 2;
		if (points[0].y > column - 1)
			points[0].y = 1;
		for (int i = 2; i < points.size(); i++)
			if (points[i].x == points[0].x && points[i].y == points[0].y) {
				gameover = true;
				
			}
				

		if (points[0].x == fruitX && points[0].y == fruitY) {
			score++;
			srand(time(0));
			fruitX = rand() % (rows - 2);
			bool print = false;
			while(!print){
				fruitY = rand() % (column - 2);
				if (fruitY != column / 2)
					print = true;
			}
			
		}
	}
	void logic4() {
		int lastX, lastY;
		lastX = fruitX;
		lastY = fruitY;

		switch (dir) {

		case RIGHT:
			points[0].x++;
			break;
		case LEFT:
			points[0].x--;
			break;
		case UP:
			points[0].y--;
			break;
		case DOWN:
			points[0].y++;
			break;
		case PAUSE:
			break;
		}
		if (points[0].y == column / 2 || points[0].x == rows / 2) {
			gameover = true;
			
		}
			
		
		if (points[0].x == fruitX && points[0].y == fruitY) {
			Point point;
			point.x = lastX;
			point.y = lastY;
			points.push_back(point);
		}

		for (int i = points.size() - 1; i > 0; i--) {
			points[i].x = points[i - 1].x;
			points[i].y = points[i - 1].y;
		}

		if (points[0].x < 0)
			points[0].x = rows - 3;
		if (points[0].x > rows - 2)
			points[0].x = 1;
		if (points[0].y < 0)
			points[0].y = column - 2;
		if (points[0].y > column - 1)
			points[0].y = 1;
		for (int i = 2; i < points.size(); i++)
			if (points[i].x == points[0].x && points[i].y == points[0].y) {
				gameover = true;
				
			}
				

		if (points[0].x == fruitX && points[0].y == fruitY) {
			score++;
			srand(time(0));
			fruitX = rand() % (rows - 2);
			bool print = false;
			while (!print) {
				fruitY = rand() % (column - 2);
				if (fruitY != column / 2)
					print = true;
			}

		}
	}
};