### Notação O (Big O)

Para as notação de complexidade vistas em [complexidade de tempo](<complexidade de tempo.md>), foi definido que podemos desconsiderar constantes aditivas ou multiplicativas, novamente:

*e.g:* 4n ~= **n**

*e.g:* 4n⁵ + 6n⁴ + 4n³ + 2n =~ **n⁵**

Então, se torna útil escrever operadores matemáticos para isso:
```math
\bf{O,\  \Omega,\  \Theta}
```
Serão usados para isso.

Sejam *f,h* funções reais positivas em relação a *n*. Diz-se que *f* é *O(h)*, ou seja: 
```math
f = \bf{O}(h)
```
Quando existe um c > 0 e um n_0 tal que:
```math
n > n0 = f(n) <= c * h(n)
```

Rigorosamente:
```math
f(n) = O(h(n)) \Longleftrightarrow \exist c > 0, n_0 \in \mathbb{R}: \forall n > n_0 = f(n) \leq c \cdot h(n) 
```

Ou seja, h(n) atua como um limite **superior** aos valores assintótico de *f*.

#### Propriedades
Sejam *g* e *h* funções reais positivas e k uma constante.

*Veja que ja usamos essas propriedades antes para escolher apenas o comportamente assintótico da função f.*

i) O(g + h) = O(g) + O(h)

ii) O(k * g) = k * O(g) = O(g)


### Chamadas para uma função recursiva

Sabemos que uma recursiva é chamda externamente por um número finito de vezes, sabendo disso, calculamos o passo apenas de **uma chamada**. Feito isso, definimos a complexidade por:

A complexidade de uma recursiva é o produto de: número de chamadas externas vezes o valor da complexidade isolada.