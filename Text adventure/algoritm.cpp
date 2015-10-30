#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//Algoritm för hur cowardice ökar.
	int cowardice = 5;
	int a = 2;
	while (cowardice < 110) {
		cowardice += a;
		a += pow(a,2);
		cout << cowardice << endl;
	}
	cout << endl << a;
	
}
