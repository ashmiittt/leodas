#include <stdio.h>
int main ()
{
    int a, i, b;
    b = 0;
    printf("Enter a integer: ");
    scanf("%d", &a);
        if (a == 0 || a == 1)
        b = 1;
        for (i = 2; i <= a/2; ++i)
        {
            if (a % i == 0)
            {
                b = 1;
                break;
            }
        }
        if (b == 0)
        printf("%d is a prime number.", a);
        else
        printf("%d is not a prime number.", a);
        return 0;

}