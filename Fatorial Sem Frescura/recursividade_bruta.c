//Hoje A Pilha é Minha Bola E Eu Sou O Ronaldinho Gaúcho (o Mago)
// Empilhando chamadas até o talo
#include <stdio.h>

long long fatorial(int n) {
    if (n <= 1) return 1;
    return n * fatorial(n - 1); // A Função Que Se Chama (Exp) (*´▽｀)v  (ﾟーﾟ*) esquizofrenia 2 
}

int main() {
    int num = 10;
    printf("Fatorial de %d é: %lld\n", num, fatorial(num));
    return 0;
}
