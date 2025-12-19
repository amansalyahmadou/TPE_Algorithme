#ifndef __BIBLIOTHEQUE_H
#define __BIBLIOTHEQUE_H

#include <math.h> // Pour la fonction sqrt dans main.c

// Définition de la structure Point pour l'Exercice 13 de la partie Programmation C
typedef struct {
    double x;
    double y;
} Point;

// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow );

// 4. Déclaration de la fonction de permutation utilisant des pointeurs
// Permute les valeurs pointées par a et b.
void permutation( int *a, int *b );

// 6. Déclarations des fonctions supplémentaires
// Exercice 7 (Algorithmique): Écrire un algorithme permettant de résoudre dans R une équation du second degré de la forme ax²+bx+c=0.
// La fonction retourne le nombre de solutions réelles (0, 1 ou 2). Les solutions sont stockées via pointeurs.
int solve_quadratic( double a, double b, double c, double *x1, double *x2 );

// Exercice 12a (Algorithmique): Écrire un algorithme qui lit un entier positif et vérifie si ce nombre est premier ou non.
int is_prime( int n );

// Exercice 13 (Programmation C): Écrire un programme C qui définit une structure point qui contiendra les deux coordonnées d'un point du plan. Puis lit deux points et affiche la distance entre ces deux derniers.
double distance_points( Point p1, Point p2 );

#endif // __BIBLIOTHEQUE_H
