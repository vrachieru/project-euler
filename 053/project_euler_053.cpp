/*
	There are exactly ten ways of selecting three from five, 12345:
	123, 124, 125, 134, 135, 145, 234, 235, 245, and 345

	In combinatorics, we use the notation, (5)C_(3) = 10.
	In general, Cnk = n!/k!(n−k)!, where r ≤ n, n! = n×(n−1)×...×3×2×1, and 0! = 1.

	It is not until n = 23, that a value exceeds one-million: (23)C_(10) = 1144066.
	How many, not necessarily distinct, values of Cnk, for 1 ≤ n ≤ 100, are greater than one-million?
*/

#include <iostream>
using namespace std;

int fact(int n){
	int fact=1;
	for(int i=1; i<=n; i++)
		fact *= i;

	return fact;
}

int Cnk (int n, int k){
	return fact(n) / (fact(k) * fact(n - k));
}

int count;
int val;

int main(){
	for(int n=1; n<=100; n++){
		for(int k=1; k<=100; k++){
			
			val = Cnk(n, k);
			if (val > 1000000) count++;
		}
	}

	printf("Solution: %i", count);

	system("pause");
	return 0;
}