#include <stdio.h>

int main() {
    int num;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num < 0) {
        goto negative;  // jump to label if condition is true
    }

    printf("You entered: %d\n", num);
    goto end;          // jump to end

negative:
    printf("Error: You entered a negative number!\n");

end:
    printf("Program finished.\n");

    return 0;
}
