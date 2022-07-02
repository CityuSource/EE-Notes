#ifndef MYcache_H
#define MYcache_H
// Cache size
#define SIZE 8

template <class Type>
class cache
{
private:
    Type *arr; // array to store cache elements
    int qsize, front, back, count;

public:
    cache()
    {
        arr = new Type[SIZE];
        qsize = SIZE;
        front = 0;
        back = -1;
        count = 0;
    }

    cache(int size)
    {
        arr = new Type[size];
        qsize = size;
        front = 0;
        back = -1;
        count = 0;
    }

    ~cache()
    {
        delete[] arr;
    }

    Type &top()
    {
        return arr[front];
    }

    void pop()
    {
        // check underflow
        if (!empty())
        {
            front = (front + 1) % qsize;
            count--;
        }
    }

    void push(Type x)
    {
        // check overflow
        if (!full())
        {
            back = (back + 1) % qsize;
            arr[back] = x;
            count++;
        }
    }

    int size()
    {
        return count;
    }

    bool empty()
    {
        return count == 0;
    }

    bool full()
    {
        return count == qsize;
    }
};
#endif
// int main()
// {
//     cache<int> q(5);
//     q.insert(1);
//     q.insert(2);

//     cout << "The front element is " << q.top() << endl; // should give out 1

//     q.pop();
//     q.insert(4);
//     q.insert(5);

//     cout << "The cache size is " << q.size() << endl; // should give out 3

//     while (!q.empty())
//         q.pop();

//     cout << "Finish" << endl; // This will print out if it pops everything properly
//     return 0;
// }