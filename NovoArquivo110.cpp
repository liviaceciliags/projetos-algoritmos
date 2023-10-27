/*
	Exemplo de como resolver o problema da mochila usando as estrat�gias da for�a bruta e programa��o din�mica.
	A principal diferen�a est� no uso da mem�ria para armazenar solu��es pr� calculadas.
*/

#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 110, maxp = 1000, maxv = 1000;

int valor[maxn], peso[maxn], volume[maxn], n, C, V;
int dp[maxn][maxp][maxv];
bool vis[maxn][maxp][maxv];

long long int forca_bruta(int i, int C) {
	// Verifica se � o �ltimo item (caso base, n�o h� mais itens para se considerar)
	if(i == n+1) return 0; 
	
	// Caso existam itens para considerar podemos:

	// (Primeira possibilidade) N�o adicionar o elemento
	int ans1 = forca_bruta(i+1, C);
	
	// (Segunda possibilidade) Adicionar o elemento caso n�o ultrapasse o limite de capacidade
	// Devemos retirar o peso do item selecionado da capacidade
	int ans2 = 0;
	if(C >= peso[i])
	   ans2 = forca_bruta(i+1, C - peso[i]) + valor[i];
	
	
	return max(ans1, ans2);
}


long long programacao_dinamica(int i, int C , int V) {
	// Verifica se � o �ltimo item (caso base, n�o h� mais itens para se considerar)
	if(i == n+1) return 0;
	
	// Caso existam itens para considerar, diferente da for�a bruta, a mem�ria (matriz dp) deve ser verificada para saber se esse c�lculo j� foi feito antes
	// Para isso, uma matriz de visita��o (vis) � utilizado para saber se a posi��o j� foi visitada anteriormente
	if(vis[i][C]) return dp[i][C][V];
	
	// Caso n�o tenha sido visitado ainda,a visita � feita:
	vis[i][C][V] = 1;
	
	// (Primeira possibilidade) N�o adicionar o elemento
	dp[i][C][V] = programacao_dinamica(i+1, C);//,V
	
	// (Segunda possibilidade) Adicionar o elemento caso n�o ultrapasse o limite de capacidade
	// Devemos retirar o peso do item selecionado da capacidade
	if(C >= peso[i] && V>= volume[i])
		dp[i][C][V]= max(dp[i][C][V], programacao_dinamica(i+1, C - peso[i], V - volume[i]) + valor[i]);
	
	return dp[i][C][V];
}

int main() {
	int C;
	int V;
	// Entrando com o n�mero de itens e a capacidade da mochila
	scanf("%d %d", &n, &C, &V);
	
	// Entrando com os pesos e os valores de cada um dos itens
	for(int i = 1; i <= n; i++)
		scanf("%d %d", &peso[i], &valor[i]);
	
	// Exibindo a solu��o por for�a bruta
	printf("%lld\n", forca_bruta(1, C));
	
	// Exibindo a solu��o por programa��o din�mica
	printf("%lld\n", programacao_dinamica(1, C, V));
	
}

/*
	Caso de teste:
	input:
	4 10
	7 42
	3 12
	4 40
	5 25
	
	output:
	65
	65

*/