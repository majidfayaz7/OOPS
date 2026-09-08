
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Zero\n");
    } else {
      
        if (n > 0) {
          
            printf("Positive %s\n", (n % 2 == 0) ? "Even" : "Odd");
        } else {
            printf("Negative %s\n", (n % 2 == 0) ? "Even" : "Odd");
        }
    }

    return 0;
}