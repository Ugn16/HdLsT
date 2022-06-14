#include "HeadList.h"

void HeadLST::pop_front()
{
	Element* NewEl = head->next;
	delete head;
	head = NewEl;
	size--;
}

void HeadLST::pop_back()
{
	Element* NewEl = head;
	for (int i = 0; i < getSize()-2; i++)
	{
		NewEl = NewEl->next;
	}
	
	NewEl->next = nullptr;
	
	size--;
}

void HeadLST::clear()
{
	while(size)
	{
		pop_front();
	}
}

void HeadLST::removeAt(int index)
{
	Element* current = head;
	for (int i = 0; i < index - 1; i++)
	{
		current = current->next;
	}
	
	current->next = current->next->next;
	
	
	size--;
	

}