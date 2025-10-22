
---

## 🔁 `functions_nested_loops/README.md`
```markdown
# C - Functions, nested loops  
![C](https://img.shields.io/badge/Language-C-blue)
![Topic](https://img.shields.io/badge/Topic-Functions%20%26%20Loops-orange)
![Build](https://img.shields.io/badge/Build-passing-brightgreen)
![License](https://img.shields.io/badge/License-MIT-lightgrey)

## 🧠 Objectifs du projet
Ce projet développe les notions de **fonctions** et de **boucles imbriquées** (`nested loops`) en C.

### Compétences visées :
- Définir et déclarer des fonctions (`prototype`, `header`)
- Appeler une fonction depuis une autre
- Utiliser `for`, `while` et des boucles imbriquées
- Comprendre la portée des variables
- Utiliser un **fichier d’en-tête (.h)** pour organiser le code

---

## 📘 Concepts clés
- Modularité du code avec fonctions personnalisées  
- Retour de valeurs et gestion de paramètres  
- Organisation des fichiers sources et d’en-têtes  
- Réutilisation des fonctions dans plusieurs programmes  

---

## 📂 Contenu typique
| Fichier | Description |
|----------|-------------|
| `0-putchar.c` | Affiche `_putchar` en utilisant une fonction fournie |
| `1-alphabet.c` | Affiche l’alphabet en minuscules |
| `2-print_alphabet_x10.c` | Répète l’alphabet 10 fois |
| `3-islower.c` | Vérifie si un caractère est minuscule |
| `4-isalpha.c` | Vérifie si un caractère est une lettre |
| `5-sign.c` | Affiche le signe d’un nombre |
| `6-abs.c` | Retourne la valeur absolue |
| `7-print_last_digit.c` | Retourne le dernier chiffre d’un nombre |
| `8-24_hours.c` | Affiche chaque minute de la journée |
| `9-times_table.c` | Affiche la table de multiplication 9x9 |
| `10-add.c` | Ajoute deux entiers |
| `11-print_to_98.c` | Affiche tous les entiers jusqu’à 98 |

---

## 🧰 Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <fichier>.c -o <nom_exécutable>
