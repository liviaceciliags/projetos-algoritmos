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
