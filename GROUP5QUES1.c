#include <stdio.h>

void printFibonacci(int n) {
    int firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        printf("%d, ", firstTerm);
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
}

int main() {
    int terms;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);

    printFibonacci(terms);

    return 0;
}
