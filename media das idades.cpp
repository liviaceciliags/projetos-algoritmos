#include  <iostream>
using namespace std;

int main ()
{
	/*while e do while são utilizados quando não é definido o número de repetições
	ele roda até que algo ou um parametro seja falso
	while: se falso, não executara nada
	do while: roda os comando pelo menos uma vez = usado para crítica de dados
	se while não for satifeito = não vai rolar, diferentemente do do while, que vai rodar pelo menos uva vez
	*/
	int idade = -1;//numero que esta sendo lido
	int soma = 0;//somatorio dos numeros -SEMPRE FAZER ISSO
	double media; //media das idades
	int N; //numeros de idades lidas
	int i;

	cin >> N;//numeros de pessoas cujas idades serão lidas

	for (i = 0; i < N; i++)
	{
		while (idade < 0 || idade > 125)
		{
			cout << "Digite a sua idade: " << endl;
			cin >> idade;
			cout << "Idade lida corretamente. Indo pra proxima" << endl;
			soma = soma + idade;
			idade = -1;
		}
	}

	media = 1.0 * soma / N;
	cout << media << endl;
	/*do{
		soma = soma + X;
		cin >> X;
	}while (X != -1);
	*/

	//cout << soma << endl;
	return 0;
}
