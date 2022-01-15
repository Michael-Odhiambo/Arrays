//
// Created by michael on 13/01/2022.
//

/**
 * Write a declaration of an array named weekend containing seven bool values. Include an initializer that makes the
 * first and last values true; all other values should be false.
 */

# include <stdio.h>
# include <stdbool.h>

int main( void ) {

    bool weekend[] = { [0] = true, [6] = true };

    for ( int i = 0; i < ( int )( sizeof( weekend ) / sizeof( weekend[0] ) ); i++ ) {
        printf( "%d\n", weekend[i] );
    }

    return 0;
}

