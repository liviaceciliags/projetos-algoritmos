#include <iostream>

using namespace std;

int main()
{
	int A, B, C, CO;

	cin >> A >> B >> C >> CO;

	switch (CO)
	{
	case 1:
		if  (A > B && A > C && B > C)
			cout << C <<" "<< B <<" "<< A;
		else if  (A > B && A > C && B < C)
			cout << B <<" "<< C <<" "<< A;
		else if  (B > A && B > C && A > C)
			cout << C <<" "<< A <<" "<< B;
		else if  (B > A && B > C && A < C)
			cout << A <<" "<< C <<" "<< B;
		else if  (C > A && C > B && A > B)
			cout << B <<" "<< A <<" "<< C;
		else
			cout << A <<" "<< B <<" "<< C;
		break;
	case 2:
		if  (A > B && A > C && B > C)
			cout << A <<" "<< B <<" "<< C;
		else if  (A > B && A > C && B < C)
			cout << A <<" "<< C <<" "<< B;
		else if  (B > A && B > C && A > C)
			cout << B <<" "<< A <<" "<< C;
		else if  (B > A && B > C && A < C)
			cout << B <<" "<< C <<" "<< A;
		else if  (C > A && C > B && A > B)
			cout << C <<" "<< A <<" "<< B;
		else
			cout << C <<" "<< B <<" "<< A;
		break;

	default:
		cout << "Erro!" << endl;
		break;
	}
	return 0;
}
