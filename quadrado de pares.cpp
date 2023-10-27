#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int i;
	int N;
	int result;
	int print;
	int resultn;
	int printn;

	cin >> N;
	if (N > 5 && N < 2000)
	{
		
		for( i = 0; i < N; i++)
		{
			if ( i != 0 && i % 2 == 0)
			{
				result = pow(i, 2);
				print = sqrt(result);
				cout << print << "^2 = " <<result<< endl;
			}
		}
		if (N%2 ==0){
			resultn = pow(i, 2);
			printn = sqrt(resultn);
			cout << printn << "^2 = " <<resultn<< endl;
		}
	}
	return 0;
}

