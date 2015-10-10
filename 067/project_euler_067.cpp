#include <iostream>
#include <ctime>
#include <fstream>

#define ROWS 100
using namespace std;

int main() 
{
    clock_t start = clock();
    int total = 0;
    unsigned int numbers[ROWS][ROWS];
    ifstream fi;

    fi.open("pyramid.txt");

    for (int l=0;l<ROWS;l++) 
        for (int n=0;n<l+1;n++) 
            fi >> numbers[l][n];

    fi.close ();

	for (int l=ROWS - 2;l>=0;l--) 
        for (int n=0;n<l+1;n++) 
            if (numbers[l+1][n]>numbers[l+1][n+1]) 
                numbers[l][n]+=numbers[l+1][n]; 
            else numbers[l][n]+=numbers[l+1][n+1];

    cout << numbers[0][0] << endl 
         << "Process took " << (static_cast<double> (clock()) - start) / CLOCKS_PER_SEC << " seconds." << endl;
    
	system("pause");
    return 0;
}
