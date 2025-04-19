#include <stdio.h>

// EXERCÍCIOS FEITOS EM LIGUAGEM C PARA TESTAR INTEGRAÇÃO ENTRE VS CODE E GITHUB
// versao_1_pc

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

// 5. Adicionando mais uma operação a partir do PC
printf("O Multiplicando %d * %d temos: %d\n\n", resultado1, resultado2, resultado3);

// 6. Adicionando Finalização a partir do Github
printf("Você visualizou todos os resultados.\n\nMEUS PARABÉNS!");
return 0;

}