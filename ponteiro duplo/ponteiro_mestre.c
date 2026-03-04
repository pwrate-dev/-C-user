// Hoje Vamos Fazer os criadores de Python ficar Tremendo no Verão 
// O Famoso Ponteiro Duplo
// Mexendo na Fiação da Fiação (Ponteiro Duplo)
#include <stdio.h>

void mudar_endereco(int **duplo_ptr, int *novo_alvo) {
    *duplo_ptr = novo_alvo; // Mudando o Destino Original
}

int main() {
    int valor_a = 50, valor_b = 100;
    int *ptr = &valor_a;

    printf("Antes: Ponteiro aponta para %d\n", *ptr);

    mudar_endereco(&ptr, &valor_b);

    printf("Depois: Agora aponta para %d (No Pelo!)\n", *ptr);

    return 0;
}
