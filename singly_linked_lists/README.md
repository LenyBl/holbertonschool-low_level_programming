# Singly Linked Lists

![C Language](https://img.shields.io/badge/Language-C-blue.svg) ![Data
Structure](https://img.shields.io/badge/Structure-Singly%20Linked%20List-orange.svg)
![Holberton](https://img.shields.io/badge/Holberton-School-red.svg)

Ce dossier contient les implémentations des **listes simplement
chaînées** en langage C, couvrant la création, l'insertion, la
suppression, l'affichage et la libération de mémoire.

------------------------------------------------------------------------

## 📌 Fonctionnalités

-   Création de nœuds\
-   Ajout en tête\
-   Ajout en fin\
-   Suppression de nœuds\
-   Affichage des éléments\
-   Libération complète de la liste\
-   Calcul de la longueur\
-   Gestion de listes contenant divers types de données

------------------------------------------------------------------------

## 📁 Structure typique

    0-print_list.c
    1-list_len.c
    2-add_node.c
    3-add_node_end.c
    4-free_list.c
    lists.h

------------------------------------------------------------------------

## 🛠️ Compilation

``` bash
gcc -Wall -Werror -Wextra -pedantic *.c -o single_list
./single_list
```

------------------------------------------------------------------------

## 💡 Exemple

``` c
list_t *head = NULL;
add_node(&head, "Holberton");
add_node_end(&head, "School");
print_list(head);
free_list(head);
```

------------------------------------------------------------------------

## 👤 Auteurs

-   [LenyBl](https://github.com/LenyBl)
