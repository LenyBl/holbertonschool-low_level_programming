# C - Hello, World  
![C](https://img.shields.io/badge/Language-C-blue)
![Build](https://img.shields.io/badge/Build-passing-brightgreen)
![Style](https://img.shields.io/badge/Code%20Style-Holberton-red)
![License](https://img.shields.io/badge/License-MIT-lightgrey)

## 🧠 Objectifs du projet
Ce premier projet en langage **C** introduit les bases de la compilation, de la syntaxe et de l’affichage de texte.  
Il sert à comprendre le cycle de vie d’un programme C, du code source au binaire exécutable.

### Compétences acquises :
- Comprendre la commande `gcc` et les étapes de compilation (`-E`, `-S`, `-c`, `-o`)
- Utiliser les fonctions d’affichage : `printf`, `puts`, `putchar`
- Respecter la norme Holberton : indentation, fin de ligne, avertissements

---

## 📁 Contenu typique
| Fichier | Description |
|----------|-------------|
| `0-preprocessor` | Génère le code prétraité d’un fichier C |
| `1-compiler` | Compile un code sans l’assembler |
| `2-assembler` | Produit le code assembleur |
| `3-name` | Crée un exécutable à partir d’un code source |
| `4-puts.c` | Affiche une phrase avec `puts()` |
| `5-printf.c` | Affiche une phrase avec `printf()` |
| `6-size.c` | Affiche la taille des types de données C |

---

## ⚙️ Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <fichier>.c -o <nom_exécutable>

