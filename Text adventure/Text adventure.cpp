// Text adventure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int bravery, cowardice, strength,
		input;
	bravery = 1, cowardice = 5, strength = 3;

	cout << "Press enter to advance, answer with the numbers given, try not to fuck up :)" << endl;
	cout << "" << endl;
	cout << "          SAVING PRIVATE MEDIEVAL WAIFU AND CHRONICLES OF BETA KNIGHT" << endl;
	cout << "You are a lazy knight during the medieval living in a small village." << endl;
	cout << "Your archnemesis Lobsterboy has stolen the local princess and it's up to you to save her." << endl; getchar();
	cout << "" << endl;
	cout << "Cookuuuuh. Cookuuuuh. Cookuuuuuuuuh." << endl; getchar();
	cout << "You hear some sort of commotion outside." << endl; getchar();
	cout << "What do you do?" << endl;

	bool repeat(true);
	do{
		cout << "1. Get up and investigate" << endl;
		cout << "2. Go back to sleep" << endl;
		cout <<	"3. Go to the barracks and get buff" << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			cout << "You got up, not really feeling like saving the day." << endl; getchar();
			
			cout << "(1. investigate through the window. 2. go out and see what's up.)" << endl;
			cin >> input;
			repeat = false;
			switch (input)
			{
			case 1:
				cout << "You look through the window not really seeing anything but you hear a woman" << endl;
				cout << "screaming." << endl; getchar();
				cout << "What do you do?" << endl;
				
				cout << "(1. go back to bed. 2. Investigate further.)" << endl;
				cin >> input;
				repeat = false;
				switch (input)
				{
				case 1:
					cout << "You quickly fall asleep and dream about your waifu, the fair princess of your" << endl;
					cout << "town." << endl; getchar();
					cout << "You are wildly shaken and wake up instantly!" << endl; getchar();
					cout << "Squire: Hello sir, it's me, your brother and squire." << endl; getchar();
					cout << "Come quick! Our local princess has been kidnapped!" << endl; getchar();
					cout << "You must save her!" << endl; getchar();
					
					cout << "(1. Quiet squire, I don't have to take orders from you! 2. Ooh no! Not my waifu! ugh, I mean, not our fair princess! get my lance squire and let us ride out!)" << endl;
					cin >> input;
					repeat = false; 
					switch (input)
					{
					case 1:
						cout << "Squire: Bu-u-u-ut sir this could be an oppurtunity to finally show the princess your" << endl;
						cout << "gratitude. She might even give you a kiss, I mean, you have never even kissed a fair maiden." << endl; getchar();
					}
				case 2: 
					repeat = false;
					break;
				}
			case 2:
				cout << "You see the fair princess outside, but a gang of ruffians is attacking her!" << endl; getchar();
				cout << "Princess: Help! Help! I'm being attacked by these savages!" << endl; getchar();
				cout << "Savage 1: Quiet you! If you shout like that, someone might come and save you." << endl; getchar();
				cout << "Savage 2: Not like that's gonna happen!" << endl; getchar();
				cout << "Savages: HAHAHAHAHA!" << endl; getchar();
				cout << "Savage 3: Hey, Who's that?" << endl; getchar();
				cout << "You feel everyones eyes on you. Even the princess looks directly at you" << endl; getchar();

				cout << "1. Go out and save her" << endl;
				cout << "2. Hide and cover in fear." << endl;
				cin >> input;
				repeat = false;
				switch (input)
				{
				case 1:
					repeat = false;
					break;
				}
								

				
			}
			break;
		case 2:
			cout << "You quickly fall asleep and dream about your waifu, the fair princess of" << endl;
			cout << "the town." << endl; getchar();
			repeat = false;
			break;
		case 3:
			cout << "You're too beta to go through with it, you start crying instead" << endl; getchar();
			repeat = false;
			break;
		default:
			cout << "I don't understand unless you answer with a number" << endl; getchar();
			cout << "" << endl;

			break;
		} 

	} while (repeat);

	system("pause");

	return 0;
	
}
