#include <iostream>

using namespace std;

int main()
{
	int x1, x2, x3;
	double V1, V2, V3;

	cin >> x1 >> x2 >> x3;

	if (x1 != x2 && x2 != x3 && x3 != x1)
	{

		V1 = 10 * x1 - (4 / 3) * x1;
		V2 = 10 * x2 - (4 / 3) * x2;
		V3 = 10 * x3 - (4 / 3) * x3;

		if (V1 > V2 && V1 > V3)
			cout << "Moto 1" << endl;
		else if(V1 < V2 && V2 > V3)
			cout << "Moto 2" << endl;
		else if(V1 < V3 && V2 < V3)
			cout << "Moto 3" << endl;

	}
	return 0;

}
