/*
Working from left-to-right if no digit is exceeded by the digit to its left it is called 
an increasing number; for example, 134468.Similarly if no digit is exceeded by the digit 
to its right it is called a decreasing number; for example,66420.

We shall call a positive integer that is neither increasing nor decreasing a "bouncy" 
number; for example, 155349.

Clearly there cannot be any bouncy numbers below one-hundred, but just over half of the 
numbers below one-thousand (525) are bouncy. In fact, the least number for which the 
proportion of bouncy numbers first reaches 50% is 538.

Surprisingly, bouncy numbers become more and more common and by the time we reach 21780 
the proportion of bouncy numbers is equal to 90%.

Find the least number for which the proportion of bouncy numbers is exactly 99%.
*/
#include <iostream>
using namespace std;

bool isBouncy(double n){
	bool inc=false, dec=false;
	char num[100];

	itoa(n, num, 10);

	for (int i=0; i<=strlen(num)-1; i++){
		if (num[i+1] > num[i]) inc=true;
		else if (num[i+1] < num[i]) dec=true;
	}

	if (inc && dec) return true;
	else return false;
}

double b, n;

int main(){
	while (b/n != .99){
		n++;
		cout << n << " " << b/n << endl;
		if (isBouncy(n)) b++;
	}

	cout << b/(n-1) << " " << n << endl;

	system("pause");
	return 0;
}