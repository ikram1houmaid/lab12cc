# TP : Surcharge des opérateurs en C++

## Description
Ce TP a pour objectif de comprendre et de pratiquer la surcharge des opérateurs en programmation orientée objet avec le langage C++.

## Exercices réalisés

### Exercice 1 : Surcharge de l'opérateur `+` – Vecteur2D
- Création d'une classe `Vecteur2D`.
- Définition des attributs privés `x` et `y`.
- Initialisation avec un constructeur.
- Surcharge de l'opérateur `+` pour additionner deux vecteurs.
- Affichage du résultat avec la méthode `afficher()`.

### Exercice 2 : Surcharge des opérateurs `==` et `!=` – Date
- Création d'une classe `Date`.
- Définition des attributs `jour`, `mois` et `annee`.
- Implémentation des constructeurs.
- Surcharge de `==` pour comparer deux dates identiques.
- Surcharge de `!=` pour comparer deux dates différentes.

### Exercice 3 : Surcharge de l'opérateur `[]` – Tableau dynamique
- Création d'une classe `Tableau`.
- Utilisation d'un pointeur dynamique `int* data`.
- Allocation dynamique de mémoire avec `new[]`.
- Surcharge de `[]` pour accéder aux éléments du tableau.
- Vérification des indices avec les exceptions `out_of_range`.
- Libération de la mémoire avec le destructeur `delete[]`.

### Exercice 4 : Surcharge de l'opérateur `<<` – Produit
- Création d'une classe `Produit`.
- Définition des attributs `nom`, `prix` et `quantite`.
- Initialisation avec un constructeur.
- Surcharge de l'opérateur `<<` avec une fonction amie (`friend`).
- Affichage direct des objets avec `cout`.

## Structure du projet

```text
TP_Surcharge_Operateurs/
│
├── Exercice1/
│   └── Vecteur2D.cpp
│
├── Exercice2/
│   └── Date.cpp
│
├── Exercice3/
│   └── Tableau.cpp
│
├── Exercice4/
│   └── Produit.cpp
│
└── README.md
```

## Technologies utilisées
- Langage : C++
- Concepts : Programmation orientée objet (POO)
- Compilateur : g++ ou MinGW
- Environnement : Visual Studio Code

## Compilation et exécution

Pour compiler un exercice :

```bash
g++ Vecteur2D.cpp -o Vecteur2D
```

Pour exécuter :

```bash
./Vecteur2D
```

Sous Windows :

```bash
Vecteur2D.exe
```

## Conclusion

Ce TP permet de maîtriser les principales techniques de surcharge des opérateurs en C++, notamment l'addition, la comparaison, l'accès indexé et l'affichage des objets.
<img width="960" height="540" alt="image" src="https://github.com/user-attachments/assets/5100f4f4-21bc-46c6-bab3-7b8f5ddb929c" />
<img width="960" height="540" alt="image" src="https://github.com/user-attachments/assets/07673fb5-8478-4293-b8dd-2dfdc7041558" />
<img width="960" height="540" alt="image" src="https://github.com/user-attachments/assets/4beb41b8-7f58-44dd-8a93-d2b214155653" />
<img width="960" height="540" alt="image" src="https://github.com/user-attachments/assets/20b60ea9-40e4-49a9-8868-04ced5e37eed" />
