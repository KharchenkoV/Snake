#include"GameManager.h"
using namespace std;
int main() {
	GameManager gm;
	int a,b;
	cout << "\t 1. Start random game\n\t 2. Choose level\n\t 3. Exit game\n";
	cin >> a;
	switch (a) {
	case 1:
		gm.ChooseGame();
		break;
	case 2:
		cout << "\t Choose level 1-4\n";
		cin >> b;
		switch (b) {
		case 1:
			gm.Level1();
			break;
		case 2:
			gm.Level2();
			break;
		case 3:
			gm.Level3();
			break;
		case 4:
			gm.Level4();
			break;
		}
		break;
	case 3:

		break;
	}
			return 0;
	}