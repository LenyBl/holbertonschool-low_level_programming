# malloc_free

Ce dossier contient des exercices portant sur l'allocation dynamique en
C : - Utilisation de `malloc`, `free` - Manipulation de pointeurs et
tableaux alloués dynamiquement - Gestion correcte de la mémoire et
prévention des fuites

## Compilation

``` bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <fichier>.c -o <executable>
```

## Contenu typique

-   Fonctions créant des chaînes dynamiques
-   Tableaux alloués avec `malloc`
-   Libération mémoire après usage

## Bonnes pratiques

-   Toujours vérifier que `malloc` ne retourne pas `NULL`
-   Libérer toutes les allocations avant la fin du programme
-   Documenter chaque fonction
