#include <iostream>
using namespace std;

int addition (int a, int b) {
	return (a+b);
}

int subtraction (int a, int b) {
	return (a-b);
}

int doSomething (int x, int y, int (*callback)(int,int)) {
	int g;
	g = (*callback)(x,y);
	return g;
}

int main () {
	int m,n;
	int (*minus)(int,int) = subtraction;

	m = doSomething (7, 5, addition);
	n = doSomething (20, m, minus);
	cout << n;
	return 0;
}
