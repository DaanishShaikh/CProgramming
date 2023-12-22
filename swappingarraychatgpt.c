#include <stdio.h>

int main() {
    int n;
    printf("How many elements should there be? ");
    scanf("%d", &n);
    
    int a[100]; // Assuming a maximum of 100 elements; change this value as needed
    
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int p = a[n - 1]; // Store the last element
    
    for (int i = n - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = p; // Move the last element to the beginning
    
    printf("Array after rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    
    return 0;
}
