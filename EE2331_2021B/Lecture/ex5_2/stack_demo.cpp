#include <iostream>
#include <stack> //class stack in the C++ STL

using std::cout;
using std::stack;

int main()
{
	stack<int> s;

	for (int i = 0; i <= 50; i++)
		s.push(i);

	for (; !s.empty(); s.pop())
		cout << s.top() << " ";
}
