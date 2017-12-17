#pragma once
class Que
{
	typedef struct node{
		int data;
		node *ptr;
	}* entry;
	entry head;
	entry tail;
public:
	Que();
	void enque(int);
	void deque();
	void list();
	bool is_empty();
	~Que();
};

