# C - Functions, nested loops 
![C](https://img.shields.io/badge/Language-C-blue.svg)
![Build](https://img.shields.io/badge/Build-passing-brightgreen.svg)
![Style](https://img.shields.io/badge/Style-Holberton-red.svg)
![License](https://img.shields.io/badge/License-MIT-lightgrey.svg)

## 🧠 Objectifs du projet
Ce projet introduit la notion de **fonctions** et de **boucles imbriquées** :
- Définir, déclarer et utiliser des fonctions personnalisées
- Appeler une fonction depuis une autre
- Organiser le code avec un fichier d’en-tête (`main.h`)
- Manipuler les boucles `for` et `while` de manière imbriquée

---

## 📘 Concepts clés
- **Prototypes** dans un fichier `.h`
- **_putchar()** pour l’affichage
- Fonctions simples : arithmétique, tests, affichages
- Modularité du code
  
---
## 📁 Contenu typique

| Fichier | Description |
|----------|-------------|
| `0-putchar.c` | Affiche `_putchar` |
| `1-alphabet.c` | Affiche l’alphabet en minuscules |
| `2-print_alphabet_x10.c` | Répète l’alphabet 10 fois |
| `3-islower.c` | Vérifie si un caractère est minuscule |
| `4-isalpha.c` | Vérifie si un caractère est une lettre |
| `5-sign.c` | Affiche le signe d’un nombre |
| `6-abs.c` | Retourne la valeur absolue |
| `7-print_last_digit.c` | Retourne le dernier chiffre |
| `8-24_hours.c` | Affiche chaque minute de la journée |
| `9-times_table.c` | Table de multiplication 9x9 |
| `10-add.c` | Additionne deux entiers |
| `11-print_to_98.c` | Compte jusqu’à 98 |

---

## ⚙️ Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <fichier>.c -o <exécutable>
