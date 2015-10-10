/*
In England the currency is made up of pound, �, and pence, p, and there are eight coins in general circulation:
	1p, 2p, 5p, 10p, 20p, 50p, �1 (100p) and �2 (200p).

It is possible to make �2 in the following way:
	1ף1 + 1�50p + 2�20p + 1�5p + 1�2p + 3�1p

How many different ways can �2 be made using any number of coins?
*/

#include <iostream>
using namespace std;

int count = 0;

int main(){
	for (int a = 0; a <= 200; a += 200)
		for (int b = 0; a + b <= 200; b += 100)
			for (int c = 0; a + b + c <= 200; c += 50)
				for (int d = 0; a + b + c + d <= 200; d += 20)
					for (int e = 0; a + b + c + d + e <= 200; e += 10)
						for (int f = 0; a + b + c + d + e + f <= 200; f += 5)
							for (int g = 0; a + b + c + d + e + f + g <= 200; g += 2)
								for (int h = 0; a + b + c + d + e + f + g + h <= 200; h++)
									if (a + b + c + d + e + f + g + h == 200)
										count++;

	cout << count << endl;

	system("pause");
	return 0;
}