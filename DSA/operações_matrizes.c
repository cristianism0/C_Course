/*
O tempo de execução de um algoritmo pode ser medido matemáticamente usando partes de suas composição.
Essas partes chamamos de: *passos*.
Esses passos são contados através de operações dominantes, que é a operação elementar do algoritmo.
Além disso, qualquer operação de soma ou produto deve ser deconsiderada.
e.g: 3n ~= n + n + n ~= n

Só nos interessa o valor assintótico, então para expponenciais:
n^4 +6n^3 + 4n^2 será considerado apenas o n^4.

Veja que nesse caso, mesmo que haja uma soma, a linha de código é dada a uma atribuição.
*/
#include <stdio.h>

int main(){
    // Soma de matrizes A + B = C onde A e B são nxn.

    // tamanho da matriz
    // para definir um VLA, devemos dar um valor pre processing para ela
    // gcc não possui suporte para VLA mesmo com const type
    #define n 3
    int A[n][n] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[n][n] = {{1,2,3},{4,5,6},{7,8,9}};

    int C[n][n] = {};

    // Soma de Matrizes.
    printf("%s\n", "soma de matrizes");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n ; j++){

            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]); 
        }
        printf("\n");
    };

    // Produto de matrizes
    printf("%s\n", "produto de matrizes");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n ; j++){
            C[i][j] = 0;
            C[i][j] = A[i][j] * B[i][j];
            printf("%d ", C[i][j]); 
        }
        printf("\n");
    };
/*
Veja que as duas fazem a mesma operação, anexa um valor dado por soma ou produto a um indice (i,j) de C.
Porém, o C tem um passo a mais, uma nova atribuição.

Definimos então que o algoritmo SOMA possui: n^2 PASSOS.
Enquanto o algoritmo PRODUTO possui: n^3 PASSOS.

*/

    return 0;
}