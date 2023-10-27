#include <iostream>
using namespace std;



int main()
{
	int N;
	int i;
	int p;
	int s;
	int t;

	cin >> N;
	
	if (N == 1)
		cout << 0 << endl;
	else if ( N == 2)
		cout << 0 << " " << 1 << endl;
	else
	{
		cout << 0 << " " << 1 << "  ";
		p = 0;
		s = 1;
		t = p + s;
		cout << t << " ";

		for ( i = 3; i < N; i ++)
		{
			p = s;
			s = t;
			t = p + s;
			cout << t << " ";
		}
		cout << endl;
	}
	
	return 0;
}
