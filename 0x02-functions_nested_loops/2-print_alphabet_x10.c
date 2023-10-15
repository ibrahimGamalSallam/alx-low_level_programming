#include <stdio.h>
#include "main.h"
/*
 *printing alphabet 10 times
 */
void print_alphabet_x10(void) {
	int j;
    for (j = 0; j < 10; j++) {
        print_alphabet();
    }
}
