//
// Created by michael on 14/01/2022.
//

/**
 * Modify the repdigit.c program so that it shows which digits ( if any ) were repeated.
 */

# include <stdio.h>
# include <stdbool.h>

int main( void ) {
    int digit;
    bool digitSeen[ 10 ] = { false }, repeatedDigits[ 10 ] = { false };
    long theNumber;

    printf( "Enter a number: " );
    scanf( "%ld", &theNumber );

    while ( theNumber > 0 ) {
        digit = theNumber % 10;
        if ( digitSeen[ digit ] )
            repeatedDigits[ digit ] = true;
        else
            digitSeen[ digit ] = true;
        theNumber /= 10;
    }

    printf( "Repeated digit(s): " );

    for ( int i = 0; i < ( int )( sizeof( repeatedDigits ) / sizeof( repeatedDigits[0] ) ); i++ )
        if ( repeatedDigits[ i ] )
            printf( "%d ", i );
    printf( "\n" );

    return 0;


}

