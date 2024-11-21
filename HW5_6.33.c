#include <stdio.h>

int binarySearch(int array[], int start, int end, int key) {
    if (start > end) {
        return -1; 
    }

    int mid = start + (end - start) / 2;

    if (array[mid] == key) {
        return mid; 
    } else if (array[mid] > key) {
        return binarySearch(array, start, mid - 1, key);
    } else {
        return binarySearch(array, mid + 1, end, key);
    }
}


void displayArray(const int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(array) / sizeof(array[0]);
    int key;

    printf("陣列內容: ");
    displayArray(array, size);

    printf("請輸入要搜尋的數字: ");
    scanf("%d", &key);

    int result = binarySearch(array, 0, size - 1, key);

    if (result != -1) {
        printf("數字 %d 在索引 %d 找到。\n", key, result);
    } else {
        printf("數字 %d 不在陣列中。\n", key);
    }

    return 0;
}
