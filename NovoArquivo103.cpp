//nao orientado
#include <iostream>
#include <list>
using namespace std;


struct no
{
	int v; // destino
	int p; //peso

};
int main()
{
	list<no>adj[10]; //adj é um vetor de listas ligadas //lista de adjacencias
	int u, v;//origem e destino de uma aresta
	int p;//peso da aresta
	no aux; //struct aux p/ inserir as arestas
	list <no>::iterator q; //iterator p/ mostrar a lsita de adjacencias
	int i; //contador
	int nVertices = 4; //#vertices do grafo
	//criando uma aresta
	u = 0;
	v = 1;
	p = 4;
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux);
	//aresta da volta
	aux.v = u;
	adj[v].push_back(aux);

	u = 0;
	v = 2;
	p = 3;
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux);
	//aresta da volta
	aux.v = u;
	adj[v].push_back(aux);

	u = 0;
	v = 3;
	p = 7;
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux);
	//aresta da volta
	aux.v = u;
	adj[v].push_back(aux);

	u = 2;
	v = 3;
	p = 5;
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux);
	//aresta da volta
	aux.v = u;
	adj[v].push_back(aux);

	u = 2;
	v = 1;
	p = 2;
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux);
	//aresta da volta
	aux.v = u;
	adj[v].push_back(aux);

	u = 3;
	v = 1;
	p = 1;
	aux.v = v;
	aux.p = p;
	adj[u].push_back(aux);
	//aresta da volta
	aux.v = u;
	adj[v].push_back(aux);


	//mostrando a lista de adjacencias

	for (i = 0; i < nVertices; i++)
		for (q = adj[i].begin(); q != adj[i].end(); q++)//lista de i.begin
		{
			cout << i << " " << q->v << " " << q->p << endl;
		}


	return 0;
}
