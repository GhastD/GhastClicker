#include "pch.h"
#include <iostream>
#include <windows.h>
#include <Windows.h>
#include <WinUser.h>
#include <string>


using namespace std;

int n = 1;

int x;
int y;

int value;
int times;
int done;
int sleepy;
bool active;
int sleepyx;
bool enabled = true;
bool messages;
string choice;
int timer;


static void console()
{
	cout << "Please restart application" << endl;
	cout << "Exiting in 5s" << endl;
	Sleep(5000);
	
	exit(303);
}



static void autoclicker()
{

	POINT cursorPos;
	GetCursorPos(&cursorPos);
	int x = cursorPos.x;
	int y = cursorPos.y;

	cout << "Please state how many times would you like to click per second." << endl;
	cout << ">>  ";
	cin >> times;
	cout << "    " << endl;
	cout << "Confirmed, you will be clicking at an average of " << times << " per second" << endl;
	cout << "    " << endl;
	cout << "    " << endl;
	int sleepyx = 1000 / times;
	
	system("cls");

	cout << "<>-====================================================================================================-<>" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "Start autoclicker = F8" << endl;
	cout << "Stop autoclicker = F6" << endl;
	cout << "View settings = type 'settings'" << endl;
	cout << "Restart application = type 'start'" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "<>-====================================================================================================-<>" << endl;
	cout << "" << endl;
	cout << "<   =   > System log <   =   >" << endl;
	cout << "" << endl;
	messages = false;

	while (true) {

		if (GetAsyncKeyState(VK_UP & 0x26)) {

			cout << "Starting clicker" << endl;
			active = true;

			while (true)
			{
				if (!active) {
					break;	
				}

				Sleep(sleepyx);
				mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
				mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);


				if (GetAsyncKeyState(VK_DOWN & 0x28)) {
					active = false;
					cout << "Disabling clicker" << endl;
				}

				if (GetAsyncKeyState(VK_SHIFT & 0x10)) {
					messages = !messages;

				}
				
			}
			while (true)
			{
				if (!active) {
					break;
				}
				timer++;
				Sleep(1000);
				if (messages)
				{
					cout << "Current time spent on clicker: " << timer << endl;
					cout << "Current clicks per seconds: " << sleepyx << "/s" << endl;

				}


			}
			if (GetAsyncKeyState(VK_ESCAPE & 0x1B)) {

				cin >> choice;

				if (choice == "start")
				{
					system("cls");
					console();
				}
				else if (choice == "settings")
				{
					system("cls");
					console();
				}
				else {
					cout << "Error" << endl;
				}

				cin.get();

			}
		}
		
	}
}



static void start()
{

	cout << "  " << endl;
	cout << "  " << endl;
	cout << "<>-====================================================================================================-<>" << endl;
	cout << "  " << endl;
	cout << "    d888b  db   db  .d8b.  .d8888. d888888b    .o88b. db      d888888b  .o88b. db   dD d88888b d8888b." << endl;
	cout << "  88' Y8b 88   88 d8' `8b 88'  YP `~~88~~'   d8P  Y8 88        `88'   d8P  Y8 88 ,8P' 88'     88  `8D" << endl;
	cout << "  88      88ooo88 88ooo88 `8bo.      88      8P      88         88    8P      88,8P   88ooooo 88oobY'" << endl;
	cout << "  88  ooo 88~~~88 88~~~88   `Y8b.    88      8b      88         88    8b      88`8b   88~~~~~ 88`8b  " << endl;
	cout << "  88. ~8~ 88   88 88   88 db   8D    88      Y8b  d8 88booo.   .88.   Y8b  d8 88 `88. 88.     88 `88." << endl;
	cout << "   Y888P  YP   YP YP   YP `8888Y'    YP       `Y88P' Y88888P Y888888P  `Y88P' YP   YD Y88888P 88   YD" << endl;
	cout << "  " << endl;
	cout << "<>-====================================================================================================-<>" << endl;


	cout << "  " << endl;
	cout << "Booting up PhantomSpeeder" << endl;
	cout << "    " << endl;
	cout << "Made with <3 by Ghast, still a test programn\nI truly goddamn hope I become good at this" << endl;
	cout << "    " << endl;
	cout << "    " << endl;
	cout << "    " << endl;
	

	done = 0;

	autoclicker();


	cout << "Done with <3 by this nerdy fuck using a fucking youtube tutorial" << endl;
	cout << "At least I learnt a lot, but still lame asf" << endl;
	cout << "    " << endl;
	Sleep(1000);
	cout << "Command log:" << endl;
	cout << ">>    ";
	cin >> choice;

	if (choice == "start")
	{
		system("cls");
		start();

	}
	else if (choice == "settings")
	{
		system("cls");
		start();

	}
	else {
		cout << "Error" << endl;

	}

	cin.get();
}



int main()
{
	
	start();
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
