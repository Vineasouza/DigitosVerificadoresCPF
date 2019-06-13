#include <stdio.h>
#include <string.h>
#include "cpf.h"

int main(int argc, char const *argv[]) {
    //variaveis 1
    char cpf[11] = "";
    int peso[9];
    int soma = 0;
    int resultado = 0;
    int verificador = 0;

    printf("Digite os primeiros 9 digitos do CPF: ");
    scanf("%s", &cpf);

    multiplica1(cpf,peso);

    soma = soma1(soma, peso);

    verificador = verificador1(soma, resultado, verificador);

    conversao1(verificador, cpf);

    //variaveis 2
    int peso2[10];
    int soma2 = 0;
    int resultado2 = 0;
    int verificador2 = 0;

    multiplica2(cpf, peso2);

    soma2 = somaDois(soma2, peso2);

    verificador2 = verificador1(soma2, resultado2, verificador2);

    conversao1(verificador2, cpf);

    printf("\n\n\t ***CPF: %s***\n\n", cpf);

    return 0;
}
