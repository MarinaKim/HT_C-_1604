/*Student: Фамилия, Имя, Отчество, Дата рождения, Адрес, Телефон, Факультет, Курс. 
Создать массив объектов. Вывести: 
a) список студентов заданного факультета; 
b) списки студентов для каждого факультета и курса; 
c) список студентов, родившихся после заданного года. 
*/
#pragma once

/*void generateName(char *name)
{
	strcpy(name, "person #");
	int a = 1 + rand() % 30;
	char t[3];
	itoa(a, t, 10);

	strcat(name, t);
}*/

class dates {
private:
	int dd;
	int mm;
	int yy;
public:
void setDd() {this->dd = 1 + rand() % 31;}
void setMm() {this->mm = 1 + rand() % 12;}
void setYy() {this->yy = 2001 + rand() % 15;}
int getDd(){ return dd; }
int getMm(){ return mm; }
int getYy(){ return yy; }
};
class Students {
private:
	string name;
	string surname;
	string fathername;
	dates date;
	string adress;
	string faculty;
	int course;

public:

};