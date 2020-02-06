#pragma once
#include <iostream>
#include "Setup.h"
using namespace std;
class Map {
public:
	Point pt;
	void Draw1() {
		
		system("cls");
		for (int i = 0; i < rows + 1; i++)
			cout << "#";
		cout << endl;
		for (int i = 0; i < column; i++) {
			for (int j = 0; j < rows; j++) {
				if (j == 0 || j == rows - 1) cout << "#";
				
				if (i == points[0].y && j == points[0].x)cout << "*";
				else if (i == fruitY && j == fruitX)
					cout << "0";
				else {
					bool print = false;
					for (int l = 0; l < points.size(); l++) {
						if (points[l].x == j && points[l].y == i) {
							cout << "*";
							print = true;
						}
							
					}
					if (!print)
						cout << " ";
				}

					
			}
			cout << endl;
		}
		for (int i = 0; i < rows + 1; i++)
			cout << "#";
		cout << endl;
	}
	void Draw2() {
		system("cls");
		for (int i = 0; i < rows + 1; i++)
			cout << "@";
		cout << endl;
		for (int i = 0; i < column; i++) {
			for (int j = 0; j < rows; j++) {
				if (j == 0 || j == rows - 1) cout << "@";

				if (i == points[0].y && j == points[0].x)cout << "*";
				else if (i == fruitY && j == fruitX)
					cout << "0";
				else {
					bool print = false;
					for (int l = 0; l < points.size(); l++) {
						if (points[l].x == j && points[l].y == i) {
							cout << "*";
							print = true;
						}

					}
					if (!print)
						cout << " ";
				}


			}
			cout << endl;
		}
		for (int i = 0; i < rows + 1; i++)
			cout << "@";
		cout << endl;
	}
	void Draw3() {
		system("cls");
		for (int i = 0; i < rows + 1; i++)
			cout << "@";
		cout << endl;
		for (int i = 0; i < column; i++) {
			for (int j = 0; j < rows; j++) {
				if (j == 0 || j == rows - 1) cout << "@";
				if (i == column / 2 && i < rows/2 )
					cout << "#";
				if (i == points[0].y && j == points[0].x)cout << "*";
				else if (i == fruitY && j == fruitX)
					cout << "0";
				else {
					bool print = false;
					for (int l = 0; l < points.size(); l++) {
						
					 if (points[l].x == j && points[l].y == i) {
							cout << "*";
							print = true;
						}

					}
					if (!print)
						if(i!=column/2)
							cout << " ";
				}


			}
			cout << endl;
		}
		for (int i = 0; i < rows + 1; i++)
			cout << "@";
		cout << endl;
	}
	void Draw4() {
		system("cls");
		for (int i = 0; i < rows + 1; i++)
			cout << "@";
		cout << endl;
		for (int i = 0; i < column; i++) {
			for (int j = 0; j < rows; j++) {
				if (j == 0 || j == rows - 1) cout << "@";
				if (i == column / 2 && i < rows / 2)
					cout << "#";
				if (j == rows / 2&&i!=column/2 )
					cout << "#";
				if (i == points[0].y && j == points[0].x)cout << "*";
				else if (i == fruitY && j == fruitX)
					cout << "0";

				else {
					bool print = false;
					for (int l = 0; l < points.size(); l++) {

						if (points[l].x == j && points[l].y == i) {
							cout << "*";
							print = true;
						}

					}
					if (!print)
						if (i != column / 2&&j!=rows/2)
							cout << " ";
				}


			}
			cout << endl;
		}
		for (int i = 0; i < rows + 1; i++)
			cout << "@";
		cout << endl;
	}
};