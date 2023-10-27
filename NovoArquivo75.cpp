#include <iostream>

using namespace std;

int soma (int x, int y, int &s)
{
	s = x + y;
	return 0;
}

int main()
{
	int x, y, s;

	x = 2;
	y = 3 ;
	soma(x, y, s);

	cout << "s = " << s << endl;



	return 0;
}
