// chap4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

 

#include <iostream>
#include<typeinfo>
#include<string>
using namespace std;

/* Standar-Library Overview*/

//Run-time language
class Parent
{
public:
	virtual void funct() {}
};

class Child:public Parent {};

void sample1()
{
	cout << "Run-time language support sample using run time type information(RTTI)"<<endl;

	Child* child = new Child;
	Parent* parent = child;

	cout << "The type name of child is: ";
	cout << typeid(child).name() << endl;

	cout << "The type name of *child is: ";
	cout << typeid(*child).name() << endl;

	cout << "The type name of Child is: ";
	cout << typeid(parent).name() << endl;

	cout << "The type name of *Child is: ";
	cout << typeid(*parent).name() << endl;
	delete child;
	 
}

//The C standar library
#include<assert.h>
#include<stdio.h>
void sample2()
{
	int dig = 11;
	cout <<"The C standar library: "<<endl;
	cout << "Assert C Stangard Library" << endl;
	//if dig < 10 cause crash
	assert(dig >= 10);
	cout << "Integer entered is " << dig << endl;

}


//Strings and I/O streams
void sample3() {
	cout << "-------------------------------------------------" << endl;
	cout << "-           Strings and I/O streams             -" << endl;
	cout << "-------------------------------------------------" << endl<<endl;


	cout << "--- String class samples of use" << endl<<endl;
	string first_name("Gelson");//using constructor
	string full_name = first_name + " Gomes Rodrigues";
	cout << "Full name: "<<full_name << endl;

	string user = "xxx";
	string password = "123";

	if (user == "xxx" && password == "123")
	{
		cout << "Access Allowed for user: "<< user << endl;
	}
	else
		cout << "Access Denied for user: " << user<<endl;


	string valueSt = "value1"; 
	cout << "Size of length is " << valueSt.length() << " or the size is " << valueSt.size() << endl;

	string elements = "Gelson";
	int i = 0;
	cout << "\nPrint each element with array index[i]: ";
	for ( i = 0; i < elements.length(); i++)
	{
		cout << elements[i];
	}

	cout << "\nPrint each element with iterator: ";
	string::iterator iter;
	for (iter = elements.begin(); iter != elements.end(); iter++)
	{
		cout << *iter;
	}



}

int main()
{
	
	//sample1();
	//sample2();
	sample3();
	getchar();
    return 0;
}



