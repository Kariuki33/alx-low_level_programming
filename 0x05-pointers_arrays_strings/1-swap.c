#include "main.h"

/**
 * swap_int - function that swaps the values of two intergers.
 * @a: this is the first entry
 * @b: this si the second entry
 *
 *
 */
void swap_int(int *a, int *b);
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
