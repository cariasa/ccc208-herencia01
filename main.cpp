#include "person.h"
#include "student.h"
#include <iostream>
using std::cout;
using std::endl;


void unafuncion(const Person&);

int main(int argc, char* argv[]){
	Person* array[3];
	array[0] = new Person("Isabel", "0801-1980-00012");
	array[1] = new Student("Mariana", "0801-1988-01012", 18, "11011112");
	array[2] = new Person("Pedro", "0801-1977-00112");

	for (int i=0; i<3; i++){
		if (dynamic_cast<Student*>(array[i]) != NULL){
			Student* student = dynamic_cast<Student*>(array[i]);
			cout << student->toString() << endl;
		}else
			cout << array[i]->toString() << endl;
	}

	for (int i=0; i<3; i++){
		delete array[i];
	}
	return 0;
}
void unafuncion(const Person& p){
	cout << "desde una funcion == " << p.toString() << endl;
}
