#include <stdio.h>

struct data{
    int dia,mes,ano;
};

struct pessoa {
    struct data nascimento;
    char nome[10];
    int idade;
    int altura;
    int qtdCarros;
};

int main (){

    struct pessoa pessoa1;

    scanf("%s \n", &pessoa1.nome);
    scanf("%d \n", &pessoa1.idade);
    scanf("%d %d %d", &pessoa1.nascimento.dia, &pessoa1.nascimento.mes,&pessoa1.nascimento.ano);
    printf("nome:%s idade:%d Data de Nascimento:%d/%d/%d",pessoa1.nome,pessoa1.idade,pessoa1.nascimento.dia,pessoa1.nascimento.mes,pessoa1.nascimento.ano);
    return 0;
}