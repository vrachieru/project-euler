#include <iostream>
using namespace std;

int abundant[28123], ac, sum, as=0;

int divsum(int n){
	int s=1;
	for (int i=2; i<=n/2; i++)
		if(n%i==0) s+=i;

	return s;
}


int main(){
	for(int i=0; i<=28123; i++) // 12 = smallest abundant number
		if(i<divsum(i)) abundant[ac++] = i;

	for(int i=0; i<=32182; i++){
		for(int a=0; a<ac; a++){
			for(int b=0; b<ac; b++)
				if(abundant[a]+abundant[b] == i){ as=1; continue; }
			if (as) continue;
		}

		if(!as)	cout << (sum += i) << " "; as=0;
	}

	cout << sum << endl;

	system("pause");
	return 0;
}