#include <iostream>
using namespace std;

const int n=101, m=99;
int arr[n][m];
int denom[m];// ={1, 2, 3, 4};

/*
c#	
public int f(int n, int maxn) {
   int count = 1;  // for 1+1+1...
   for (int i = 2; i <= Math.Min(maxn, n); i++) {
      count += f(n-i,i);
   }
   return count;
}

f(100, 99);
*/

//PE 31
int main(){
    for(int t=0; t<m;t++)
	    denom[t] = t+1;

    for(int a=0; a<n; a++)
	    for(int b=0; b<m; b++)
		    arr[a][b] = 1;
 
	for(int i=1; i<n; i++){
		for(int j=1; j<m; j++){
			if(i-denom[j] >=0)
				arr[i][j] = arr[i][j-1]+arr[i-denom[j]][j];
			else
				arr[i][j] = arr[i][j-1];
		}
	}

    cout << arr[n-1][m-1] << endl; 

	system("pause");
	return 0;
}