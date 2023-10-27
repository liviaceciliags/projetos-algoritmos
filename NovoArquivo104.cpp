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

int main()
{
	list<no>adj[10]; //adj é um vetor de listas ligadas //lista de adjacencias
	int u, v;//origem e destino de uma aresta
	int p;//peso da aresta
	//no aux; //struct aux p/ inserir as arestas
	list <no>::iterator q; //iterator p/ mostrar a lsita de adjacencias
	int i; //contador
	int nVertices; //#vertices do grafo
	int orientado = 0; //1: orientado, 0: nao orientado

	
	cin >> nVertices; 
	cin >> orientado; 
	
	do 
	{
		cin >> u;
	    cin >> v;
		cin >> p;
		if ( u != -1 && v != -1 && p != -1)
			cria_areta(adj, u, v, p, orientado);
	}while (u != -1 && v != -1 && p != -1);
	
	//mostrando a lista de adjacencias

	for (i = 0; i < nVertices; i++)
		for (q = adj[i].begin(); q != adj[i].end(); q++)//lista de i.begin
		{
			cout << i << " " << q->v << " " << q->p << endl;
		}


	return 0;
}
