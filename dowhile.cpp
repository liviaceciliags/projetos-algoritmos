#include <iostream>

using namespace std;

int main()
{
	int n;
	int soma = 0;//inicializa soma com zero;

	cin >> n; //ler um valor

	while (n != -1)//testa a condicao //verifica o valor
	{

		soma = soma + n ;//soma aculmulativa 
		cin >> n; //le um proxima valor n 
	}
	cout <<"Soma:"<<soma << endl;
	return 0;
}

/*	if (n%2==0)
			cout<<"par"<<endl;
		else
			cout<<"impar"<<endl;
		cin>>n;//checa o calor novamente*/
