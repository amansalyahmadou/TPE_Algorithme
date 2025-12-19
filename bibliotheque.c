#include "bibliotheque.h"

// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
 unsigned int result = 1;
 while ( value > 1 ) {
 result *= value;
 value --;
 }

 return result;
}

// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
 if ( pow == 0 ) return 1;
 if ( pow == 1 ) return value;
 int accumulator = 1;
 while( pow > 0 ) {
 accumulator *= value;
 pow--;
 }

 return accumulator;
}

// 4. Implémentation de la fonction de permutation (Exercice 13 Algorithmique)
// Note: L'énoncé initial demandait l'Exo 13 Algorithmique pour la permutation.
// l'Exo 13 Algorithmique est "Ecrire une procédure permut qui permet d'échanger les valeurs de 2 entiers a et b."
// L'implémentation avec pointeurs est donc correcte.
// Permute deux entiers en utilisant des pointeurs.
void permutation( int *a, int *b ) {
    // Explication :
    // 1. On utilise le déréférencement (*a et *b) pour accéder aux valeurs
    //    stockées aux adresses passées en argument.
    // 2. On utilise une variable temporaire pour stocker la valeur de *a
    //    avant de l'écraser.
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 6. Implémentation des fonctions supplémentaires (selon le PDF fourni)

// Exercice 7 (Algorithmique): Résolution d'une équation du second degré (ax^2 + bx + c = 0).
// Retourne le nombre de solutions réelles (0, 1 ou 2). Les solutions sont stockées via pointeurs.
int solve_quadratic( double a, double b, double c, double *x1, double *x2 ) {
    // Nécessite l'inclusion de <math.h> dans main.c pour sqrt
    if ( a == 0 ) {
        // Cas d'une équation du premier degré: bx + c = 0
        if ( b == 0 ) {
            return ( c == 0 ) ? -1 : 0; // -1 pour infinité de solutions (0=0), 0 pour aucune solution (c=0)
        }
        *x1 = -c / b;
        return 1; // Une seule solution
    }

    double delta = b * b - 4 * a * c;

    if ( delta < 0 ) {
        return 0; // Aucune solution réelle
    } else if ( delta == 0 ) {
        *x1 = -b / ( 2 * a );
        return 1; // Une solution double
    } else {
        double sqrt_delta = sqrt( delta );
        *x1 = ( -b + sqrt_delta ) / ( 2 * a );
        *x2 = ( -b - sqrt_delta ) / ( 2 * a );
        return 2; // Deux solutions réelles distinctes
    }
}

// Exercice 12a (Algorithmique): Vérifie si un nombre est premier.
int is_prime( int n ) {
    if ( n <= 1 ) return 0;
    if ( n <= 3 ) return 1;
    if ( n % 2 == 0 || n % 3 == 0 ) return 0;
    for ( int i = 5; i * i <= n; i = i + 6 ) {
        if ( n % i == 0 || n % ( i + 2 ) == 0 ) return 0;
    }
    return 1;
}

// Exercice 13 (Programmation C): Calcule la distance entre deux points.
// La structure Point est définie dans bibliotheque.h
double distance_points( Point p1, Point p2 ) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    // Utilisation de la formule de distance euclidienne: sqrt( (x2-x1)^2 + (y2-y1)^2 )
    return sqrt( dx * dx + dy * dy );
}
