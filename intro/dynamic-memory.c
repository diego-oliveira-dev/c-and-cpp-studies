#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <string.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void get_max(int *arr, size_t arr_size) {
    printf("Searching array: ");
    int max_value = INT_MIN;
    size_t index = 0;
    for (size_t i = 0; i < arr_size; i++) {
        printf("%d, ", arr[i]);
        if (i == arr_size - 1) {
            printf("%d\n", arr[i]);
        }
        if (arr[i] > max_value) {
            max_value = arr[i];
            index = i;
        }
    }
    printf("Max value: %d -> found at index: %ld\n", max_value, index);
}

int main() {
    // int x = 10;
    // int y = 20;
    // int *a = &x;
    // int *b = &y;
    // printf("x = %d, y = %d\n", *a, *b);
    // swap(a, b);
    // printf("x = %d, y = %d\n", *a, *b);

    // int n = 3;
    // int *arr = (int *) malloc(n * sizeof(int));
    // assert(arr != NULL);
    // printf("Array allocated at Heap Address: %p\n", arr);
    // for (size_t i = 0; i < n; i++)
    // {
    //     arr[i] = (i + 1) * 100;
    //     printf("Value at index %ld: %d\n", i, arr[i]);
    // }
    // free(arr);
    // printf("Memory successfully freed.\n");

    // int arr[] = {12, 45, 7, 99, 23};
    // size_t arr_size = sizeof(arr) / sizeof (arr[0]);
    // get_max(arr, arr_size);

    char *list[] = {"Watermelon", "Apple", "Banana"};
    for (size_t i = 0; i < 2; i++) {
        if (strlen(list[i]) > strlen(list[i + 1])) {
            char *temp = list[i];
            list[i] = list[i + 1];
            list[i + 1] = temp;
        }
    }
    printf("Shortest: %s\n", list[0]);
    printf("Longest: %s\n", list[2]);

    return EXIT_SUCCESS;
}
