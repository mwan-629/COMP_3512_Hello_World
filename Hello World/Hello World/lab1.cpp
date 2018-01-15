#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b){

    int greatest{1};
	int a_factor;
	int b_factor;
	// Replace this line with your code (have fun!).

    for (int i = 1 ; i < a; i++) {
		if (a % i == 0) {
			a_factor = a / i;
		}
		else {
			continue;
		}
        for (int j = 1; j < b; j++) {
			if (b % j == 0) {
				b_factor = a / j;
			}
			else {
				continue;
			}
			if (a_factor == b_factor && a_factor > greatest) {
				greatest = a_factor;
			}
        }
    }
    

	return greatest;

}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	// Replace this line with your code (challenge: do this with recursion!).
	if (n == 2|| n == 1) {
		return 1;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}
