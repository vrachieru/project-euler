/*
	Starting in the top left corner of a 2×2 grid, there are 6 routes (without backtracking) to the bottom right corner.
	How many routes are there through a 20×20 grid?
*/

#include <iostream>
using namespace std;

long long int matrix[21][21];

int main(){
	for(int i=0; i<=20; i++) {
		matrix[20][i] = 1;
		matrix[i][20] = 1;
	}

	for(int i=19; i>=0; i--){ 
		for(int j=19; j>=0; j--){
			matrix[i][j] = matrix[i+1][j] + matrix[i][j+1];
		}
	}

	printf("Solution: %lld\n\n", matrix[0][0]);

	system("pause");
	return 0;
}