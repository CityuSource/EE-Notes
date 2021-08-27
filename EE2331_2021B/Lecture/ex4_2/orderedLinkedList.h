/*
In the above implementation of the linked list, the elements in the list are arranged in chronological order (order by the insertion time).
If we want the elements to be ordered by the data values, we can implement an ordered list using inheritance.
*/

#ifndef ORDERED_LINKED_LIST_H
#define ORDERED_LINKED_LIST_H

#include "linkedListType.h"

using namespace std;

template <class Type>
class orderedLinkedList : public linkedListType<Type>
{
public:
	bool search(const Type &x) const;
	void insert(const Type &x);
};

template <class Type>
bool orderedLinkedList<Type>::search(const Type &x) const
{
	nodeType<Type> *p;

	p = first;
	while (p != NULL && p->info < x)
		p = p->link;

	return (p != NULL && p->info == x);
}

template <class Type>
void orderedLinkedList<Type>::insert(const Type &x)
{ //maintain the ordering of the elements in the list

	nodeType<Type> *p = new nodeType<Type>;
	p->info = x;
	p->link = NULL;

	if (first == NULL)
		first = last = p;
	else if (x <= first->info)
	{
		p->link = first; //insert at front
		first = p;
	}
	else //first != NULL && x > first->info
	{
		nodeType<Type> *prev = first;
		nodeType<Type> *cur = first->link;

		while (cur != NULL && x > cur->info)
		{
			prev = cur;
			cur = cur->link;
		}

		// insert node p after node prev
		p->link = prev->link;
		prev->link = p;

		if (prev == last)
			last = p;
	}
	count++;
}

#endif
