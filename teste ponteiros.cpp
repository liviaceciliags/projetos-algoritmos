#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	
	int *vetor = NULL;
	int *p = NULL;
	
	int i;
	int N;
	float maior = 0;
	
	cin >> N;
	
	vetor = new int[N];
	p = new int;
	
	p = vetor;
	
	for (i = 0; i < N; i++)
	{
		cin >> *p;
		p++;
	}
	
	p = vetor;
	
	for (i = 0; i < N; i++)
	{
		if (*p%2 == 0 && *p>= 0)
			maior++;
		p++;
	}
	
	cout << maior << endl;
	return 0;
}
