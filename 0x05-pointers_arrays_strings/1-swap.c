/**
 * swap_int - swaps the values of the parameters
 * @a: first parameter
 * @b: second parameter
 * Return: void
 */

void swap_int(int *a, int *b){

	int temp = *a;
	*a = *b;
	*b = temp;
}
