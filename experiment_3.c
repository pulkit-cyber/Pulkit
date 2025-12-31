Flowchart Description:

1. Start (Oval)

2. Input a, b (Parallelogram)

3. sum = a + b (Rectangle)

4. Print sum (Parallelogram)

5. Stop (Oval)

  #include <stdio.h>

int main() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    sum = a + b;
    
    printf("Sum: %d\n", sum);
    return 0;
}
