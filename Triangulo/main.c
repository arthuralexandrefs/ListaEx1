#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Diga um lado do triangulo\n");
    scanf("%d", &a);
    printf("Diga o outro lado do triangulo\n");
    scanf("%d", &b);
    printf("Diga o terceiro lado do triangulo\n");
    scanf("%d", &c);

    printf("Seu triangulo eh: ");
    if (a == b && b == c && a == c)
    {
        printf("Equilatero");
    }
    else if (a == b || b == c)
    {
        printf("Isóceles");
    }
    else
    {
        printf("Escaleno");
    }

    return 0;
}
