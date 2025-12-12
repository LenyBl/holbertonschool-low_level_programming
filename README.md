# holbertonschool-low_level_programming

![C Language](https://img.shields.io/badge/Language-C-blue.svg)
![Holberton](https://img.shields.io/badge/Holberton-School-red.svg)
![Status](https://img.shields.io/badge/Project-Active-success.svg)
![License](https://img.shields.io/badge/License-Unspecified-lightgrey.svg)

Ce dépôt regroupe l'ensemble des projets C du curriculum **Holberton
School**, couvrant les bases de la programmation bas niveau : mémoire,
pointeurs, allocation, structures, bit manipulation, recursion,
argc/argv, fonctions variadiques, et plus encore.

------------------------------------------------------------------------

## 📌 Table des matières

-   Description générale\
-   Modules inclus\
-   Structure du dépôt\
-   Compilation\
-   Exemples\
-   Bonnes pratiques\
-   Contribuer\
-   Licence\
-   Auteurs

------------------------------------------------------------------------

## 🧩 Description générale

Ce repo contient les projets fondamentaux permettant de maîtriser la
programmation bas niveau en C.\
Les exercices couvrent progressivement tous les aspects de la
manipulation mémoire, des pointeurs, de la gestion dynamique, et de la
compréhension interne du fonctionnement d'un programme.

------------------------------------------------------------------------

## 📚 Modules inclus

-   🔹 **0x00 - Hello World**\
-   🔹 **0x01 - Variables, if, else, while**\
-   🔹 **0x02 - Functions, nested loops**\
-   🔹 **0x03 - Debugging**\
-   🔹 **0x04 - More functions, nested loops**\
-   🔹 **0x05 - Pointers, arrays, strings**\
-   🔹 **0x06 - More pointers, arrays, strings**\
-   🔹 **0x07 - Even more pointers, arrays, strings**\
-   🔹 **0x08 - Recursion**\
-   🔹 **0x09 - Static libraries**\
-   🔹 **0x0A - argc, argv**\
-   🔹 **0x0B - malloc, free**\
-   🔹 **0x0C - More malloc, free**\
-   🔹 **0x0D - Preprocessor**\
-   🔹 **0x0E - Structures, typedef**\
-   🔹 **0x0F - Function pointers**\
-   🔹 **0x10 - Variadic functions**\
-   🔹 **0x12 - Singly linked lists**\
-   🔹 **0x13 - More singly linked lists**\
-   🔹 **0x14 - Bit manipulation**\
-   🔹 **0x15 - File I/O**\
-   ... et d'autres modules avancés.

------------------------------------------------------------------------

## 📁 Structure du dépôt

Chaque dossier correspond à un projet autonome :

    holbertonschool-low_level_programming/
    ├── 0x00-hello_world
    ├── 0x01-variables_if_else_while
    ├── 0x02-functions_nested_loops
    ├── 0x03-debugging
    ├── 0x04-more_functions_nested_loops
    ├── 0x05-pointers_arrays_strings
    ...
    ├── 0x15-file_io
    └── README.md

------------------------------------------------------------------------

## 🔧 Compilation

Tous les fichiers C doivent être compilés avec :

``` bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o output
```

Pour exécuter :

``` bash
./output
```

------------------------------------------------------------------------

## 💡 Exemple simple

``` c
#include <stdio.h>

int main(void)
{
    printf("Hello Holberton!\n");
    return (0);
}
```

------------------------------------------------------------------------

## 🧭 Bonnes pratiques

-   Respect strict des normes **Betty**\
-   Fonctions courtes, lisibles et commentées\
-   Toujours vérifier les retours d'allocation (`malloc`)\
-   Organisation modulaire des fichiers\
-   Respect du style Holberton

------------------------------------------------------------------------

## 🤝 Contribuer

1.  Fork le repository\
2.  Crée une branche `feature/...` ou `fix/...`\
3.  Commits propres et explicites\
4.  Pull Request détaillée

------------------------------------------------------------------------

## 📄 Licence

Aucune licence explicite --- droit d'auteur par défaut.

------------------------------------------------------------------------

## 👤 Auteurs

-   [LenyBl](https://github.com/LenyBl)
