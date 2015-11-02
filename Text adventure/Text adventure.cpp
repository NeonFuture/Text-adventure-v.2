// Text adventure.cpp : Defines the entry point for the console application.
//

#include <ctime>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int bravery, cowardice, strength,
		input;
	bravery = 1, cowardice = 5, strength = 4;
	
	int savageStrength, savageHp, playerHp;
	savageStrength = 6, savageHp = 4, playerHp = 10;
	
	int die; //Variable for RNG
	

	cout << "Press enter to advance, answer with the numbers given, try not to fuck up :)" << endl;
	cout << "" << endl;
	cout << "          SAVING PRIVATE MEDIEVAL WAIFU AND CHRONICLES OF BETA KNIGHT" << endl;
	cout << "You are a lazy knight during the medieval living in a small village." << endl;
	cout << "Your archnemesis Lobsterboy has stolen the local princess and it's up to you to save her." << endl; getchar();
	cout << "" << endl;
	cout << "Cookuuuuh. Cookuuuuh. Cookuuuuuuuuh." << endl; getchar();
	cout << "You hear some sort of commotion outside." << endl; getchar();
	cout << "What do you do?" << endl;		//This part is quite obvious I hope. This is LITERALLY nothing else than shit that gets printed out to the console.

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
					
					cout << "These are your stats: " << endl << "Bravery: " << bravery << "	" << "Strength: " << strength << "	" << "Cowardice: " << cowardice << "	" << "Your HP: " << playerHp << endl << endl; getchar();
					cout << "Sir Beta Knight's brother comes running up to him and exclaims: 'Hey, hey you! Fuckwad behind the bloody computer, heres how combat works, twat!' " << endl << endl; getchar();
					cout << "When combat is initiated, a six-sided die will be thrown. If the number that the die lands on is equal to or bigger than your opponent's  strength divided by your strength";
					cout << "your attack will be successful. You will then deal as much damage as you have strength. However, if you won't kill your target in one turn, the target will automatically ";
					cout << "gain a free hit. How much damage they will do to you depend on their strength and your bravery. Their damage = their strength / your bravery. " << endl;
					
					cout << "1. fight like a real knight/man/beta/. " << endl;
					cout << "2. Pussy out and run away in to the forest. " << endl;
					cin >> input;
					repeat = false;
					switch (input)
					{
						case 1:
						repeat = false;
						cout << "'You wish to fight. Let's see what you got, toilet destroyer!' one of the ruffies shout. " << endl; getchar();
						srand(time(NULL))
						die = rand() % 6 + 1
						cout << "The die lands on: " << die << endl; getchar();
						if (die <= savageStrength / strength)
						{
							cout << "You charge forward against your enemy, without even thinking about getting your armor. (Smart move, champ)" << endl; getchar();
							cout << "Unfortunately, you fail miserably and trip and fall into a pool of mud, noob. (Also meaning that the ruffies get to attack you now. " << endl; getchar();
							cout << "The ruffies fling their old, dirty, nasty paws against you. Your brother screams of furry attacks. You loose " << savageStrength / bravery << " hp" << endl; getchar();
					}
					else if (die >= savageStrength / strength)
					{
						cout << "You charge forward against your enemy, without even thinking about getting your armor. (Smart move, champ)" << endl; getchar();
						cout << "You strike your enemies with great power, dealing " << strength << " damage!" << endl; getchar();
					}
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

	

	return 0;
	
}
