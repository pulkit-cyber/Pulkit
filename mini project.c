#include <stdio.h>

int main() {
    // Variable declaration (No arrays used, as per requirement)
    int rows, i, j;

    // Step 1 & 2: Take the number of rows as input from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\n--- Pattern Output ---\n");

    // Step 3: Use an outer loop to control the rows
    for (i = 1; i <= rows; i++) {
        
        // Step 4: Use an inner loop to control the columns
        // (Running from 1 up to the current row number 'i')
        for (j = 1; j <= i; j++) {
            
            // Step 5 & 6: Use loop counter to decide which number to print
            // Here we print 'j' to get patterns like 1, 1 2, 1 2 3...
            printf("%d ", j);
        }

        // Step 7: After each row, move to the next line
        printf("\n");
    }

    // Step 8, 9, 10: The loops repeat automatically until finished.
    // No extra storage was required.
    
    return 0;
}
