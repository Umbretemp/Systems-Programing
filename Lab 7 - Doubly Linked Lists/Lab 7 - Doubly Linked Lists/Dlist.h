#pragma once

#include <iostream>
#define TH template<typename Type>

template<typename Type = int>
class DList
{
private:

	struct node
	{
		node* next, * prev;
		Type data;

		node(Type& _data, node* _prev) : data(_data), prev(_prev), next(nullptr) {}
	};

	int count;
	node* first, * last;

public:
	DList() { first = last = nullptr; count = 0; }
	~DList();

	int GetCount() { return count; }

	void push_back(Type _data);

	Type& operator[](int _index);
	const Type& operator[](int _index) const;

	void Clear();

};



TH
void DList<Type>::push_back(Type _data)
{
	node* n = new node(_data, last);

	if (last)
		last->next = n;
	else
		first = n;

	last = n;

	++count;
}

template<typename Type>
DList<Type>::~DList()
{
	Clear();
}

template<typename Type>
Type& DList<Type>::operator[](int _index)
{
	node* temp = first;

	int i = 0;
	for (; i < _index; ++i)
		temp = temp->next;

	return temp->data;
}

template<typename Type>
const Type& DList<Type>::operator[](int _index) const
{
	node* temp = first;

	int i = 0;
	for (; i < _index; ++i)
		temp = temp->next;

	return temp->data;
}

template<typename Type>
void DList<Type>::Clear()
{
	node* temp = first;
	while (temp)
	{
		node* next = temp->next;
		delete temp;
		temp = next;
	}

	first = last = nullptr;
	count = 0;
}