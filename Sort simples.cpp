#include <iostream>

using namespace std;

int main()
{
	int A, B, C;

	cin >> A >> B >> C;


	if  (A > B && A > C && B > C)
	{
		cout << C << endl << B << endl << A << endl << endl;
		cout << A << endl;
		cout << B << endl;
		cout << C << endl;
	}
	else if  (A > B && A > C && B < C)
	{
		cout << B << endl << C << endl << A << endl << endl;
		cout << A << endl;
		cout << B << endl;
		cout << C << endl;
	}
	else if  (B > A && B > C && A > C)
	{
		cout << C << endl << A << endl << B << endl << endl;
		cout << A << endl;
		cout << B << endl;
		cout << C << endl;
	}
	else if  (B > A && B > C && A < C)
	{
		cout << A << endl << C << endl << B << endl << endl;
		cout << A << endl;
		cout << B << endl;
		cout << C << endl;
	}
	else if  (C > A && C > B && A > B)
	{
		cout << B << endl << A << endl << C << endl << endl;
		cout << A << endl;
		cout << B << endl;
		cout << C << endl;
	}
	else
	{
		cout << A << endl << B << endl << C << endl << endl;
		cout << A << endl;
		cout << B << endl;
		cout << C << endl;
	}
	return 0;
}
