# 🔢 Pointers, Arrays and Strings

## 📘 Description

Ce dossier fait partie du projet **Low Level Programming** de la [Holberton School](https://www.holbertonschool.com/).  
Il regroupe les exercices visant à comprendre et maîtriser trois concepts essentiels du langage C :

- Les **pointeurs** 🧭  
- Les **tableaux (arrays)** 🧮  
- Les **chaînes de caractères (strings)** 💬  

L’objectif est de développer une compréhension profonde de la gestion de la mémoire, de la manipulation d’adresses et de la manière dont les données sont stockées et modifiées en C.

---

## 🧠 Objectifs d’apprentissage

À la fin de ce projet, vous devriez être capable de :
- Expliquer ce qu’est un **pointeur** et comment il fonctionne  
- Manipuler des **tableaux** à une ou plusieurs dimensions  
- Modifier et parcourir des **chaînes de caractères**  
- Comprendre la différence entre **valeurs** et **adresses**  
- Utiliser correctement l’opérateur `*` (déréférencement) et `&` (adresse)  
- Passer des pointeurs en arguments à des fonctions  

---

## 🗂️ Contenu

| Fichier | Description |
|----------|-------------|
| `0-reset_to_98.c` | Met à jour la valeur pointée par un pointeur vers `98` |
| `1-swap.c` | Échange les valeurs de deux entiers à l’aide de pointeurs |
| `2-strlen.c` | Retourne la longueur d’une chaîne de caractères |
| `3-puts.c` | Affiche une chaîne de caractères suivie d’un saut de ligne |
| `4-print_rev.c` | Affiche une chaîne en ordre inverse |
| `5-rev_string.c` | Inverse une chaîne de caractères en place |
| `6-puts2.c` | Affiche un caractère sur deux d’une chaîne |
| `7-puts_half.c` | Affiche la seconde moitié d’une chaîne |
| `8-print_array.c` | Affiche les n premiers éléments d’un tableau d’entiers |
| `9-strcpy.c` | Copie une chaîne de caractères vers une autre variable |
| `100-atoi.c` | Convertit une chaîne en entier |

> 💡 Certains fichiers peuvent varier selon la progression du projet Holberton.

---

## ⚙️ Compilation

Tous les fichiers doivent être compilés avec :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <fichier>.c -o <exécutable>
