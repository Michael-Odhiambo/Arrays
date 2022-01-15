//
// Created by michael on 13/01/2022.
//

/**
 * This program deals a random hand of cards.
 */

# include <stdbool.h>   // C99 only.
# include <stdio.h>
# include <stdlib.h>
#include <time.h>

# define NUM_SUITS 4
# define NUM_RANKS 13

int main( void ) {
    bool inHand[ NUM_SUITS ][ NUM_RANKS ] = { false };
    int numberOfCards, rank, suit;
    const char rankCode[] = { '2', '3', '4', '5', '6', '7', '8',
                              '9', 't', 'j', 'q', 'k', 'a' };
    const char suitCode[] = { 'c', 'd', 'h', 's' };

    srand( (unsigned) time( NULL ) );

    printf( "Enter number of cards in hand: " );
    scanf( "%d", &numberOfCards );

    printf( "Your hand: " );
    while ( numberOfCards > 0 ) {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;

        if ( !inHand[ suit ][ rank ] ) {
            inHand[ suit ][ rank ] = true;
            numberOfCards--;
            printf( " %c%c", rankCode[ rank ], suitCode[ suit ] );
        }
    }
    printf( "\n" );

    return 0;

}

