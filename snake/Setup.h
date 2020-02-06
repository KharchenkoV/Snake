#pragma once
#include<iostream>
#include <conio.h>
#include<ctime>
#include <vector>
using namespace std;
bool gameover;

int  fruitX, fruitY;
enum eDirection{LEFT, RIGHT, UP, DOWN, PAUSE };
eDirection dir;
const int rows = 50;
const int column = 20;
int score;
class Point {
public:
	
	int  x;
	int y;
	
};
vector <Point> points;
void setup() {
	gameover = false;
	score = 0;
	srand(time(0));
	fruitX = rand() % rows;
	fruitY = rand() % column;
	int x = rows / 2 - 1;
	int y = column / 2 - 1;
	Point pt;
	Point point;
	point.x = x;
	point.y = y;
	points.push_back(point);
}
void setup3() {
	gameover = false;
	score = 0;
	srand(time(0));
	fruitX = rand() % rows;
	fruitY = rand() % column;
	int x = rows / 2 - 1;
	int y = column / 4;
	Point pt;
	Point point;
	point.x = x;
	point.y = y;
	points.push_back(point);
}
void setup4() {
	gameover = false;
	score = 0;
	srand(time(0));
	fruitX = rand() % rows;
	fruitY = rand() % column;
	int x = rows / 4;
	int y = column / 4;
	Point pt;
	Point point;
	point.x = x;
	point.y = y;
	points.push_back(point);
}