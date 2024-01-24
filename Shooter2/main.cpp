#include<iostream>
#include<conio.h>
using namespace std;
//#define SHOOTER_FOR
#define SHOOTER_CASE
#define ENTER 13
#define ESC 27

#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77

void main() {
	setlocale(LC_ALL, " ");
	char key;


#ifdef SHOOTER_FOR
	do
	{
		key = _getch();
		if (key == 'w' || key == 'W' || key == UpArrow)cout << "Forward" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow) cout << "Down" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow) cout << "Left" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow) cout << "Right" << endl;
		else if (key == ' ')cout << "Jump" << endl;
		else if (key == ENTER) cout << "Fire" << endl;
		else if (key != ESC && key != -32) cout << "Error" << endl; // -32 second key of arrows

	} while (key != ESC);

#endif // SHOOTER_FOR


#ifdef SHOOTER_CASE
	do
	{
		key = _getch();

		switch (key)
		{
		case 'w': case 'W': case UpArrow: cout << "Forward" << endl; break;
		case 's': case 'S': case DownArrow: cout << "Back" << endl; break;
		case 'a': case 'A': case LeftArrow: cout << "Left" << endl; break;
		case 'd': case 'D': case RightArrow: cout << "Right" << endl; break;
		case ' ': cout << "Jump" << endl; break;
		case ENTER: cout << "Fire" << endl; break;
		case ESC: cout << "Exit" << endl;
		case -32: break;
		default: cout << "Error" << endl;
		}
	} while (key != ESC);

#endif // SHOOTER_CASE

}