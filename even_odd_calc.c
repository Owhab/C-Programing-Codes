#include <stdio.h>
#include <conio.h>

int main()
{

    int i, n, even[101];

    for (i = 0; i < 101; i++) {
        even[i] = 0;
    }
    for (i = 0; i < 101; i += 2) {
        even[i] = 1;
    }
    printf("Please Enter the value of n: ");
    scanf("%d", &n);

    if (even[n]) {
        printf("%d is even number. \n", n);
    } else {
        printf("%d is a odd number. \n", n);
    }


    getch();
    return 0;
}
