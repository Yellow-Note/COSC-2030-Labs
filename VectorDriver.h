/*
	VectorDriver.h
	10/15/2018
	Tim Bourque
	COSC 2030 Lab 4
*/
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
	for (ulong i = 0; i<data.size(); i++) {
		data.at(i) = i;
	}
}

// print our vector in a fancy way
void print(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0) << ", ";
		for (ulong i = 1; i<data.size(); i++) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end()) {
		sum += *iter;
		iter++;
	}

	return sum;
}

/*
	add_numbers function uses the random() to add 10 random numbers to the vector
*/
void add_numbers(vector<short> &data) {
	for (int i = 0; i < 10; i++) {
		data.push_back(rand());
	}
}

/*
	print_even funtion prints every value that is at an even position in the vector
*/
void print_even(const vector<short> &data) {
	cout << "<";
	for (ulong i = 1; i < data.size(); i++) {
		if (data.empty()) {
			cout << "empty";
		}
		else if (data.at(i) % 2 == 0) {
			cout << data.at(i) << endl;
		}
	}
	cout << ">" << endl;
}

/*
	is_present function iterates through the entire vector and returns true is the 
	value parameter is the same as the value in the vector
*/
bool is_present(const vector<short> &data, short value) {
	vector<short>::const_iterator iter1 = data.begin();
	while (iter1 != data.end()) {
		if (*iter1 == value) {
			return true;
		}
		iter1++;
	}
	return false;
}

/*
	vector_sort function uses the sort algorithem to sort the values in the vector 
	in ascending order
*/
void vector_sort(vector<short> &data) {
	std::sort(data.begin(), data.end());
}