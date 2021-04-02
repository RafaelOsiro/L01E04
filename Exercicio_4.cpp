/* Exercicio_4.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
Construa um algoritmo que a partir da leitura de dois números forneça o resto e o quociente da divisão do primeiro pelo segundo número.
– Lembre - se das expressões aritméticas :
1. mod → m mod i : resto da divisão de m por i
2. (\) → m \ i : quociente da divisão de m por i
Exemplo : 5 mod 2 é 1
5 \ 2 é 2 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    //Variable Declaration
    float divisor, dividendo, quociente, resto;
    char *c;
    bool validation;

    //Code
    printf("Programa para fazer a divisao e o resto\n");

    printf("Digite o dividendo: ");
    scanf("%f", &dividendo);

    validation = false;

    while (validation != true)
    {
        printf("Digite o divisor: ");
        scanf("%f", &divisor);

        if (divisor == 0)
        {
            printf("Erro\n");
            printf("Nao e possivel dividir por 0\n");
            validation = false;
        }
        else
        {
            validation = true;
        }
    }
    
    quociente = dividendo / divisor;
    (int)resto = (int) dividendo % (int) divisor;

    printf("\n\nO resultado da divisao e: %.3f\n", quociente);
    printf("O resto da divisao e: %d\n\n", resto);


    scanf("%c", &c);
    return 0;
}
