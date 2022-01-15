//
// Created by michael on 13/01/2022.
//

/**
* This program reverses a series of numbers.
*/

# include <stdio.h>

# define ARRAY_SIZE 10

int main( void ) {
    int numbersArray[ ARRAY_SIZE ], i;

    printf( "Enter %d numbers: ", ARRAY_SIZE );
    for ( int i = 0; i < ARRAY_SIZE; i++ )
        scanf( "%d", &numbersArray[i] );

    printf( "In reverse order: " );
    for ( int i = ARRAY_SIZE - 1; i >= 0; i-- )
        printf( "%d ", numbersArray[i] );
    printf( "\n" );

    return 0;

}