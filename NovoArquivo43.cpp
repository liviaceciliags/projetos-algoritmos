#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void media(int x, int y, float &m)
{
	m = sqrt(x*y);
}

int main(){
	
	int x, y; 
	float m; 
	cin >> x >> y; 
	
	if (x >= 0 && y >= 0)
	{
		media (x,y,m);
		cout << fixed << setprecision (2) <<"Media: " << m << endl;
	}
	return 0; 
}