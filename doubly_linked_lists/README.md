# Doubly Linked Lists

![C Language](https://img.shields.io/badge/Language-C-blue.svg) ![Data
Structure](https://img.shields.io/badge/Structure-Doubly%20Linked%20List-purple.svg)
![Holberton](https://img.shields.io/badge/Holberton-School-red.svg)

Ce dossier contient les implémentations des **listes doublement
chaînées** en C : gestion des pointeurs `prev` et `next`, navigation
dans les deux sens, insertion, suppression et plus encore.

------------------------------------------------------------------------

## 📌 Fonctionnalités

-   Création de nœuds\
-   Ajout en début\
-   Ajout en fin\
-   Insertion à un index donné\
-   Suppression de nœuds\
-   Affichage vers l'avant et vers l'arrière\
-   Libération complète de la liste

------------------------------------------------------------------------

## 📁 Structure typique

    0-print_dlistint.c
    1-dlistint_len.c
    2-add_dnodeint.c
    3-add_dnodeint_end.c
    4-free_dlistint.c
    5-get_dnodeint.c
    6-sum_dlistint.c
    7-insert_dnodeint.c
    8-delete_dnodeint.c
    lists.h

------------------------------------------------------------------------

## 🛠️ Compilation

``` bash
gcc -Wall -Werror -Wextra -pedantic *.c -o doubly_list
./doubly_list
```

------------------------------------------------------------------------

## 💡 Exemple

``` c
dlistint_t *head = NULL;
add_dnodeint(&head, 10);
add_dnodeint_end(&head, 20);
print_dlistint(head);
free_dlistint(head);
```

------------------------------------------------------------------------

## 👤 Auteurs

-   [LenyBl](https://github.com/LenyBl)
