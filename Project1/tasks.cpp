#include<ctime>
#include<locale>
#include<iostream>
#include"Students.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int k;
	do {
		
		cout << "Enter tasks number:";
		cin >> k;

		switch (k) {
			//students
		case 1: {
		}break;
		}
	} while (k > 0);
}