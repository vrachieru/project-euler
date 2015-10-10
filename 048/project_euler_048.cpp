/*
The series, 1^1 + 2^2 + 3^3 + ... + 10^10 = 10405071317.
Find the last ten digits of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000.

Keep doing the math and only keep the last 10 digits after every multiplication.
*/

#include <iostream>
#include <cmath>
using namespace std;

long long sum = 0, limit = 1000;

long long lastDigPow(long n) {
	long long result = 1;
	for (long i=0; i<n; i++)
		(result *= n) %= 10000000000;

	return result;
}

int main(){
	while (limit!=0){
        sum += lastDigPow(limit) % 10000000000;
        limit -= 1;
	}

	cout << sum % 10000000000 << endl;

	system("pause");
	return 0;
}

/*
for(i = 1; i <= 1000; i++) {
	product = 1;
	for(j = 1; j <= i; j++)
		product = (product * i) % 10000000000ULL;  
    
	sum = (sum + product) % 10000000000ULL;    
}
*/