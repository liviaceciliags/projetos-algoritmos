#include  <iostream>
using namespace std;

int main ()
{
	/*while e do while s�o utilizados quando n�o � definido o n�mero de repeti��es
	ele roda at� que algo ou um parametro seja falso
	while: se falso, n�o executara nada
	do while: roda os comando pelo menos uma vez = usado para cr�tica de dados
	se while n�o for satifeito = n�o vai rolar, diferentemente do do while, que vai rodar pelo menos uva vez
	*/
	int idade = -1;//numero que esta sendo lido
	int soma = 0;//somatorio dos numeros -SEMPRE FAZER ISSO
	double media; //media das idades
	int N; //numeros de idades lidas
	int i;

	cin >> N;//numeros de pessoas cujas idades ser�o lidas

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
