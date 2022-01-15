//
// Created by michael on 14/01/2022.
//

/**
* Modify the repdigit.c program so that it prints a table showing how many times each digit appears in the number.
*/

# include <stdio.h>

int main( void ) {

    int digitCount[10] = { 0 }, digit;
    long theNumber;

    printf( "Enter a number: " );
    scanf( "%ld", &theNumber );

    for ( int i = 0; i < ( int )( sizeof( digitCount ) / sizeof( digitCount[ 0 ] ) ); i++ )
        printf( "%5d ", i );
    printf( "\n" );

    while ( theNumber > 0 ) {
        digit = theNumber % 10;
        digitCount[ digit ]++;

        theNumber /= 10;
    }

    for ( int i = 0; i < ( int )( sizeof( digitCount ) / sizeof( digitCount[ 0 ] ) ); i++ )
        printf( "%5d ", digitCount[ i ] );
    printf( "\n" );

    return 0;
}