//
// Created by michael on 13/01/2022.
//

/**
 * Calculators, watches, and other electronic devices often rely on seven-segment displays for numerical output. To
 * form a digit, such devices "turn on" some of the seven segments while leaving others "off". Suppose that we want to
 * set up an array that remembers which segments should be "on" for each digits..
 */

# include <stdio.h>

int main( void ) {

    const int segments[10][7] = { { 1, 1, 1, 1, 1, 1, 0 },
                                  { 0, 1, 1, 0, 0, 0, 0 },
                                  { 1, 1, 0, 1, 1, 0, 1 },
                                  { 1, 1, 1, 1, 0, 0, 1 },
                                  { 0, 1, 1, 0, 0, 1, 1 },
                                  { 1, 0, 1, 1, 0, 1, 1 },
                                  { 1, 0, 1, 1, 1, 1, 1 },
                                  { 1, 1, 1, 0, 0, 0, 0 },
                                  {1, 1, 1, 1, 1, 1, 1 },
                                  { 1, 1, 1, 1, 0, 1, 1 } };

}

