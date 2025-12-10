/*
    RECURSÃO

Uma função recursiva é aquela em que se chama n vezes, ou seja, execute o seu bloco
de execução um numero x de vezes sempre se chamando.

Uma função depende de pelo menos, uma chamada externa.

Funções recursivas tem TODAS AS CHAMADAS EXTERNAS

*TODO PROCEDIMENTO RECURSIVO TEM UMA VERSÃO NÃO RECURSIVA*

decidimos portanto, empregar a melhor abordagem: recursiva ou não.
*/

#include <stdio.h>

// boa pratica evitar nested functions em C

// Função fatorial RECURSIVA.
int rec_fat(int i){
    if (i <= 1){
        return 1;
    } else {
        return i * rec_fat(i - 1);
    };
};

int non_rec_fat(int num_iter){

    // usamos isso para 0! = 1 e iniciamos a iter com j > 0.
    int resultado = 1;

    for (int j = 1; j <= num_iter; j++){
        // perceba que como a iteração é crescente
        // o indicie j-1 é valido pois j é inicializado com 1.
        resultado *= j;
    };
    return resultado;

    /*
    seria comum associar um valor aleatorio para uma alocação dinamica dentro de um 
    array ao invés de usa uma variavel int fixa.
    
    porém o C a partir do 99 não aceita VLA (variable lenght array).
    */
};

int main(){

    // Iremos criar dois algoritmos de mesma função: Calcular um fatorial

    int num_iter = 10;

    // Recursivo
    printf("Valor recursivo: %d\n", rec_fat(num_iter));

    // Não recursivo
    printf("Valor não recursivo: %d\n", non_rec_fat(num_iter));

    return 0;
}