#include <stdio.h>
#include <stdlib.h>

int main() {
	int capacity = 2, count = 0;
	int *arr = malloc(capacity * sizeof(int));

	printf("\nInitial capacity: %d\n", capacity);

	for (size_t i = 0; i < 5; i++) {
		if (count == capacity - 1) {
			capacity *= 2;
			int *temp = realloc(arr, capacity * sizeof(int));
			if (temp != NULL) arr = temp;
			printf("Capacity doubled to %d..\n", capacity);
		}	

		arr[i] = ((i + 1) * 10);
		count++;
	}

	printf("Final data: \n");
	for (size_t i = 0; i < count; i++) printf("arr[%ld] = %d\n", i, arr[i]);
	printf("\nFinal capacity: %d\n", capacity);

	free(arr);

	return EXIT_SUCCESS;
}
