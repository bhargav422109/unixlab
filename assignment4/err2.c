#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

   

    num=121;
    originalNum = num;

    // Check if the number is a 3-digit number
    if (num < 100 || num > 999) {
        printf("Invalid input. Please enter a three-digit number.\n");

        // Introduce a segmentation fault
        int *ptr = NULL;
        *ptr = 10; // Trying to assign a value to a NULL pointer, causing a segmentation fault

        return 0;
    }

    // Introduce a segmentation fault
    int array[5];
    array[10] = 5; // Accessing an index out of bounds, causing a segmentation fault

    // Calculate the result
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;

        // Introduce a segmentation fault
        int *ptr = &result;
        ptr = ptr + 1000; // Accessing memory beyond the allocated space, causing a segmentation fault

        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

