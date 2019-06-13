#include <stdio.h>
#include <string.h>

void multiplica1(char *cpf, int *peso ) {
    // fazendo a multiplicacao de cada valor do vetor por um peso
    int j = 10;
    for(int i = 0; i < 9; i++) {
        peso[i] = ((int)(cpf[i]) - 48) * j;
        j--;
    }
}

int soma1(int soma, int *peso) {
    // fazendo a soma dos valores dentro do vetor peso
    for(int i = 0; i < 9; i++) {
        soma = soma + peso[i];
    }

    return soma;
}

int verificador1(int soma, int resultado, int verificador) {
    // variavel resultado recebe o resto da divisao da soma por 11
    resultado = soma % 11;

    // verificando se o valor e menor ou maior que 2 e atribuindo valor ao primeiro digito verificador
    if(resultado < 2) {
        verificador = 0;
    } else {
        verificador = 11 - resultado;
    }

    return verificador;
}

void conversao1(int verificador, char *cpf) {
    // variavel temporaria para armazenar a conversao de int para char
    char str[1];
    // conversao da varialvel de int para char
    sprintf(str, "%d", verificador);
    // concatenando a string com o primeiro digito verificador
    strcat(cpf, str);
}

void multiplica2 (char *cpf, int *peso2) {
    // fazendo a multiplicacao de cada valor do vetor por um peso
    int k = 11;
    for(int i = 0; i < 10; i++) {
        peso2[i] = ((int)(cpf[i]) - 48) * k;
        k--;
    }
}

int somaDois(int soma2, int *peso2) {
    // fazendo a soma dos valores dentro do vetor peso
    for(int i = 0; i < 10; i++) {
        soma2 = soma2 + peso2[i];
    }

    return soma2;
}
