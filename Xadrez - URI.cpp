877#include <iostream>

using namespace std;

int main ()
{
	int C, L;
	cin >> L >> C;
	if (1 <= L  && L <= 1000 && 1 <= C && C <= 1000)
	{
		if (C == L)
			cout << "1" << endl;
		else if ((C + L) % 2 == 0 )
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
return 0;
}
