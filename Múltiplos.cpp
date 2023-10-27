#include <iostream>

using namespace std;

int main()
{
	int X, Y, Z;
	cin >> X >> Y;

	if (X >= Y)
	{
		Z = X % Y;

		if (Z == 0)
			cout << "Sim" << endl;

		else 
			cout << "Nao" << endl;
	}
	return 0;
}
