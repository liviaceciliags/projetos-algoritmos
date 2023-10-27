#include <iostream>
#include <cmath>

using namespace std;

int hash_aux(int k, int m)
{
	int res;

	res = (k % m);
	if (res < 0 )
		res += m;

	return res;
}

int hash2(int k, int i, int m, int c1, int c2)
{
	return (hash_aux(k, m) + c1 * i + c2 * (int)pow(i, 2)) % m;
}
int main ()
{

	int k, m, i = 0, c1, c2, res;


	cin >> k;
	cin >> m;
	cin >> c1;
	cin >> c2;

	for (i = 0; i < m ; i++)
	{
		res = hash2(k, i, m, c1, c2);
		cout << res << " " ;
	}





	return 0;
}
