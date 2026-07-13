#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void runningSum(int *nums, size_t nums_size) {
    // Time Complexity -> O(n)
    int sum = 0;
    for (size_t i = 0; i < nums_size; i++) {
        sum += nums[i];
        nums[i] = sum;
    }
}

int compare_ints(const void *a, const void *b) {
	const int *x = a;
	const int *y = b;
	if (*x < *y) return -1;
	if (*x > *y) return 1;
	return 0;
}

bool contains_duplicate(int *nums, size_t nums_size) {
	if (nums_size == 1) return false;
	size_t left = 0;
	size_t right = 1;
	qsort(nums, nums_size, sizeof(int), compare_ints);
	while (right < nums_size) {
		if (nums[left] == nums[right]) return true;
		left++;
		right++;
	}
	return false;
}

bool is_palindrome(char *str) {
	size_t left = 0;
	size_t right = strlen(str) - 1;

	while (left < right) {
		if (str[left] != str[right]) return false;
		left++;
		right--;
	}

	return true;
}

int main() {
	char *word = "racecar";
	printf(">> Testing word: %s\n", word);

	bool result = is_palindrome(word);
	printf(">> Result: %s\n", result ? "true" : "false"); 

    	return EXIT_SUCCESS;
}
