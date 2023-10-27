#include <iostream>

using namespace std;

float media (int x, int y)
{
	return (float)(x+y)/2;;
}

int main()
{
	int x, y;
	float M;
	
	
	cin >> x >> y;
	M = media( x, y);
	
	cout << M;
	return 0;
}