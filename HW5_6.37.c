#include <stdio.h>

int recursiveMaximum(int array[], int size) {
    if (size == 1) {
        return array[0]; 
    }
 
    int maxOfRest = recursiveMaximum(array + 1, size - 1);

    return (array[0] > maxOfRest) ? array[0] : maxOfRest;
}

int main() {
    int array[] = {3, 5, 7, 2, 8, -1, 4, 10, 12, 0};
    int size = sizeof(array) / sizeof(array[0]);

    printf("陣列內容: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int max = recursiveMaximum(array, size);
    printf("陣列中的最大值為: %d\n", max);

    return 0;
}
