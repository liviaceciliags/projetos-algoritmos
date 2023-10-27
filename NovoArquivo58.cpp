#include <iostream>
#include <iomanip>

using namespace std;

float raiz ( float x, float xo, float e)
{
	float aux;
	aux = xo * xo - x;
	if ( aux < 0)
		aux = aux * (-1);
	if (aux <= e)
		return xo;
	else
		return raiz(x, (xo * xo + x) / (2*xo), e);
}


int main ()
{


	float x, xo, e, res;
	
	cin >> x;
	cin >> xo;
	cin >> e;

	res  = raiz(x, xo, e);

	cout << fixed << setprecision(4);
	cout << res << endl;

	return 0;
}

/*if (pow(xo,2) - 1 <= e)
		return xo;
	else
		return raiz(x, ((pow(xo, 2)+ x)/ 2*xo), e);
		*/
