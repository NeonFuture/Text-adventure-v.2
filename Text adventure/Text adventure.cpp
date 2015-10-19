// Text adventure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int depression,
		input; 
	depression = 5;

	cout << "Press enter to advance, answer without spaces and start with capital letter, try not to fuck up :)" << endl;
	cout << "                            SAVING PRIVATE WAIFU" << endl;
	cout << "" << endl;
	cout << "BZZZZZZT. BZZZZZZT. BZZZZZZT." << endl; getchar();
	cout << "Your phone wakes you up. Another day of being beta trash ahead of you." << endl; getchar();
	cout << "What do you do?" << endl; 
	cout << "(1. Get up, 2. Go back to sleep or 3. Suicide)" << endl;
	
	cin >> input;
	switch (input){
	case 1:
		cout << "You got up, feeling like shit. The way you always feel." << endl; getchar();
		break;
	case 2: 
		cout << "You went back to sleep, feelsgoodman" << endl; getchar();
		break;
	case 3: 
		cout << "You're too much of a pussy for that, you start crying instead" << endl; getchar();
		break;
	default: 
		cout << "I don't understand unless you answer with a number" << endl; getchar();
		break;
	}
	cout << "Suddenly, you remember how beta you are." << endl; getchar();
	cout << "Never kissed a girl." << endl; getchar();
	cout << "You get depressed over the fact that you're such a fucking pussy." << endl; getchar();
	cout << "Depression increased by 1. Depression is " << depression << endl; getchar();
	cout << "You also remember that you would kill yourself if it reached 10." << endl; getchar();
	cout << "Let's make the best of out time then by....." << endl; getchar();
	cout << "(1. Browse /r9k/, 2. Go to school or 3. Check phone)" << endl; getchar();

	system("pause");

	return 0;
}

