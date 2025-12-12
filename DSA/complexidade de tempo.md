### Complexidade de tempo

No algoritmo [operações de matrizes](operações_matrizes.c), vemos que o tempo pode ser medido pelo número de passos de um algoritmo, onde os passos são as operações elementares do algoritmo.
Essas operações no código foram dadas por atribuições.


Podemos definir uma expressão matemática para a **complexidade de tempo** por:

Seja A um algoritmo, {E1, \dots  ,Em} o conjunto de todas as entradas de A. Denote por t_i o número de passos efetuados por A, quando a entrada for Ei. Definem-se:

**complexidade do pior caso:** max Ei em E {ti}

**complexidade do melhor caso:** min Ei em E {ti}

**complexidade do caso médio:** Soma 1 <= i <= m piti

Onde pi é a probabilidade de ocorrencia da entrada Ei.

Como um algorimto é um procedimento que recebe uma entrada e geração uma saída I/O, então CADA entrada terá uma complexidade de processamento.

O pior caso é o maior número de passos dados pelo algoritmo e então, a pior entrada do algoritmo.
Como fornece o **maior número da passos dado pelo algoritmo** tem maior valor de uso. 

Já a de melhor caso tem uso menos frequente. A de médio, exige o conhecimento da probabilidade, que nem sempre é conhecida.
