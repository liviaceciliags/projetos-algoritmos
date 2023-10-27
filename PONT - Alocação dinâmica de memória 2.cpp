#include <iostream>
#include <iomanip>

using namespace std;

struct dado {
	int n1, n2, n3, n4;
	double media;	
};

int main()
{
	dado *info = NULL;
	int s = 0; //armazena a soma das notas
	int i; //cont aux
	int aux; //pra soma
	int N; //armazena o numero de alunos
	
	cin >> N; //lendo a quantidade de alunos
	
	info = new dado[N];
	
	for(i = 0; i < N; i++)
		{
			cin >>info[i].n1;
			cin >>info[i].n2;
			cin >>info[i].n3;
			cin >>info[i].n4;
			s = s + info[i].n1 + info[i].n2 + info[i].n3 + info[i].n4;
		}
	
	aux = 4*N;
	
	info[N].media = (1.0)*s/aux;
	
	cout << fixed << setprecision(2) << info[N].media << endl;
	
	delete info;//libera só uma posição do vetor
}