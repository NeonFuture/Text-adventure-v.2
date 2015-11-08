

#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int // Olika integers som ger varden som kommer anvandas vid olika tillfallen.
		bravery, //Ju mer bravery du har, desto mer modigare val kan du ta i spelet. Du vinner genom mycket mod.
		cowardice, // Nar du har over 10 cowardice sa forlorar du. Hall den sa lag som mojligt.
		strength, // Combat relaterad stat. Har inte tank ut sa mycket med den an. Typ attack==str x 3? OP?
		input, // Behovs for att spelaren ska kunna skriva in siffror och ga vidare i spelet.
		savageStrength,
		savageHp,
		playerHp,
		savageDamage,
		die;

	    bravery = 1, 
		cowardice = 5, 
		strength = 3, // Borde testa hela spelet och se ifall statsen e obalanserade, sen andra.
		savageStrength = 6,
		savageDamage = 2,
		savageHp = 4,
		playerHp = 10;
		
		bool savedWaifu = false; //The exit value. If you have saved the waifu, then this loop will exit, and the game will stop.


	cout << "Press enter to advance, answer with the numbers given, try not to fuck up :)" << endl; // Lite tips till spelaren ;P
	cout << "" << endl; // Tom rad, bara for att det ska se snyggt ut
	cout << "          SAVING PRIVATE MEDIEVAL WAIFU AND CHRONICLES OF BETA KNIGHT" << endl; //Titel pa spelet
	cout << "You are a lazy knight during the medieval living in a small village." << endl; //Introduktion
	cout << "Your archnemesis Lobsterboy has stolen the local princess and it's up to you to save her." << endl; getchar(); // Mainplot revealed. getchar() betyder att linjen ar klar nar charen i paranteserna skrivs. Tomma paranteser blir Enter.
	cout << "" << endl; // Tom rad
	
	while(savedWaifu != true) {
	cout << "Cookuuuuh. Cookuuuuh. Cookuuuuuuuuh." << endl; getchar(); //Vacks av en tupp.
	cout << "You hear some sort of commotion outside." << endl; getchar(); // Spelaren kastas direkt in i handlingen.
	cout << "What do you do?" << endl; // Dags for forsta valet!

	bool repeat(true); // Bool ar en variabeltyp dar det bara finns tva alternativ, till skillnad fran int dar det kan finnas flera ratt och fel. Bool ar pa repeat, sa ifall du gar ett val som inte ar default sa kommer den inte repeata. Da blir bool repeat avslagen. Annars gar den tillbaka till valen man kan gora.
	do{ // Allt ligger i en do/while loop, sa att den checkar ifall bool repeat(true) fortfarande stammer. Ifall det stammer, ga man tillbaka til valen.
	    cout << "1. Get up and investigate" << endl; // Leder dig direkt till prinsessan och den storyn.
		cout << "2. Go back to sleep" << endl; // Ska fixa att man kan mote the prince of darkness.
		cout << "3. Go to the barracks and get buff" << endl; // Dott alternativ, kanske gor so att man far mer strength, kanske nagot hander i barrackerna???
		cin >> input; // Tar vad spelaren skriver in, laser av och gor det till input vardet.
		
		switch (input) // Laser av vad input har for varde och sen tar den och gor vad som star i caset som har samma siffra som du skrev.
		do{
		case 1: // Ifall man skrev 1
			cout << "You got up, not really feeling like saving the day." << endl; // Typical betamornings #Onlybetathings

			cout << "1. investigate through the window." << endl; // Dags for det andra valet. Borde andra formatting sa att valet liknar mer som det forsta.
			cout << "2. Go out and see what's up." << endl; 
			cin >> input; // Kollar vad spelaren skriver in.
			repeat = false; // Repeats varde blir falskt, sa caset kommer inte repeatas tills ett godkant svar ges.
			switch (input) // Kollar vad vardet pa input ar.
			do{
			case 1: // Ifall spelare tryckte 1.
				cout << "You look through the window not really seeing anything but you hear a woman" << endl; // Ingen getchar() har, eftersom att det ser fucked up ut i cmd. 
				cout << "screaming." << endl; getchar(); // Ny rad sa att det ser snyggt ut i cmd.
				cout << "What do you do?" << endl; // Valdags!

				cout << "1. go back to bed." << endl; //1 ger mer cowardice, 2 ger mer bravery. Andra Formatting
				cout << "2. Investigate further." << endl;
				cin >> input; // Kollar vad spelaren har valt.
				repeat = false; // Ratt val, ingen repeat.
				switch (input) // Kollar in input har for varde.
				{
				case 1: // Ifall man skrev 1
					cout << "You quickly fall asleep and dream about your waifu, the fair princess of your" << endl; // Kallar en tjej du har en crush pa for waifu #Onlybetathings 
					cout << "town." << endl; getchar(); // Kan nog ta bort "your" och lagga in "town" sa slipper vi den har raden.
					cout << "You are wildly shaken and wake up instantly!" << endl; getchar(); // Introducing new character!
					cout << "Squire: Hello sir, it's me, your brother and squire." << endl; getchar(); // A wild squire appears!
					cout << "Come quick! Our local princess has been kidnapped!" << endl; getchar(); // Ohshit.jpg
					cout << "You must save her!" << endl; getchar(); // Time To be a hero!

					cout << "1. Quiet squire, I don't have to take orders from you!" << endl; // Prob gor den har till 2 rader, way to long.
					cout << "2. Ooh no! Not my waifu! ugh, I mean, not our fair princess! get my lance squire and let us ride out!" << endl;
					cin >> input; // Kollar vad spelaren har valt.
					repeat = false; // Ratt val, ingen repeat.
					switch (input) // Kollar vad input har for varde.
					{
					case 1: // Ifall man skrev 1
						cout << "Squire: Bu-u-u-ut sir this could be an oppurtunity to finally show the princess your" << endl; // Plot thickens...
						cout << "gratitude. She might even give you a kiss, I mean, you have never even kissed a fair maiden." << endl; getchar(); // Sen tar det slut, gotta work here.
					}
				case 2:  // Ifall man skrev 2
					repeat = false; // Ratt val, ingen repeat.
					break; // For att ett case ska stangas/avslutas sa maste man skriva break; i slutet. Det har ar braken far valet man gjorde ifall man utforskade vidare.
				}
			case 2: // Ifall man skrev 2
				cout << "You see the fair princess outside, but a gang of ruffians is attacking her!" << endl; getchar(); // Time to be a hero!
				cout << "Princess: Help! Help! I'm being attacked by these savages!" << endl; getchar(); // Good thing a hero is here to save you ᕦ( ͡° ͜ʖ ͡°)ᕤ
				cout << "Savage 1: Quiet you! If you shout like that, someone might come and save you." << endl; getchar(); // You know it ;)
				cout << "Savage 2: Not like that's gonna happen!" << endl; getchar(); // Just you wait...
				cout << "Savages: HAHAHAHAHA!" << endl; getchar(); // Savage af
				cout << "Savage 3: Hey, Who's that?" << endl; getchar(); // Ohshit.png
				cout << "You feel everyones eyes on you. Even the princess looks directly at you" << endl; getchar(); // Det har valet kommer hoja bravery eller cowardice rejalt.

				cout << "1. Go out and save her" << endl; // Bravery okar rejalt.
				cout << "2. Hide and cover in fear." << endl; // Cowardice okar rejalt.
				cin >> input; // Kollar vad spelaren skrev.
				repeat = false; // Ratt val, ingen repeat.
				switch (input) // Kollar vad input har for varde.
				{
				case 1: // Ifall man skrev 1
					cout << "These are your stats: " << endl << "Bravery: " << bravery << "	" << "Strength: " << strength << "	" << "Cowardice: " << cowardice << "	" << "Your HP: " << playerHp << endl << endl; getchar();
					cout << "Sir Beta Knight's brother comes running up to him and exclaims: 'Hey, hey you! Fuckwad behind the bloody computer, heres how combat works, twat!' " << endl << endl; getchar();
					cout << "When combat is initiated, a six-sided die will be thrown. If the number that the die lands on is equal to or bigger than your opponent's  strength divided by your strength";
					cout << "your attack will be successful. You will then deal as much damage as you have strength. However, if you won't kill your target in one turn, the target will automatically ";
					cout << "gain a free hit. How much damage they will do to you depend on their strength and your bravery. Their damage = their strength / your bravery. " << endl;

					cout << "1. fight like a real knight/man/beta/. " << endl;
					cout << "2. Pussy out and run away in to the forest. " << endl;
					cin >> input;
					repeat = false; // Ratt val, ingen repeat
					switch (input)
					{
					case 1:
						repeat = false;
						cout << "'You wish to fight. Let's see what you got, toilet destroyer!' one of the ruffies shout. " << endl; getchar();
						while(savageHp > 0) {
						srand(time(NULL));
						die = rand() % 6 + 1;
							cout << "The die lands on: " << die << endl; getchar();
						if (die <= savageStrength / strength)
						{
							cout << "You charge forward against your enemy, without even thinking about getting your armor. (Smart move, champ)" << endl; getchar();
							cout << "Unfortunately, you fail miserably and trip and fall into a pool of mud, noob. (Also meaning that the ruffies get to attack you now. " << endl; getchar();
							cout << "The ruffies fling their old, dirty, nasty paws against you. Your brother screams of furry attacks. You loose " << savageStrength / bravery << " hp" << endl; getchar();
							playerHp = playerHp - savageStrength / bravery;
							if (playerHp < 0)
							{
								cout << "Your HP has dropped dangerously low, and therefore you have been transported away to rest and recover." << endl; getchar();
								playerHp = 10;
								break;
								getchar();
							}
						}
						else if (die >= savageStrength / strength)
						{
							cout << "You charge forward against your enemy, without even thinking about getting your armor. (Smart move, champ)" << endl; getchar();
							cout << "You strike your enemies with great power, dealing " << strength << " damage!" << endl; getchar();
							savageHp = savageHp - strength;
							if(savageHp < 0) {
								cout << " 'Congratulations, big brother/master!' - Your brother/squire yells to you from a distance" <<endl; getchar();
								cout << "These were your stats: " << endl << "Bravery: " << bravery << "	" << "Strength: " << strength << "	" << "Cowardice: " << cowardice << "	" << "Your HP: " << playerHp << endl << endl; getchar();
								strength += 1;
								bravery +=1;
								cowardice -=1;
								cout << "'Now, your stats will rise!!'" << endl; getchar();
								cout << "These are your current stats: " << endl << "Bravery: " << bravery << "	" << "Strength: " << strength << "	" << "Cowardice: " << cowardice << "	" << "Your HP: " << playerHp << endl << endl; getchar();
								getchar();
							}
							
						}
					}
					}
					break; // Breakar caset dar man gar ut och raddar eller inte.
				} while (repeat);
			default: 
				cout << "I don't understand unless you answer with a number" << endl; getchar();
				cout << "" << endl;
				break;

			} while (repeat);
			break; // Breakar ifall man valde 1 i forsta caset man gor i spelet.

		case 2: // Ifall man tryckte 2
			cout << "You quickly fall asleep and dream about your waifu, the fair princess of" << endl; // Valdigt tomt har, borde jobba vidare pa storyn har nere
			cout << "the town." << endl; getchar(); // Sa att det ser snyggare ut i cmd.
			repeat = false; // Ratt val, ingen repeat
			break; // Breakar case 2 vid det forsta valet.
		case 3: // Ifall man tryckte 3
			cout << "You're too beta to go through with it, you start crying instead" << endl; getchar(); // Bara ett tillfalligt svar, borde lagga till nagot mer har.
			repeat = false;
			break; // Breakar case 3 vid det forsta valet.
		default: // Ifall man tycker nagot annat an 1, 2 eller 3. Kan aven vara 2 tecken, da blir det fortfarande default.
			cout << "I don't understand unless you answer with a number" << endl; getchar(); // Default meddelandet ifall man inte skriver 1,2 eller 3 nar man ska.
			cout << "" << endl; // Tom rad, sa att de ska se snyggt ut.
            break; // Breakar forsta caset man gor i spelet. Man kommer behover valja om eftersom att repeat fortfarande ar true.
		} while (repeat);

	} while (repeat); // Allt kors i en do/while loop, som gor att bool repeat=true funkar. Kanske (troligtvis) sa maste alla cases laggas i do/while loppar sa att repeat kommer att funka.

}

	return 0; // Har nanting att gara med att man skriver int main i barjan, hajar inte riktigt :/
}
