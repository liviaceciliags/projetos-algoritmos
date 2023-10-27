#include <iostream>
#include <iomanip>

using namespace std;

int fatorial(int n)
{
	int i;
	double f = 1;
	for (i = 1; i <= n; i++)
		f *= i; 
	return f;
}
int main()

{
	int n;
	int fat;
	cin >> n; 
	
	fat = fatorial(n);
	
	cout << fat << endl;
	return 0;
}
