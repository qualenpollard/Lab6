/*——————————————————————————————————————————————————————————————————————————————
 *File: Tests.cpp
 *Author: Qualen Pollard
 *Date: 11.6.17
 *Description: Implementation for the tests for the class LinkedListOfInts.
——————————————————————————————————————————————————————————————————————————————*/
#include "Tests.h"

Tests::Tests(){
	m_list = new LinkedListOfInts();
}

Tests::~Tests(){
	delete m_list;
}

void Tests::runTests(){

	std::cout << std::endl;
	std::cout << "Test 1...checking if list is empty: ";
	if(isEmpty_Test()){
		std::cout << "PASSED" << std::endl;
	}else{
		std::cout << "FAILED" << std::endl;
	}

	std::cout <<  "----------------------------------------------------------------";
	std::cout << std::endl << std::endl;

	std::cout << "Test 2...checking if size is correct: ";
	if(size_Test()){
		std::cout << "PASSED" << std::endl;
	}else{
		std::cout << "FAILED" << std::endl;
	}

	std::cout <<  "----------------------------------------------------------------";
	std::cout << std::endl << std::endl;

	std::cout << "Test 3...checking if search is correct: ";
	if(search_Test()){
		std::cout << "PASSED" << std::endl;
	}else{
		std::cout << "FAILED" << std::endl;
	}

	std::cout <<  "----------------------------------------------------------------";
	std::cout << std::endl << std::endl;

	std::cout << "Test 4...checking if addBack is correct: ";
	if(addBack_Test()){
		std::cout << "PASSED" << std::endl;
	}else{
		std::cout << "FAILED" << std::endl;
	}
	std::cout << std::endl << std::endl;

	std::vector<int> v1 = m_list->toVector();
	for(int i = 0; i < (int)v1.size(); i++){
		std::cout << v1.at(i) << ", ";
	}

	std::cout << std::endl;
	std::cout <<  "----------------------------------------------------------------";
	std::cout << std::endl << std::endl;

	std::cout << "Test 5...checking if addFront is correct by adding 10: ";
	if(addFront_Test()){
		std::cout << "PASSED" << std::endl;
	}else{
		std::cout << "FAILED" << std::endl;
	}
	std::cout << std::endl << std::endl;

	std::vector<int> v2 = m_list->toVector();
	for(int i = 0; i < (int)v2.size(); i++){
		std::cout << v2.at(i) << ", ";
	}

	std::cout << std::endl;
	std::cout <<  "----------------------------------------------------------------";
	std::cout << std::endl << std::endl;

	std::cout << "Test 6...checking if removeBack is correct by adding 50 then removing: ";
	if(removeBack_Test()){
		std::cout << "PASSED" << std::endl;
	}else{
		std::cout << "FAILED" << std::endl;
	}
	std::cout << std::endl << std::endl;

	std::vector<int> v3 = m_list->toVector();
	for(int i = 0; i < (int)v3.size(); i++){
		std::cout << v3.at(i) << ", ";
	}

	std::cout << std::endl;
	std::cout <<  "----------------------------------------------------------------";
	std::cout << std::endl << std::endl;

	std::cout << "Test 7...checking if removeFront is correct by adding 60 then removing: ";
	if(removeFront_Test()){
		std::cout << "PASSED" << std::endl;
	}else{
		std::cout << "FAILED" << std::endl;
	}
	std::cout << std::endl << std::endl;

	std::vector<int> v4 = m_list->toVector();
	for(int i = 0; i < (int)v4.size(); i++){
		std::cout << v4.at(i) << ", ";
	}
	std::cout << std::endl;
}

bool Tests::isEmpty_Test(){
	if((m_list->size() == 0)){
		return (1);
	}else{
		return (0);
	}
}

bool Tests::size_Test(){
	std::vector<int> v1 = m_list->toVector();
	m_list->addBack(1);

	if(((int)v1.size() + 1) == m_list->size()){
		return (1);
	}else{
		return (0);
	}
}

bool Tests::search_Test(){
	m_list->addBack(3);
	if(m_list->search(3)){
		return (1);
	}else{
		return (0);
	}
}

bool Tests::addBack_Test(){
	m_list->addBack(20);
	m_list->addBack(30);
	m_list->addBack(40);
	std::vector<int> v = m_list->toVector();
	if(v.at(0) == 1){
		return (1);
	}else{
		return (0);
	}
}

bool Tests::addFront_Test(){
	m_list->addFront(10);
	std::vector<int> v = m_list->toVector();

	if(v.at(0) == 10){
		return (1);
	}else{
		return (0);
	}
}

bool Tests::removeBack_Test(){
	m_list->addBack(50);
	std::vector<int> v1 = m_list->toVector();
	m_list->removeBack();
	std::vector<int> v2 = m_list->toVector();

	if((int)v1.size() != (int)v2.size()){
		if(!(m_list->search(50))){
			return (1);
		}else{
			return (0);
		}
	}else{
		return (0);
	}
}

bool Tests::removeFront_Test(){
	m_list->addFront(60);
	std::vector<int> v1 = m_list->toVector();
	m_list->removeFront();
	std::vector<int> v2 = m_list->toVector();

	if((int)v1.size() != (int)v2.size()){
		if(!(m_list->search(60))){
			return (1);
		}else{
			return (0);
		}
	}else{
		return (0);
	}
}
