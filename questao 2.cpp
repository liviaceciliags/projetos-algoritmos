#include <iostream>

using namespace std;

int main()
{
	double A, B, C; //lados do triangulo
	cin >> A >> B >> C;
	
	if ( A <= B + C && B <= A + C && C <= A + B )
	{
		if (A ==B && A == C)
			cout << "EQUILATERO"<< endl;
		else if (A != B && A != C && B != C)
			cout << "ESCALENO"<< endl;
		else 
			cout << "ISOSCELES"<< endl;
	}
	else 
		cout << "NAO FORMA TRIANGULO"<< endl;
		
		

	return 0;
}
