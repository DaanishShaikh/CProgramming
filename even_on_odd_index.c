#include <stdio.h>

int countEvenAtOddIndexes(int arr[], int size) {
    int count = 0;
    for (int i = 1; i < size; i += 2) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int evenAtOddIndexes = countEvenAtOddIndexes(arr, size);
    printf("The number of even elements at odd indexes is: %d\n", evenAtOddIndexes);

    return 0;
}