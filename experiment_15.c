#include <stdio.h>

int main() {
    int arr[10], i, n, search, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("%d found at location %d.\n", search, i+1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("%d not present in the array.\n", search);
    }

    return 0;
}
