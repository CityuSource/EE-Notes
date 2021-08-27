// file: queue.h
#ifndef QUEUE_H
#define QUEUE_H
#include "queueADT.h"
#include <iostream>

using namespace std;

template<class Type>
class queue: public queueADT<Type> {
	private:
		int maxSize;
		int queueFront, queueRear;
		Type *list;

		void copyQueue(const queue<Type>& other);

	public:
		//the function body is placed in-line for easy reading
		queue(int size=100) {

			maxSize = size;
			queueFront = queueRear = 0;
			list = new Type[maxSize];
		}

		queue(const queue<Type>& other) {
			maxSize = 0;
			list = NULL;
			copyQueue(other);
		}

		~queue() {
			delete [] list;
		}

		void initialize()
		{
			queueFront = queueRear = 0;
		}

		bool empty() const {
			return queueFront == queueRear;
		}

		bool full() const
		{
			return (queueRear + 1) % maxSize == queueFront;
		}

		int size() const {
			return (maxSize + queueRear - queueFront) % maxSize;
		}

		const queue<Type>& operator=(const queue<Type>& other) {
			if (this != &other)
				copyQueue(other);
			return *this;
		}

		void push(const Type& item) {
			if (!full()) {
				queueRear = (queueRear + 1) % maxSize;	// wrap to circular index
				list[queueRear] = item;
			} else
				cerr << "Queue overflow" << endl;
		}

		Type& front() {
			//precondition: queue is not empty
			return list[(queueFront + 1) % maxSize];
		}

		void pop() {
			if (!empty())
				queueFront = (queueFront + 1) % maxSize;
			else
				cerr << "Queue underflow" << endl;
		}

};


//Implementation of copyQueue()
template<class Type>
void queue<Type>::copyQueue(const queue<Type>& other) {
	if (maxSize != other.maxSize) {
		if (list != NULL)
			delete [] list;
		maxSize = other.maxSize;
		list = new Type[maxSize];
	}

	queueFront = other.queueFront;
	queueRear = other.queueRear;

	int i = queueFront;
	while (i != queueRear) {
		i = (i + 1) % maxSize;
		list[i] = other.list[i];
	}
}

#endif


