#include <iostream>

using namespace std;


long long int fib[1000];
for (int  i = 0;  i <1000; i++)
	fib[i]= -1;

fib[0] = 0;
fib[1] = 1;

long  long int fib(int n)
{
	if fib[n] != 1;
	return fib[n];
	if (n == 0)
		return 0;
	if ( n == 1)
		return 1;
	fib[n] = fib(n - 1) + fib(n - 2);

	return[n];
}

int main()
{

	int n;
	int f;

	cin >> n;

	f = fib(n);

	cout << f << endl;
	return 0;
}





