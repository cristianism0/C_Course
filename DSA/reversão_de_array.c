// Algoritmo de inversão

#include <stdio.h>

/*
Queremos inverter uma lista com N valores
Preciamos então:

1. Iterar sobre metade do tamanho da lista
    Isso porque iremos trocar dois valores ao mesmo tempo.
2. Mudar a última pela primeira posição

DEPOIS
3. Mudar o antepenúltimo pelo segundo elemento.


Basta ver que as variáveis são os indices dos vetores que terão que variar crescendo e diminuindo em 1.
*/

int main(){
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // C usa sizeof considerando os bytes de cada int (4)
    // Ou seja, temos len(A) = 10 e cada int = 4, sizeof = 40.
    // Dividindo por A[0] ou por 4 equivale já que A[0] = 0 por zero init.
    int num_count = sizeof(A) / sizeof(A[0]);

    printf("Esse é o num count %d\n", num_count);
    
    int iter = num_count/2;

    printf("Esse é o iter %d\n", iter);

    for (int i = 0; i < iter; i++){
        
        // i irá crescer de 1 em 1.
        // n - i + 1 -> retorna o valor oposto a i.
        
        int pos_oposta = num_count-i-1;

        printf("Essa é a posição oposta %d\n", pos_oposta);

        // Armazenamos o valor inicial em uma variável de swap
        int temp = A[i];
        // Pegamos o valor inicial e trocamos pelo último
        A[i] = A[pos_oposta];
        // Agora terminamos o swap dando o valor da inicial ao último
        A[pos_oposta] = temp;

    };

    printf("Print do Array invertido: \n");
    for (int i = 0; i < num_count; i++){
        printf("%d \n", A[i]);
    };

    return 0;
};