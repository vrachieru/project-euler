/*
	Find the greatest product of five consecutive digits in the 1000-digit number.
	The number is in the file 'number.dat'
*/

#include <iostream>
#include <fstream>

using namespace std; 

int index, digits[1000], temp = 1, max_start_index, max_product;

int main(){
	ifstream number_file( "number.dat" );

	// read all the characters into an int array
	int i = 0;
	while(!number_file.eof()){
		if(number_file.peek() == '\n') number_file.get();
		else digits[ i++ ] = number_file.get() - '0';
	}
	number_file.close();	
	
	i = 0;
	while(i <= 995){
		for (int j=0; j<5; j++)
			temp *= digits[ i + j ];	
		
		if (temp > max_product){
			max_product = temp;
			max_start_index = i;
		}
		i++; temp = 1;
	}	

	printf("   Solution: %i\n", max_product);
	printf("Start index: %i\n", max_start_index);
	printf(" The digits: "); for (i=0; i<5; i++) printf("%i ", digits[max_start_index+i]); printf("\n\n");

	system("pause");
	return 0;
}
