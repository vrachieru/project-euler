#include <stdio.h>
#include <math.h>

typedef long int lint;

lint gen(int n) {
	return 1 - n + pow(n, 2) - pow(n, 3) + pow(n, 4) - pow(n, 5) + pow(n, 6) - pow(n, 7) + pow(n, 8) - pow(n, 9) + pow(n, 10);
}

lint next_term(lint terms[], int size) {
	lint term = terms[size-1];

	while(size > 1) {
		lint buffer[--size];
		for(int i = 0; i < size; i++) {
			buffer[i] = terms[i+1] - terms[i];
		}
		term += buffer[size-1];
		for(int i = 0; i < size; i++) {
			terms[i] = buffer[i];
		}
	}
	return term;
}

int main() {
	lint result = 0;
	for(int i = 0; i < 10; i++) {
		lint terms[i+1];
		for(int j = 1; j < i+2; j++) {
			terms[j-1] = gen(j);
		}
		result += next_term(terms, i+1);
	}
	printf("%ld\n", result);
	
	return 0;
}