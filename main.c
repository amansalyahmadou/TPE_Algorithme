#include <stdio.h>
#include <stdlib.h>
#include "bibliotheque.h"

int main( void ) {
    int result;

    // Appels aux fonctions initiales (fact et power)
    result = power( 2, 3 );
    printf( "2^3 == %d\n", result );
    result = fact( 6 );
    printf( "6! == %d\n", result );

    // 5. Appel à la fonction permutation
    int x = 10, y = 20;
    printf( "\nAvant permutation: x = %d, y = %d\n", x, y );
    // On passe les adresses (&x et &y) des variables à la fonction
    permutation( &x, &y );
    printf( "Après permutation: x = %d, y = %d\n", x, y );

    // 7. Appels aux fonctions des exercices 7, 12a et 13

    // Exercice 7 (Algorithmique): Résolution d'une équation du second degré
    double a = 1.0, b = -3.0, c = 2.0; // x^2 - 3x + 2 = 0 -> solutions 1 et 2
    double x1, x2;
    int num_solutions = solve_quadratic( a, b, c, &x1, &x2 );
    printf( "\nTest Exercice 7 (Équation du second degré: %.1fx^2 + %.1fx + %.1f = 0):\n", a, b, c );
    if ( num_solutions == 2 ) {
        printf( "Deux solutions réelles: x1 = %.2f et x2 = %.2f\n", x1, x2 );
    } else if ( num_solutions == 1 ) {
        printf( "Une solution réelle (double): x = %.2f\n", x1 );
    } else if ( num_solutions == 0 ) {
        printf( "Aucune solution réelle.\n" );
    } else if ( num_solutions == -1 ) {
        printf( "Infinité de solutions (0=0).\n" );
    }

    // Exercice 12a (Algorithmique): Vérifie si un nombre est premier
    int prime_num = 17;
    printf( "\nTest Exercice 12a (Nombre Premier):\n" );
    if ( is_prime( prime_num ) ) {
        printf( "%d est un nombre premier.\n", prime_num );
    } else {
        printf( "%d n'est pas un nombre premier.\n", prime_num );
    }

    // Exercice 13 (Programmation C): Distance entre deux points
    Point pA = { 1.0, 1.0 };
    Point pB = { 4.0, 5.0 }; // Distance = sqrt((4-1)^2 + (5-1)^2) = sqrt(9 + 16) = 5.0
    double distance = distance_points( pA, pB );
    printf( "\nTest Exercice 13 (Distance entre deux points):\n" );
    printf( "Point A(%.1f, %.1f), Point B(%.1f, %.1f)\n", pA.x, pA.y, pB.x, pB.y );
    printf( "La distance entre A et B est : %.2f\n", distance );

    return EXIT_SUCCESS;
}