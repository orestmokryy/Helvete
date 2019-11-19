#include <iostream>
#include <ctime>
#include "vector.h"

#define size 5

using namespace std;



int main() {

	srand(time(NULL));

	Vector vector[size];

	scanVector(vector);
	cout << endl << endl << endl;
	cout << "Old matrix:" << endl;
	outputVector(vector);

	sortVector(vector);

	cout << "New matrix:" << endl;
	outputVector(vector);

	cout << endl << endl;
	cout << "Product:" << endl;

	calcVector(vector);


	return 0;
}
