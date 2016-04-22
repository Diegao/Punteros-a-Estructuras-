//============================================================================
// Name        : Punteros-Estructuras.cpp
// Author      : Diego Ramirez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Estudiante{
	string nombre ;
	int edad;
	int carnet;
};

int main() {

	Estudiante est1;

    est1.nombre= "Diego";
	est1.edad=12;
	est1.carnet=100;

	int  *o, *i;
	string *p;
	Estudiante *t;

	t= &est1;
	p= &est1.nombre;
	o= &est1.edad;
	i= &est1.carnet;

	cout<<"La direccion de la estructura Estudiante 1 es: "<< t <<endl;
	cout<<"La direccion del nombre de estudiante 1 es: "<< p <<endl;
	cout<<"La direccion de la edad de estudiante 1 es: "<< o <<endl;
	cout<<"La direccion del carnet de estudiante 1  es: "<< i <<endl;

}
