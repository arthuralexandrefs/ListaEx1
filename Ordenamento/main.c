#include <stdio.h>

int main()
{

    int a, b, c;

    printf("digite o primeiro valor\n");
    scanf("%d", &a);

    printf("digite o segundo valor\n");
    scanf("%d", &b);

    printf("Digite o terceiro valor\n");
    scanf("%d", &c);

    if (a > b)
    {
        if (b > c)
        {
            printf("%d %d %d", a, b, c);
        }
        else if (c > a)
        {
            printf("%d %d %d", c, a, b);
        }
        else
        {
            printf("%d %d %d", a, c, b);
        }
    }
    else if (a > c)
    {
        if (c > b)
        {
            printf("%d %d %d", a, c, b);
        }
        else
        {
            printf("%d %d %d", b, a, c);
        }
    }
    else if (b > a)
    {
        if (a > c)
        {
            printf("%d %d %d", b, a, c);
        }
        else if (c < a)
        {
            printf("%d %d %d", b, c, a);
        }
        else
        {
            printf("%d %d %d", c, b, a);
        }
    }
    else if (b > c)
    {
        if (c > a)
        {
            printf("%d %d %d", b, c, a);
        }
    }
    else if (c > b)
    {
        if (c > a)
        {
            printf("%d %d %d", c, b, a);
        }
    }
    else
    {
        printf("%d %d %d", c, a, b);
    }
    printf("\n");
    return 0;
}