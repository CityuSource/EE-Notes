#include <iostream>
#include <queue> //class queue in the C++ STL

using std::cout;
using std::queue;

int main()
{
	queue<int> s;

	for (int i = 0; i <= 50; i++)
		s.push(i);

	for (; !s.empty(); s.pop())
		cout << s.front() << " ";
}
