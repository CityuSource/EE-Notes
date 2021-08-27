// heap.h

/*
A heap can be represented efficiently using an array. 
In this part of the notes, only the insert and delete functions are shown.
*/

template <class Type>
class heap
{
private:
	Type *store;
	int maxSize;
	int size;

public:
	heap(int capacity = 100)
	{
		maxSize = capacity;
		size = 0;
		store = new Type[maxSize];
	}

	void insert(Type x)
	{
		if (size >= maxSize)
		{
			cout << "Heap overflow\n"
				 << endl;
			exit(0);
		}

		//i refers to the vacant node under consideration
		int i = size;
		size++;

		while (i > 0 && comparePriority(x, store[(i - 1) / 2]) > 0)
		{
			// priority of x is higher than priority of
			// store[(i-1)/2]

			//move element from parent node to node i
			store[i] = store[(i - 1) / 2];
			i = (i - 1) / 2; //update i to point to its parent
		}
		store[i] = x;
	}

	Type delete ()
	{
		if (size == 0)
		{
			cout << "Heap underflow\n"
				 << endl;
			exit(0);
		}

		Type x = store[0];		  //element to be removed
		Type k = store[size - 1]; //element to be relocated
		size--;

		bool done = false;
		int i = 0; // i refers to the empty node
		int j = 1; // j is the left child of i

		while (j < size && !done)
		{
			if (j < size - 1)
				if (comparePriority(store[j], store[j + 1]) < 0)
					j++;

			if (comparePriority(k, store[j]) >= 0)
				done = true;
			else
			{
				//move larger child to parent node
				store[i] = store[j];
				i = j;
				j = 2 * i + 1;
			}
		}
		store[i] = k;
		return x;
	}

	// other functions of the class
};

template <class Type>
int comparePriority(const Type &a, const Type &b)
{
	// if a < b : return -1
	// if a == b: return 0
	// if a > b : return 1
}
