//============================================================================
// Name        : 1.cpp
// Author      : 0-60FPS
// Version     :1.1
// Copyright   :
// Description : Description
//============================================================================

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

	int p1a;
	int p1b;
	int p1c;
	int p1d;

int parentCoords () {

	srand((int) time(0));

	p1a = rand() %20+1;
	p1b = rand() %20+1;
	p1c = rand() %20+1;
	p1d = rand() %20+1;

	cout << "\n";
	cout << "\n";
	cout << "Parent Coordinates:";
	cout << "\n";

	cout << "\n";
	cout << p1a;

	cout << "\n";
	cout << p1b;

	cout << "\n";
	cout << p1c;

	cout << "\n";
	cout << p1d;

}

int parentAlleles () {

	char a1a[10] = "aa";
	char a1b[10] = "AA";
	char a1c[10] = "Aa";

	cout << "\n";
	cout << "\n";
	cout << "Parent Alleles - Same order as above";
	cout << "\n";

	//p1a sec.

	if(p1a >= 7 || (p1a <= 5 && p1a >= 3)){
			cout << "\n";
			cout << a1a;
		}

	if(p1a == 1){
				cout << "\n";
				cout << a1b;
			}

	if(p1a == 2 || p1a == 6){
				cout << "\n";
				cout << a1c;
			}

	//p1b sec.

	if(p1b >= 7 || (p1b <= 5 && p1b >= 3)){
			cout << "\n";
			cout << a1a;
			}

	if(p1b == 1){
				cout << "\n";
				cout << a1b;
			}

	if(p1b == 2 || p1b == 6){
				cout << "\n";
				cout << a1c;
			}

	//p1c sec.

	if(p1c >= 7 || (p1c <= 5 && p1c >= 3)){
			cout << "\n";
			cout << a1a;
			}

	if(p1c == 1){
				cout << "\n";
				cout << a1b;
			}

	if(p1c == 2 || p1c == 6){
				cout << "\n";
				cout << a1c;
			}

	//p1d sec.

	if(p1d >= 7 || (p1d <= 5 && p1d >= 3)){
			cout << "\n";
			cout << a1a;
			}

	if(p1d == 1){
				cout << "\n";
				cout << a1b;
			}

	if(p1d == 2 || p1d == 6){
				cout << "\n";
				cout << a1c;
			}


}

int recalculate () {

	char type;
		while (true) {
			cout << "\n";
		    cout << "Recalculate? [y/n]" << endl;
		    cin >> type;

		    if (type == 'y') {

		    	cout << "\n";
		    	parentCoords();
		    	parentAlleles();
		    	cout << "\n";

		    }

		    if (type == 'n') {
		    	cout << "\n";
		    	cout << "Aborting...";
		    	cout << "\n";
		    	cout << "\n";
		    	cout << "\n //----------------";
		    	break;
		    }
		}

}

int main() {

	cout << "\n //----------------";

	parentCoords();
	parentAlleles();

	cout << "\n";

	recalculate ();



}








