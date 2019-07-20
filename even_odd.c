#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("Please Enter the value of n: ");
    scanf("%d", &n);

    if (n % 2 == 0){
        printf("%d is even number. \n", n);

    } else {
        printf(" %d is a odd number. \n", n);
    }
    getch();
    return 0;
}
