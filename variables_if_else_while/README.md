
---

## ⚙️ `variables_if_else_while/README.md`
```markdown
# C - Variables, if, else, while  
![C](https://img.shields.io/badge/Language-C-blue)
![Status](https://img.shields.io/badge/Status-Active-brightgreen)
![Loops](https://img.shields.io/badge/Topic-Control%20Flow-yellow)
![License](https://img.shields.io/badge/License-MIT-lightgrey)

## 🧠 Objectifs du projet
Ce projet approfondit la logique et le contrôle de flux en **C**, avec l’introduction :
- Des **conditions** : `if`, `else if`, `else`
- Des **boucles** : `while`
- Des **variables** : `int`, `char`, `unsigned int`
- Des opérateurs arithmétiques et logiques

---

## 📘 Concepts abordés
- Génération de nombres aléatoires (`rand()`)
- Contrôle du signe (`>`, `<`, `==`)
- Boucles de parcours et d’affichage (`while`)
- Manipulation des caractères ASCII
- Sortie standard (`putchar`, `printf`)

---

## 📂 Contenu typique
| Fichier | Description |
|----------|-------------|
| `0-positive_or_negative.c` | Vérifie si un nombre est positif, négatif ou nul |
| `1-last_digit.c` | Affiche le dernier chiffre d’un nombre |
| `2-print_alphabet.c` | Affiche l’alphabet en minuscule |
| `3-print_alphabets.c` | Affiche alphabet minuscule + majuscule |
| `4-print_alphabt.c` | Alphabet sans les lettres `q` et `e` |
| `5-print_numbers.c` | Affiche les chiffres de 0 à 9 |
| `6-print_numberz.c` | Idem mais sans `char` |
| `7-print_tebahpla.c` | Affiche l’alphabet à l’envers |
| `8-print_base16.c` | Affiche les chiffres en base 16 |
| `9-print_comb.c` | Affiche les combinaisons de chiffres |

---

## 💻 Exemple de compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-print_alphabet.c -o alphabet
./alphabet
