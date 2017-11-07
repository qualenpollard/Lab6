/*——————————————————————————————————————————————————————————————————————————————
 *File: Makefile
 *Author: Qualen Pollard
 *Date: 11.6.17
 *Description: Header file for the tests for the class LinkedListOfInts.
——————————————————————————————————————————————————————————————————————————————*/
#ifndef TESTS_H
#define TESTS_H

#include "LinkedListOfInts.h"
#include <vector>
#include <iostream>

class Tests{
public:
	//Pre: None.
	//Post: Test Suite is created.
	Tests();

	//Pre: None.
	//Post: Deletes tests.
	~Tests();

	//Pre: None.
	//Post: Runs the tests for a LinkedListOfInts.
	void runTests();

	//Pre: Test list is created.
	//Post: Checks to see if a list is empty.
	//Return: True if test is empty, false otherwise.
	bool isEmpty_Test();

	//Pre: Test list is created.
	//Post: Checks to see if the size method works.
	//Return: True if size is correct, false otherwise.
	bool size_Test();

	//Pre: Test list is created.
	//Post: Checks to see if a value is in an list.
	//Return: True if the value is in the array, false otherwise.
	bool search_Test();

	//Pre: Test list is created.
	//Post: Checks to see if a value was added to the back of the list.
	//Return: True if the value was added to the back of the list, false otherwise.
	bool addBack_Test();

	//Pre: Test list is created.
	//Post: Checks to see if a value is in an list.
	//Return: True if the value was added to the front of the list, false otherwise.
	bool addFront_Test();

	//Pre: Test list is created and at least one value was added.
	//Post: Checks to see if a value is in an list.
	//Return: True if the value was removed from the back of the list, false otherwise.
	bool removeBack_Test();

	//Pre: Test list is created and at least one value was added.
	//Post: Checks to see if a value is in an list.
	//Return: True if the value was removed from the front of the list, false otherwise.
	bool removeFront_Test();

private:
	LinkedListOfInts* m_list;
};

#endif
