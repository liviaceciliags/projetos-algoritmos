#include <iostream>

using namespace std;

int hash_aux (int k, int m)
{
	int res;
	
	res = k % m;
	if (res < 0)
		res += m;
	return res;
}

int hash1 (int k, int i, int m)
{
	return (hash_aux(k, m)+i) % m;
}

int main ()
{
	
	
	
	return 0; 
}