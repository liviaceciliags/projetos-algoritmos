#include <iostream>

using namespace std;

int main()
{
	int x;//le dados
	int n; //quantidade de numeros
	int soma; //soma dos dados
	int i; //contador
	float media;

	cin >> n; //lendo quantidade de numeros

	//lendo e  verificando somando n numeros
	soma = 0;
	
	for (i = 0; i < n; i++)
	{
		cin >> x;
		soma = soma + x;
	}
	
	//calculando a media
	media = (float)soma / n;
	
	cout << soma << endl;
	cout << media << endl;
	
	return 0;

}


/*int i;
int n = 5;
for (i=0;i<n;i++)
	cout << "i = " << i << endl;*/
