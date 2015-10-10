/*
	145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.
	Find the sum of all numbers which are equal to the sum of the factorial of their digits.
	Note: as 1! = 1 and 2! = 2 are not sums they are not included.
*/

#include <iostream>
using namespace std;

int curious(int num){
	int fact=1, sum=0;
	char num_s[10]; itoa(num, num_s, 10);

	for(int i=0; i<strlen(num_s); i++){
		for(int j=1; j<=(int)(num_s[i]-'0'); j++)
			fact *= j;
		sum += fact; fact = 1;
	}

	return (num == sum);
}

int i=3, sum=0;

int main(){
	while(i < 50000){
		if(curious(i)){
			sum += i;
			printf("%i | ", i);
		}
		i++;
	}

	printf("\n\nSolution: %i\n", sum);

	system("pause");
	return 0;
}