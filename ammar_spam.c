// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         for (int j = i; j > 0; j--) {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
  int rows, i, j, spaces;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  for (i = 1; i <= rows; i++) {
    // Print leading spaces for pyramid pattern
    for (spaces = rows - i; spaces > 0; spaces--) {
      printf(" ");
    }

    // Print numbers in descending order from i down to 1
    for (j = i; j > 0; j--) {
      printf("%d", j);
    }
    printf("\n");  // Move to the next line after each row
  }

  return 0;
}