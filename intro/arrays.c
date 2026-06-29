#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "../lib/customlib.h"

static const size_t ARR_SIZE = 3;

// Function pointers notation:
// return_type (*function_name)(type_param1, type_param2, ...)
void map(int *arr, size_t arr_size, int (*transform)(int)) {
    for (size_t i = 0; i < arr_size; i++) {
        arr[i] = transform(arr[i]);
    }
}

int multiply_by_two(int value) {
    return value * 2;
}

int main() {
    int arr[] = {1, 2, 3};

    printf("Before: ");
    print_array(arr, ARR_SIZE);
    map(arr, ARR_SIZE, multiply_by_two);
    printf("After:  ");
    print_array(arr, ARR_SIZE);

    return EXIT_SUCCESS;
}