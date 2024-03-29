#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    printf("Original string: %s\n", input);

    reverseString(input);

    printf("Reversed string: %s\n", input);

    return 0;
}
