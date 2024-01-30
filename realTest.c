#include <stdio.h>
#include <string.h>

int main() {
     char a[100];
    int count = 0;
    printf("Enter the string here: ");
    gets(a);

    for (int i = 0; i < strlen(a) - 1; i++) {
        for (int j = i + 1; j < strlen(a) - 1; j++) {
            if (a[i] == a[j] && a[i] != ' ') {
                count++;
                break;
            }
        }
    }

    if (count == 0) {
        printf("It is a unique string\n");
    } else {
        printf("It is not a unique string\n");
    }

    return 0;
}
