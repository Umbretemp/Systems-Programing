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
	void push_front(Type _data);
	void Erase(int _index);
	void Print();
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

template<typename Type>
void DList<Type>::push_front(Type _data)
{
	node* n = new node(_data, first);

	if (first)
		first->prev = n;
	else
		last = n;

	first = n;

	++count;
}

template<typename Type>
void DList<Type>::Erase(int _index)
{
	if (_index < 0 || _index >= count)
		return;

	node* temp = first;

	for (int i = 0; i < _index; ++i)
		temp = temp->next;

	if (temp == first)
	{
		first = temp->next;
		if (first)
			first->prev = nullptr;
	}
	else if (temp == last)
	{
		last = temp->prev;
		if (last)
			last->next = nullptr;
	}
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}

	delete temp;

	--count;
}

template<typename Type>
void DList<Type>::Print()
{
	node* temp = first;

	std::cout << "Forward: ";
	
	while (temp)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}

	std::cout << std::endl;

	temp = last;

	std::cout << "Backward: ";
	while (temp)
	{
		std::cout << temp->data << " ";
		temp = temp->prev;
	}

	std::cout << std::endl;
}
