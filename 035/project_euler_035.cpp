#include <iostream>
using namespace std;

int answer;

bool isPrime(int n){
	for (int i=2; i<=n/2; i++)
		if (n%i != 0) return false;
	
	return true;
}

bool isCircularPrime(int n){
	if(!isPrime(n))
		return false;

	return true;

}



int main(){
	for (int i=0; i<1000000; i++)
		if (isCircularPrime(i))
			answer++;

	cout << answer << endl;

	system("pause");
	return 0;
}