#include <cstdlib>
#include <iostream>
#include <random>
#include <vector>

#include <pthread.h>
#include <semaphore.h>
#include <string.h>
#include <unistd.h>

#define BUFFSIZE 50
static const int ALEN = 50;

using std::cout;
using std::endl;
using std::string;
using std::vector;

char *str_generator(void);

template <class Type>
class Queue
{
private:
    Type *array;
    int capacity, front, rear, cursize;

public:
    Queue()
    {
        array = new Type[BUFFSIZE];
        capacity = BUFFSIZE;
        front = cursize = 0;
        rear = -1;
    }

    ~Queue()
    {
        delete[] array;
    }

    void deQueue()
    {
        if (!Empty())
        {
            front = (front + 1) % capacity;
            cursize--;
        }
    }

    void enQueue(const Type &item)
    {
        if (!Full())
        {
            rear = (rear + 1) % capacity;
            array[rear] = item;
            cursize++;
        }
    }

    Type &first()
    {
        return array[front];
    }

    int size()
    {
        return cursize;
    }

    bool Empty()
    {
        return (cursize == 0);
    }

    bool Full()
    {
        return (cursize == BUFFSIZE);
    }
};

int main()
{
    Queue<char> buffer;
    string temp = str_generator();

    for (auto subchar : temp)
        buffer.enQueue(subchar);

    while (!buffer.Empty())
    {
        if (buffer.size() % 10 == 0)
            cout << endl;

        cout << buffer.first() << " ";
        buffer.deQueue();
    }

    if (buffer.Empty())
    {
        cout << "\nThe queue is empty\n";
    }
    else
    {
        cout << "\nThe queue is not empty\n";
    }

    return 0;
}

char *str_generator(void)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(48, 122);
    char *art = new char[ALEN + 3];

    for (int i = 0; i < ALEN; ++i)
        art[i] = char(dis(gen));
    art[ALEN] = 0;
    return art;
}