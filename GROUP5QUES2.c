#include <stdio.h>

int func1(int a, int b, int c, int x, int y) {
    for (int k = 0; k <= a; ++k) {
        int remainingStones = a - k;
        int pile1 = b + k;
        int pile2 = c + remainingStones;

        if ((pile1 == x && pile2 == y) || (pile1 == y && pile2 == x)) {
            return 1;  
        }
    }

    for (int k = 0; k <= b; ++k) {
        int remainingStones = b - k;
        int pile1 = a + k;
        int pile2 = c + remainingStones;

        if ((pile1 == x && pile2 == y) || (pile1 == y && pile2 == x)) {
            return 1;  
        }
    }

    for (int k = 0; k <= c; ++k) {
        int remainingStones = c - k;
        int pile1 = a + k;
        int pile2 = b + remainingStones;

        if ((pile1 == x && pile2 == y) || (pile1 == y && pile2 == x)) {
            return 1;  
        }
    }

    return 0;  
}

int main() {
    int t; 
    printf("Enter the number of test cases: ");
    scanf("%d", &t);

    for (int i = 0; i < t; ++i) {
        int a, b, c, x, y;
        scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);

        printf("%s\n", func1(a, b, c, x, y) ? "Yes" : "No");
        printf("\n\n");
    }

    return 0;
}
