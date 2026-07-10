#include <stdio.h>
#include <stdlib.h>

size_t my_strlen(char *string) {
	char *p = string;
	while (*p != '\0') p++;
	return p - string;	
}

void reverse_string(char *string) {
	size_t length = my_strlen(string);
	if (length == 0) return;
	
	size_t left = 0;
	size_t right = length - 1;
	for (size_t i = 0; i < length/2; i++) {
		char temp = string[left];
		string[left] = string[right];
		string[right] = temp;
		left++;
		right--;
	}
}

int main() {
	char string[] = "Diego";
	printf("Before: %s\n", string);
	reverse_string(string);
	printf("After: %s\n", string);
		
	return EXIT_SUCCESS;
}

