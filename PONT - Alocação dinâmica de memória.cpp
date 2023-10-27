#include <iostream>
#include <iomanip>

using namespace std;

struct dado
{
	int N1, N2, N3, N4, nota;
	double media;
};


int main ()
{
	//chamando a struct para o ponteiro info
	dado *info = NULL;

	info = new dado;

	int s = 0; // variavel para armazenar a soma das notas;

	//lendo as 4 notas

	for (int i = 0; i < 4; i++)
	{
		cin >> info->nota;
		s += info->nota;
	}
	
	info->media=(1.0)*s/4;

	cout <<fixed << setprecision(2) << info->media << endl;
}
