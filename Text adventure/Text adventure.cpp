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
    cout << "                        	SAVING PRIVATE MEDIEVAL WAIFU" << endl;
    cout << "You are a lazy knight during the medieval living in a small village. Your archnemesis Lobsterboy has stolen the local princess and it's up to you to save her." << endl; getchar();
    cout << "" << endl;
    cout << "Cookuuuuh. Cookuuuuh. Cookuuuuuuuuh." << endl; getchar();
    cout << "You hear some sort of commotion outside." << endl; getchar();
    cout << "What do you do?" << endl;
    cout << "(1. Get up and investigate, 2. Go back to sleep 3. Go to the barracks and get buff)" << endl;
    cin >> input;
    switch (input)
   	 {
   	 case 1:
   		 cout << "You got up, not really feeling like saving the day." << endl; getchar();
   		 cout << "(1. investigate through the window. 2. go out and see what's up.)" << endl;
   			 cin >> input;
   			 switch (input)
   			 {
   					 case 1:
   						 cout << "You look through the window not really seeing anything but you an hear a woman screaming." << endl; getchar();
   						 cout << "What do you do?" << endl;
   						 cout << "(1. go back to bed. 2. Investigate further.)" << endl;
   							 cin >> input;
   							 switch (input)
   							 {
   								 case 1:
   									 cout << "You quickly fall asleep and dream about your waifu, the fair princess of your town" << endl; getchar();
   									 cout << endl << "You are wildly shaken and wake up instantly!" << endl; getchar();
   									 cout << "Squire: Hello sir, it's me, your brother and squire, our local princess has been kidnapped!" << endl << "You must save her!" << endl; getchar();
   									 cout << "(1. Quiet squire, I don't have to take orders from you! 2. Ooh no! Not my waifu! ugh, I mean, not our fair princess! get my lance squire and let us ride out!)" << endl; getchar();
   										 cin >> input;
   										 switch (input)
   										 {
   											 case 1:
   												 cout << "Bu-u-u-ut sir this could be an oppurtunity to finally show the princess your gratitude. She might even give you a kiss, I mean, you have never even kissed a fair maiden." << endl; getchar();
   										 }
   							 }

   			 }
   		 break;
   	 case 2:
   		 cout << "You went back to sleep, feelsgoodman" << endl; getchar();
   		 break;
   	 case 3:
   		 cout << "You're too beta to go through with it, you start crying instead" << endl; getchar();
   		 break;
   	 default:
   		 cout << "I don't understand unless you answer with a number" << endl; getchar();
   		 break;
   	 }

    


    system("pause");

    return 0;
}

