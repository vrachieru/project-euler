/*
Surprisingly there are only three numbers that can be written as the sum of fourth powers of their digits:

    1634 = 1^(4) + 6^(4) + 3^(4) + 4^(4)
    8208 = 8^(4) + 2^(4) + 0^(4) + 8^(4)
    9474 = 9^(4) + 4^(4) + 7^(4) + 4^(4)

As 1 = 1^(4) is not a sum it is not included.

The sum of these numbers is 1634 + 8208 + 9474 = 19316.

Find the sum of all the numbers that can be written as the sum of fifth powers of their digits.
*/

#include <iostream>
#include <math.h>

using namespace std;

int pow5(int num){
	int sum = 0;
	char num_s[10];
	for(int i=0; i<strlen(itoa(num, num_s, 10)); i++)
		sum += pow((num_s[i]-'0'), 5.0);
	
	return (sum == num);
}

int i=2, sum=0;

int main(){
	while (i < 999999){ //443840
		if (pow5(i)){
			sum += i;
			printf("%i, ", i);
		}
		i++;
	}

	printf("Solution: %i\n\n", sum);

	system("pause");
	return 0;
}