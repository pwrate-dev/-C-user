// Hoje to poucas ideias, Vamos fazer uma Tabela de Funções(Ponteiro de Função) MACHO.
#include <stdio.h>

// Definindo um Tipo de "ponteiro para função"
typedef void (*Operacao)(int, int);

void somar(int a, int b) { printf("Soma: %d\n", a + b); }  //É Essas Horas Que os Menino do C++ Fica Doido haha Aqui Nois Faz é no PELO
void subtrair(int a, int b) { printf("Subtracao: %d\n", a - b); }

int main() {
    // Uma Tabela (array) que Guarda FUNÇÕES 
    Operacao operacoes[] = {somar, subtrair};

    printf("--- Tabela de Funcoes ---\n");
    
    // Chamando as Funções pelo Indice do array
    operacoes[0](10, 5); // Chama somar
    operacoes[1](10, 5); // Chama subtrair

    return 0;
}
