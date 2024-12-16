#include <stdio.h>

int main() {
    int n, sum = 0, i = 0;

    printf("Enter a positive number: ");
    scanf("%d\n", &n); 

    while (i <= n); { 
        sum += i;
        
    }

    printf("The sum of numbers from 1 to %d is: %d\n", n, sum); // Correct output is never reached

    return 0;
}
