#include "Que.h"
#include <iostream>
using namespace std;


Que::Que()
{
	head = nullptr;
	tail = nullptr;
}

void Que::enque(int data){
	entry element=new node;
	entry temp = head;
	element->data = data;
	element->ptr = nullptr;
	if (head == nullptr)
	{
		head = element;
	}
	else
	{
		element->ptr = head;
		head = element;
	}
}


void Que::deque(){
	int data = 0;
	entry temp = head;
	head = head->ptr;
	data = temp->data;
	if (temp!=nullptr)
		delete temp;
	cout << "DAta::" << data << endl;
}

void Que::list(){
	entry temp=head;
	while (temp != nullptr)
	{
		cout << temp->data << endl;
		temp = temp->ptr;
	}
//	cout << temp->data << endl;
}


bool Que::is_empty(){
	if (head == nullptr)
	{
		return 1;
	}
	return 0;
}

Que::~Que()
{
}
