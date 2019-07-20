#include <stdio.h>
#include <conio.h>

int main()

{
    int i, n, result;
    printf("Please Enter The value of n: ");
    scanf("%d", &n);
    result = 0;
    for (i = 1; i <= n; i ++) {
        result = result + i;
    printf("The Result is: %d \n", result);

    }


    getch();
    return 0;
}
