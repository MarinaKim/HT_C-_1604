#include<ctime>
#include<locale>
#include<iostream>
#include<fstream>
#include"Students.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int k;
	do {
		ifstream in;
		ofstream out;
		out.open("Students.txt");
		in.open("read.txt");
		int countStud = 5 + rand() % 10;
		string sname, initials;
		int dd, mm, yy;
		Students *stud;
		stud = new Students[14];

		int i=0;
		if (!in) {
			cerr << "file open error" << endl;}
		else{
			while (!in.eof()) {
				in >> sname >> initials >> dd >> mm >> yy;
				Students S(sname, initials, dd, mm, yy);
			}
		}
		//cout << "Enter tasks number:";
		//cin >> k;

		//switch (k) {
		//	//students
		//case 1: {
		//}break;
		//}
	} while (k > 0);
}