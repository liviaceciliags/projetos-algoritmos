#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int *vetor = NULL;// vetor é um ponteiro
	int *p = NULL;
	int i;
	int N;
	int s = 0;
	double media;
	
	
	cin >> N;
	
	vetor = new int[N];
	
	p = new int;
	
	p = vetor;
	
	for  ( i = 0; i < N; i ++)
	{
		cin >> *p;
		s += *p;
		p++;
	}
	
	
	media = s*1.0/ N;	
	cout << fixed << setprecision (2) << media << endl;
	/*p = vetor;

	for  ( i = 0; i < N; i ++){
		cout << *p << " ";
		p++;//aritmética de ponteiros
	}
	cout << endl;
	*/
	return 0;
}