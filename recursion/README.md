# Recursion

Dépot contenant les exercices sur la récursion en C (Holberton / ALX).  
But : résoudre des problèmes en utilisant des fonctions récursives sans boucles (lorsque demandé).

## Contenu
- Fichiers `.c` : chaque exercice implémente une fonction récursive (ex. `0-puts_recursion.c`, `1-print_rev_recursion.c`, `2-strlen_recursion.c`, `3-factorial.c`, ...).
- `main.h` : prototypes et macros partagés (si présent).
- Tests : ajouter un petit `main` pour tester chaque fonction.

(adapte la liste des fichiers selon ce qui est dans ton dossier)

## Compilation
Depuis le dossier `recursion` :
- Compiler un fichier avec un `main` de test :
  $ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <fichier_test>.c <fichiers_recursion>.c -o test
- Exemple générique :
  $ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o test

## Exemples d'utilisation
- Tester `factorial` via un `main` de test :
  - Écrire un `main` qui appelle `factorial(5)` et affiche le résultat.
  - Compiler et exécuter comme indiqué ci‑dessus.

## Règles et bonnes pratiques
- Respecter la norme C90/gnu89 pour les projets Holberton :
  - Flags recommandés : `-Wall -Wextra -Werror -pedantic -std=gnu89`
- Pas de variables non utilisées.
- Gestion correcte des cas limites (NULL, valeurs négatives, etc.) selon l'exercice.
- Documenter chaque fonction avec un commentaire de style Doxygen/holberton (description, paramètres, retour).

## Tests
- Créer un petit `main` par exercice pour vérifier les cas normaux et limites.
- Pour des tests automatisés, écrire des scripts ou utiliser un Makefile local.

## Aide
Si tu veux, je peux :
- Générer un `main` de test pour une fonction précise.
- Lister les fichiers présents dans ce dossier.
- Corriger une fonction récursive qui ne se comporte pas comme prévu.
