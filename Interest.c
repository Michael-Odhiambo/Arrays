//
// Created by michael on 13/01/2022.
//

/**
 * This program prints a table of compound interest.
 */

# include <stdio.h>

# define NUM_RATES ( ( int ) ( sizeof( value ) / sizeof( value[0] ) ) )
# define INITIAL_BALANCE 100.00

int main( void ) {

    int i, lowerRate, numberOfYears, year;
    double value[5];

    printf( "Enter interest rate: " );
    scanf( "%d", &lowerRate );

    printf( "Enter number of years: " );
    scanf( "%d", &numberOfYears );

    printf( "\nYears" );
    for ( int i = 0; i < NUM_RATES; i++ ) {
        printf( "%6d%%", lowerRate + i );
        value[i] = INITIAL_BALANCE;
    }
    printf( "\n" );

    for ( year = 1; year <= numberOfYears; year++ ) {
        printf( "%3d      ", year );
        for ( i = 0; i < NUM_RATES; i++ ) {
            value[i] += ( lowerRate + i ) / 100.0 * value[i];
            printf( "%7.2f", value[i] );
        }
        printf( "\n" );
    }

    return 0;
}
