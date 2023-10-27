#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int fatorial_n(int n, long int f)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		f = f * i;
	}
	return f;
}
int fatorial_p(int p, long int f)
{
	int i;
	for (i = 1; i <= p; i++)
	{
		f = f * i;
	}
	return f;
}
int fatorial_np(int p, int n, long int f)
{
	int i;
	for (i = 1; i <= n - p; i++)
	{
		f = f * i;
	}
	return f;
}
int fatorial_y(int y, long int f)
{
	int i;
	for (i = 1; i <= y; i++)
	{
		f = f * i;
	}
	return f;
}
void exp (int n, int p, double &res){
	
	res = pow(n, p+2);
	
}

int main()
{
	int n, p, x, y;
	long int f = 1, fat_n, fat_p, fat_np, fat_y;
	double f1, f2, f4, res;
	cin >> n >> p >> x >> y;

	fat_n = fatorial_n(n, f);
	fat_p = fatorial_p(p, f);
	fat_np = fatorial_np( p,n, f);
	fat_y = fatorial_y( y, f);
	
	f1 = (fat_n/(fat_p *fat_np));
	f2 = (fat_n/(fat_np));
	f4 = pow(x-1, fat_y);
	
	cout << fixed << setprecision(4);
	cout << f1 << endl;
	cout << f2 << endl;
	exp ( n, p, res);
	cout << res << endl;
	cout << f4 << endl;
	return 0;
}





