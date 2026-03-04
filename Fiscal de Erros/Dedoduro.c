//Hoje Vamos Fazer aquele amigo Dedo duro que Fazia Todo mundo Da Sala Saber que tu tava com o bolso cheio de doces 
// Organizando a casa com Enums (Status de Operação)
#include <stdio.h>

typedef enum {
    SUCESSO = 0,
    ERRO_MEMORIA = 1,
    ERRO_HARDWARE = 2
} STATUS_SISTEMA;

STATUS_SISTEMA rodar_teste() {
    // Simulando uma lógica de verificação
    return SUCESSO;
}

int main() {
    STATUS_SISTEMA resultado = rodar_teste();

    if (resultado == SUCESSO) {
        printf("Eu Quero!\n");
    } else {
        printf("PROFESSORA!! %d\n", resultado);
    }

    return 0;
}
