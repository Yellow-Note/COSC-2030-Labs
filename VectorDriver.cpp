/*
	VectorDriver.cpp
	10/15/2018
	Tim Bourque
	COSC 2030 Lab 4
*/
#include "stdafx.h"
#include "VectorDriver.h"


int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;

	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl << endl;

	cout << "mannually made vector:" << endl;
	vector<short> manual_vector(5);
	fill_vector(manual_vector);
	print(manual_vector);
	cout << "sorted vector" << endl;
	vector_sort(manual_vector);
	print(manual_vector);
	
	system("pause");
	return 0;
}