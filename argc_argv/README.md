# Argc & Argv

Dossier contenant les exercices sur les arguments de la ligne de commande en C (Holberton / ALX).  
But : manipuler argc et argv pour lire des paramètres, afficher des comptes, traiter des chaînes passées en ligne de commande.

## Contenu
- Fichiers `.c` : chaque exercice traite un cas (ex. `0-whatsmyname.c`, `1-args.c`, `2-args.c`, `3-mul.c`, `4-add.c`, ...).
- `main.h` : prototypes si présent.
- Tests : ajouter un petit `main` ou utiliser les fichiers fournis pour vérifier le comportement.

## Compilation
Depuis le dossier `argc_argv` :
- Compiler un exercice avec un `main` de test :
  $ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <fichier>.c -o test
- Exemple générique :
  $ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o test

## Exemples d'utilisation
- Lister le nombre d'arguments :
  $ ./test arg1 arg2
- Multiplier deux nombres passés en argument :
  $ ./mul 3 4

## Règles et bonnes pratiques
- Respecter la norme C89/gnu89 : flags recommandés `-Wall -Wextra -Werror -pedantic -std=gnu89`.
- Vérifier le nombre d'arguments avant d'accéder à argv.
- Valider et convertir les chaînes en entiers avec soin (gestion des erreurs).
- Ne pas utiliser de variables inutilisées.

## Tests
- Écrire un `main` de test pour chaque exercice couvrant cas normaux et limites (aucun argument, trop peu, non numériques).
- Exemple de test rapide :
  $ gcc -Wall -Werror -std=gnu89 1-args.c -o args && ./args a b c

## Aide
Je peux :
- Générer un `main` de test pour un exercice précis.
- Lister les fichiers présents dans ce dossier.
- Corriger une fonction qui ne se comporte pas comme prévu.