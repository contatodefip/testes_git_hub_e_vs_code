#include <stdio.h>

// EXERCÍCIOS FEITOS EM LIGUAGEM C PARA TESTAR INTEGRAÇÃO ENTRE VS CODE E GITHUB
int main() {
// 1. Iniciando o código vazio.

// 2. Adicionando variáveis
int numero1, numero2, numero3, resultado1, resultado2, resultado3;

// 3. Adicionando dados nas variáveis
numero1 = 10, numero2 = 20, numero3 = 30;
resultado1 = numero1 * numero2;
resultado2 = numero1 - numero2;
resultado3 = resultado1 * resultado2;

// 4. Fazendo operações matemáticas
printf("O resultado de %d x %d é: %d\n", numero1, numero2, resultado1);
printf("O resultado de %d - %d é: %d\n", numero1, numero2, resultado2);
printf("O Multiplicando %d * %d temos: %d\n", resultado1, resultado2, resultado3);

return 0;

}