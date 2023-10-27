#include <iostream>

using namespace std;

int hash_aux(int k, int m)
{
	int res;
	res = k % m;
	if (res < 0 )
		res += m;
	return res; 
}

int hash2(int k, int i, int m, int c1, int c2)
{
	return (hash_aux(k, m)+c1*i+c2*i*i)% m;
}
int main (){
	
	int k;
 	int m;
 	int i;
 	int c1;
 	int c2;
 	
 	cin >> k;
    cin >> m;
    cin >> c1;
    cin >> c2;
	
	for (i = 0; i < m; i++)
		cout << hash2( k, i, m, c1, c2)	<< " ";
 	
	 
	 return 0;
}