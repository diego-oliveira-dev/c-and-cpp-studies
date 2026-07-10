#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) { return a + b; }

int subtract(int a, int b) { return a - b; }

int main() {
	int x = 15, y = 5;
	int (*operation)(int, int);

	operation = add;
	printf("\nOperation: ADD | Result: %d\n", operation(x,y));
	
	operation = subtract;
	printf("Operation: SUBTRACT | Result: %d\n", operation(x,y));

	return EXIT_SUCCESS;
}
