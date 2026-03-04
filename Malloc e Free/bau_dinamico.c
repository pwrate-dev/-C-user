// Hoje Vamos Mexer no Baú dá Memória (Malloc e Free) no Braço Sem Virar Lixeiro e Ficar Carregando Lixo Automático 
// Abrindo Espaço no Baú (Heap) - Se não der Free, o sistema Peida!
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int tamanho = 5;

    // Reservando espaço na raça
    ptr = (int*)malloc(tamanho * sizeof(int));

    if (ptr == NULL) {
        printf("Baú lotado! Memória insuficiente.\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        ptr[i] = i * 10;
        printf("Posição [%d] guardou: %d\n", i, ptr[i]);
    }

    free(ptr); // Devolvendo a chave do Baú (Importante!)
    printf("Memória liberada. Nada de Memory Leak aqui!\n");

    return 0;
}
