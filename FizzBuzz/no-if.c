#include <stdio.h>

int main()
{
	int MAX = 20;
	char *out[] = { "FizzBuzz\n", "%d\n", "%d\n", "Fizz\n", "%d\n", "Buzz\n", "Fizz\n", "%d\n", "%d\n", "Fizz\n", "Buzz\n", "%d\n", "Fizz\n", "%d\n", "%d\n" };
	int i;

	for ( i = 1 ; i <= MAX ; ++i ) { printf( out[ i % 15 ], i ); }

	return 0;
}
