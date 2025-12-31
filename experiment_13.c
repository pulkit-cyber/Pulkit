#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; ++i) {
        if (i == 3) {
            continue; // Skips printing 3
        }
        if (i == 7) {
            break; // Stops loop when i reaches 7
        }
        printf("%d ", i);
    }
    // Output: 1 2 4 5 6
    printf("\n");
    return 0;
}
