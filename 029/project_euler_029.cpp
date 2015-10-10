#include <iostream>
#include <cmath>
#include <set>
using namespace std;

set<double> answer; //set .insert inserts val, but only if val doesn't already exist

int main() {
	for (double a = 2; a <= 100; a++)
		for (double b = 2; b <= 100; b++)
			answer.insert (pow (a, b)); 

    cout << answer.size() << endl;

    system("pause");
    return 0;
}
