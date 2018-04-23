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

//class dates {
//private:
//	int dd;
//	int mm;
//	int yy;
//public:
//void setDd(int date) {this->dd = date;}
//void setMm(int month) {this->mm = month;}
//void setYy(int year) {this->yy = year;}
//int getDd(){ return dd; }
//int getMm(){ return mm; }
//int getYy(){ return yy; }
//};
class Students {
private:
	string sname;
	string initials;
	int dd;
	int mm;
	int yy;
	
	/*string adress;
	string faculty;
	int course;*/
public:
	void setSname(string sname) { this->sname = sname; }
	void setInitials(string initials) { this->initials = initials; }
	void setDd(int date) { this->dd = date; }
	void setMm(int month) { this->mm = month; }
	void setYy(int year) { this->yy = year; }
	string getSname() { return sname; }
	string getInitials() { return initials; }
	int getDd() { return dd; }
	int getMm() { return mm; }
	int getYy() { return yy; }
};