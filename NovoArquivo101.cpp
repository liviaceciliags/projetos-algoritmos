//nao orientado
#include <iostream>
#include <list>
using namespace std;


struct no
{
	int v; // destino
	int p; //peso

};

void cria_areta(list<no>adj[], int u, int v, int p, int orientado)
{
	no aux; //struct aux p/ inserir as arestas
	//list <no>::iterator q; //iterator p/ mostrar a lsita de adjacencias
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux);
	//aresta da volta
	if (orientado == 0)
	{
		aux.v = u;
		adj[v].push_back(aux);
	}
}

// Implementa um percurso em largura em um grafo
// Implementa um percurso em largura em um grafo
void bfs(list<no>adj[], int nVertices, int s)
{
	list<no>::iterator q; // iterador para varrer a lista de adjacências
	list<int> Q;
	char state[10]; // u: não descoberto, d: descoberto, p: processado
	int p[nVertices]; // vertice pai, será atribuido -1 quando não tiver pai
	int u; // vertice de origem
	int v; // vertice de destino
	int aux; // aux p/ verificar se é conexo
 	int i;
	for( i = 0; i < nVertices; i++)
	{
		state[i] = 'u';
		p[i] = -1;
	}

	state[s] = 'd';// o primeiro vertice é definido como descoberto
	p[s] = -1;
	Q.push_back(s); // adiciona o vertice inicial na fila
	while(!Q.empty())
	{
		u = *Q.begin();// u passa a valer o primeiro número da fila
		Q.pop_front(); // retira o primeiro elemento da fila
		//cout << u << endl;
		for(q = adj[u].begin(); q != adj[u].end(); q++)
		{
			v = q->v;
			//cout << u << " " << v << endl;
			//se o status de v for zero:
			if(state[v] == 'u')
			{
				state[v] = 'd';// vertice v fica descoberto
				p[v] = u;// u vira o pai de v
				Q.push_back(v);// adiciona v na fila
			}
		}
		state[u]= 'p'; // u é processado
	}
	for(i = 0; i < nVertices; i++)
	{
		if (state[i] == 'u')
			aux = 1;

	}
	if (aux == 1)
		cout << "Nao conexo" << endl;
	else
		cout << "Conexo" << endl;
}


int main()
{
	list<no>adj[10]; //adj é um vetor de listas ligadas //lista de adjacencias
	int u, v;//origem e destino de uma aresta
	int p = 1;//peso da aresta recebe 1
	//no aux; //struct aux p/ inserir as arestas
	//list <no>::iterator q; //iterator p/ mostrar a lsita de adjacencias
	//int i; //contador
	int nVertices; //#vertices do grafo
	int orientado = 0; //1: orientado, 0: nao orientado
	int start;

	cin >> nVertices; //le o numero de vertices
	cin >> start; //le o vertice inicial

	do
	{
		cin >> u; //lendo o vertice de origem
		cin >> v; //lendo o vertice de destino
		// cin >> p;
		if ( u != -1 && v != -1 )
			cria_areta(adj, u, v, p, orientado);
	}
	while (u != -1 && v != -1);

	bfs(adj, nVertices, orientado);
	//mostrando a lista de adjacencias

	/*for (i = 0; i < nVertices; i++)
		for (q = adj[i].begin(); q != adj[i].end(); q++)//lista de i.begin
		{
			cout << i << " " << q->v << " " << q->p << endl;
	}*/

	return 0;
}
