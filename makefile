main: main.o person.o student.o
	g++ main.o person.o student.o -o herencia 
	
main.o:	main.cpp person.h student.h
	g++ -c main.cpp 

person.o:	person.cpp person.h
	g++ -c person.cpp 

student.o:	student.cpp student.h person.h
	g++ -c student.cpp
