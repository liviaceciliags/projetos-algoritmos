#include <iostream>

using namespace std;

int menor (int *vetor, int N)
{
	
}
int main()
{
	int *vetor = NULL;// vetor � um ponteiro
	int *p = NULL;
	int i;
	int N;
	
	cin >> N;
	
	vetor = new int[N];
	
	p = new int;
	
	p = vetor;
	
	for  ( i = 0; i < N; i ++)
	{
		cin >> *p;
		p++;
	}
		
	
	p = vetor;

	for  ( i = 0; i < N; i ++){
		cout << *p << " ";
		p++;//aritm�tica de ponteiros
	}
	cout << endl;
	
	return 0;
}