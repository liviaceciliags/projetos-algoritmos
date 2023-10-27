/*
recursividade
função dentro de função

fatorial
	divisão da sequencia da multiplicação

	4! = 3! x 4
	n! = (n-1! x n
*/

#include <iostream>

using namespace std;

int fatorial (int n)
{
	if  (n == 0)
		return 1;
	else 
		return n*fatorial (n-1);
	
}

int main ()
{
	int long n;
	int long long f;//fatorial de n

	
	cin >> n;
	
	f = fatorial(n);
	
	
	cout << f << endl;
	
	return 0;
}
