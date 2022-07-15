#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{setlocale(LC_ALL, "Portuguese");
    printf("Exercicío 06\n\n");
    int refeicao=12;//valor da refei
    float peso;//peso do prato montado pelo cliente
    float prato=0.2;//valor descontado do peso do prato
    printf(" - Qual o valor em kg do seu prato: ");
    scanf("%f", &peso);
    printf("\n O valor a ser pago pelo prato é: %.2f reais\n", (peso*refeicao)-prato);

}
