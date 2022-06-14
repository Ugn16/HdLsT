#pragma once
#ifndef HeadList.h
//#define HeadList.h

#include <iostream>
using namespace std;

class HeadLST
{
	class Element
	{
	public:
		int data;
		Element* next;

		Element(int data = 0, Element* next = nullptr) : data{data}, next{next}
		{
			//cout << " Consructor Element: " << this << endl;
		}
		~Element() 
		{
			//cout << Destructor Elements: " << this << endl;
		}
	};

	Element* head;
	int size;

public:
	HeadLST() : head{nullptr}, size{0}
	{
		//cout << " Consructor HeadLST: " << this << endl;
	};

	
	int getSize();
	int& operator[](const int index);
	void DisplayAll();

	void push_back(int data);
	void push_front(int data);
	void insert(int data, int index);

	void clear();
	void removeAt(int index);
	void pop_front();
	void pop_back();

	

	~HeadLST() 
	{
		//cout << Destructor Elements: " << this << endl;
		clear();
	};

};


#endif 
