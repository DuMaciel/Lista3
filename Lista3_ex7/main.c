#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i,n;
    float soma;

    for(i=0;i<3;i++){
    printf("Idade %d: ",i+1);
    scanf("%d",&n);
    soma=soma+n;
    }

    printf("A media: %.2f",soma/i);
    return 0;
}
