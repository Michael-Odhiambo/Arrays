//
// Created by michael on 13/01/2022.
//

/**
 * The fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13,..., where each number is the sum of the two preceding numbers.
 * Write a program fragment that declares an array named fibNumbers of length 40 and fills the array with the first
 * 40 Fibonacci numbers.
 */

# include <stdio.h>

# define ARRAY_SIZE 40

int main( void ) {

    int firstFortyFibonacciNumbers[ ARRAY_SIZE ];
    int firstNumber = 0, secondNumber = 1;

    firstFortyFibonacciNumbers[ firstNumber ] = 0;
    firstFortyFibonacciNumbers[ secondNumber ] = 1;

    for ( int i = 2; i < ARRAY_SIZE; i++ )
        firstFortyFibonacciNumbers[i] = firstFortyFibonacciNumbers[ i - 1 ] + firstFortyFibonacciNumbers[ i - 2 ];

    // Display the numbers.
    for ( int i = 0; i < ARRAY_SIZE; i++ )
        printf( "%d, ", firstFortyFibonacciNumbers[ i ] );

    printf( "\n" );

    return 0;


}

