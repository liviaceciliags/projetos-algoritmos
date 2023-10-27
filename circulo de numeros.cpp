#include <iostream>

using namespace std;

int main()
{
	int N, X, result;

	cin >> N >> X;

	if (4 <= N && N <= 20 && 0 <= X && X <= N)
	{
		result = N / 2 + X;
		if (result < N)
			cout << result << endl;
		else
		{
			result = N / 2 - X;
			result = result * -1;
			cout << result << endl;
		}

	}
	return 0;
}
