#include <iostream>
#include <cmath>
using namespace std;

double blue=15, total=21, temp=0;
char buffer[100];

int main(){
    while (total < pow((double)10, (double)12)){
		temp = blue;
		blue = 3 * blue + 2 * total - 2;
		total = 4 * temp + 3 * total - 3;
    }

	cout << itoa(blue, buffer, 10) << endl;

	system("pause");
	return 0;
}