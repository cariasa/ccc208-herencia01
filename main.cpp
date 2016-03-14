#include "person.h"
#include "student.h"
#include <iostream>
using std::cout;
using std::endl;


void unafuncion(const Person&);

int main(int argc, char* argv[]){
	Person a("Daniela", "0101-1986-12571");
	Student b("Ana", "0201-1990-00041", 26, "11211066");
	cout << a.toString() << endl;
	cout << b.toString() << endl;
	b.addGrade(95,3);
	b.addGrade(80,4);
	b.addGrade(100,1);
	unafuncion(a);
	unafuncion(b);


	return 0;
}
void unafuncion(const Person& p){
	cout << "desde una funcion == " << p.toString() << endl;
}
