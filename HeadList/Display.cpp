#include "HeadList.h"

int HeadLST::getSize()
{
	return size;
}


int& HeadLST::operator[](const int index)
{
	int counter = 0;
	Element* current = head;
	while (current != nullptr)
	{
		if (counter == index) return current->data;
		current = current->next;
		counter++;
	}
}

void HeadLST::DisplayAll()
{
	/*for (int i = 0; i < getSize(); i++)
	{
		cout << " " << this->operator[](i);
	}*/
	
	Element* current = head;
	while (current != nullptr)
	{
		cout << " " << current->data;
		current = current->next;
	}
}


