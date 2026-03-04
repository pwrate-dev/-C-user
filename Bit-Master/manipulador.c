//hoje teremos que manipular alguns bits, Tipo Aquelas Milf Quarentona
#include <stdio.h>

// Wall hack (macro) para ver se um bit está ligado (1) ou desligado (0)
#define CHECK_BIT(var, pos) ((var) & (1 << (pos)))

void print_binary(unsigned char n) {
    printf("Binario de %d: ", n);
    for (int i = 7; i >= 0; i--) {
        printf("%d", CHECK_BIT(n, i) ? 1 : 0);
    }
    printf("\n");
}

int main() {
    unsigned char dado = 10; // 00001010 em binario
    
    printf("--- Mestre dos Bits ---\n");
    print_binary(dado);

    // Ligando o bit 0 (Transformando 10 em 11)
    dado |= (1 << 0); 
    printf("Apos ligar o bit 0: %d\n", dado);
    print_binary(dado);
    // Desligando o bit (Usando o operador NOT ~ e AND &)
    dado &= ~(1 << 0); 
    printf("Apos desligar o bit 0: %d\n", dado);

    return 0;
}
