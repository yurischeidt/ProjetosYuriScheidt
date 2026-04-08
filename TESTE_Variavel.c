#include <stdio.h> 

int main(){

    int idade;
    float altura;
    char opcao;
    char nome[50];
 
    /*
    printf("A Idade: %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é: %c\n", opcao);
    */

    printf("Digite a sua idade ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura ");
    scanf("%f", &altura);
    printf("A altura é: %f\n", altura);

    printf("Digite a opcao: ");
    scanf (" %c", &opcao);
    printf ("O nome é: %c", opcao);
    

    








    return 0;
}

    
/*
printf(“%formato1 %formato2”, variável1, variável2);

%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.
*/



    