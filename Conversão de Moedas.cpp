#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	double P, R;
	int C;

	cin >> P >> C;
	cout << fixed << setprecision(2);
	switch (C)
	{
	case 1:
		R = 3.86 * P;
		cout << "R$ " << R << endl;
		break;
	case 2:
			R = 3.77*P;
			cout<<"R$ "<< R <<endl;
			break;
		case 3:
			R = 4.41*P;
			cout<<"R$ "<< R <<endl;
			break;
		case 4:
			R = 0.19*P;
			cout<<"R$ "<< R <<endl;
			break;
		case 5:
			R = 5.00*P;
			cout<<"R$ "<< R <<endl;
			break;
		default:
			cout<<"Codigo Invalido!"<<endl;
			break;
	}
	return 0;
}
