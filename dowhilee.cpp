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
	int X = 0;//numero que esta sendo lido
	int soma = 0;//somatorio dos numeros -SEMPRE FAZER ISSO

	cin >> X;

	do {
		soma = soma + X;
		cin >> X;
	}while (X != -1);
	
	cout << soma << endl;
	return 0;
}
