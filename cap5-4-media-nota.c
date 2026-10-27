#include<stdio.h>

int main()
{  

char nome[50];
    float nota1, nota2, media;
      
    printf("Qual seu nome? ");
    scanf("%s", nome);
    printf("Digite a primeira nota? ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota? ");
    scanf("%f", &nota2); 

    media = (nota1 + nota2) / 2;
    
    printf("A média de %s é %.2f\n", nome, media);

    return 0;
}