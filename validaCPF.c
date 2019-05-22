#include <stdio.h>
#include <string.h>

int main() {
    char cpf[11] = "";
    int peso[9];
    int soma = 0;
    int resultado = 0;
    int verificador = 0;

    // solicitando numero cpf
    printf("Digite os primeiros 9 digitos do CPF: ");
    scanf("%s", &cpf);

    // imprimindo vetor char
    printf("\nVetor CPF: ");
    for(int i = 0; i < 9; i++) {
        printf("%c  ", cpf[i]);
    }
    printf("\n");

    // fazendo a multiplicacao de cada valor do vetor por um peso
    int j = 10;
    for(int i = 0; i < 9; i++) {
        peso[i] = ((int)(cpf[i]) - 48) * j;
        j--;
    }

    // imprimindo vetor que contem os valores multiplicados pelo peso
    printf("\nVetor peso: ");
    for(int i = 0; i < 9; i++) {
        printf("%i  ", peso[i]);
    }
    printf("\n");

    // fazendo a soma dos valores dentro do vetor peso
    for(int i = 0; i < 9; i++) {
        soma = soma + peso[i];
    }
    printf("\nSoma: %i", soma);

    // variavel resultado recebe o resto da divisao da soma por 11
    resultado = soma % 11;

    // verificando se o valor e menor ou maior que 2 e atribuindo valor ao primeiro digito verificador
    if(resultado < 2) {
        verificador = 0;
    } else {
        verificador = 11 - resultado;
    }

    // imprimindo primeiro digito verificador
    printf("\nVerificador 1: %i", verificador);

    // variavel temporaria para armazenar a conversao de int para char
    char str[1];
    // conversao da varialvel de int para char
    sprintf(str, "%d", verificador);
    // concatenando a string com o primeiro digito verificador
    strcat(cpf, str);

    // imprimindo cpf com o primeiro digito verificador
    printf("\nVetor CPF com primeiro verificador: ");
    for(int i = 0; i < 10; i++) {
        printf("%c  ", cpf[i]);
    }
    printf("\n");

    // repete-se o mesmo processo, porem o vetor cpf tem a mais o primeiro digito verificador

    int peso2[10];
    int soma2 = 0;
    int resultado2 = 0;
    int verificador2 = 0;

    int k = 11;
    for(int i = 0; i < 10; i++) {
        peso2[i] = ((int)(cpf[i]) - 48) * k;
        k--;
    }

    printf("\nVetor peso 2: ");
    for(int i = 0; i < 10; i++) {
        printf("%i  ", peso2[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++) {
        soma2 = soma2 + peso2[i];
    }
    printf("\nSoma2: %i", soma2);

    resultado2 = soma2 % 11;

    if(resultado2 < 2) {
        verificador2 = 0;
    } else {
        verificador2 = 11 - resultado2;
    }

    printf("\nVerificador 2: %i", verificador2);

    char str2[1];
    sprintf(str2, "%d", verificador2);
    strcat(cpf, str2);

    printf("\nVetor CPF com segundo verificador: ");
    for(int i = 0; i < 11; i++) {
        printf("%c  ", cpf[i]);
    }
    printf("\n");
    printf("\n");
    printf("\n");

    printf("\t ***CPF: %s***", cpf);

    printf("TESTE\n");

    return 0;
}
