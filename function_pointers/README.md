# function_pointers

Ce dossier contient des exercices dédiés à la compréhension et à
l'utilisation des pointeurs de fonctions en C.

## Concepts abordés

-   Définition et utilisation des pointeurs de fonctions
-   Passage de fonctions en paramètres (callbacks)
-   Implémentation de mini-calculatrices avec pointeurs de fonctions
-   Parcours et exécution dynamique de fonctions via tableaux de
    pointeurs

## Exemple de syntaxe

``` c
int (*f)(int, int);
f = &addition;
result = f(2, 3);
```

## Compilation

``` bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <fichier>.c -o <executable>
```

## Objectifs

-   Comprendre le rôle des pointeurs de fonctions
-   Savoir utiliser les callbacks en C
-   Gérer proprement les structures contenant des pointeurs vers des
    fonctions

## Bonnes pratiques

-   Toujours vérifier les pointeurs avant utilisation
-   Documenter clairement l'usage et les paramètres attendus par chaque
    fonction appelable
