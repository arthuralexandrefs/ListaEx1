#include <stdio.h>
#include <stdlib.h>

int main()
{
    //campeonato natacao separado por categorias,sendo 4

    int idade;

    printf("Digite sua idade \n");
    scanf("%d", &idade);

    printf("Voce tem %d anos e pertence a categoria ", idade);

    if (idade >= 60)
    {
        printf("Senior\n");
    }
    else if (idade >= 14 && idade <= 20)
    {
        printf("Juvenil\n");
    }
    else if (idade < 14)
    {
        printf("Infatil\n");
    }
    else
    {
        printf("Adulto\n");
    }

    return 0;
}
