#include <stdio.h>

int main()
{
    int a;
    printf("Enter weight of Captain: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * (a - i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
