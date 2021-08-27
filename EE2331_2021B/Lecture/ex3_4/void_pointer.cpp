#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

void swap (void *vp1, void *vp2, const int size) {
	char *buffer = (char *)malloc(sizeof(char)*size);
	memcpy(buffer, vp1, size);
	memcpy(vp1, vp2, size);
	memcpy(vp2, buffer, size);
	free(buffer);
}

int main() {
	int a = 10, b = 20;
	cout << a << " , " << b << endl;
	swap(&a, &b, sizeof(int));
	cout << a << " , " << b << endl;
	cout << endl;

	char *puppy = strdup("Wow");
	char *kitty = strdup("Mew");

	cout << puppy << " , " << kitty << endl;
	swap(&puppy, &kitty, sizeof(char **));
	cout << puppy << " , " << kitty << endl;
}
