#include <iostream>
#include <iomanip>  nnnn                                                                                                          jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjh

using namespace std;

int main ()
{
	int N;//tamanho do vetor
	int i;//contador

	int *vetor = NULL;
	int *p = NULL;
	int s = 0;
	double media;
	cin >> N;

	vetor = new int[N];

	p = new int;
	p = vetor;

	for (i = 0; i < N; i ++)
	{
		cin >> *p;
		s += *p;
		p++;
	}
	media = s*1.0/N;
	cout << fixed << setprecision (2) << media << endl;
}
