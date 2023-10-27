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

void bfs(list<no>adj[], int nVertices, int s)
{
    list <no>::iterator q; // ponteiro para percorrer a lista de adjacencias
    list <int> Q; // fila
    int state[nVertices]; // 0:nao descoberto, 1:descoberto, 2:processado
    int p[nVertices]; // pai do vertice. -1 quando nao tem pai
    int u; // vertice atual
    int v; // vertice destino

    for (int i = 0; i < nVertices; i++) // define todos os vertices como nao descobertos e sem pai
    {
        state[i] = 0;
        p[i] = -1;
    }

    state[s] = 1; // vertice inicial fica descoberto
    Q.push_back(s); // adiciona o vertice inicial na fila

    while(!Q.empty()) // enquanto a houver numeros na fila
    {
        u = Q.front(); // u passa a valer o primeiro numero da fila
        Q.pop_front(); // retira o primeiro elemento da fila

        cout << u << endl; // mostra o vertice sendo visitado

        for (q = adj[u].begin(); q != adj[u].end(); q++)
        {
            v = q->v;

            cout << u << " " << v << endl;

            if(state[v] == 0)
            {
                state[v] = 1; // vertice v fica descoberto
                p[v] = u; // u vira o pai de v
                Q.push_back(v); // adiciona v na fila
            }
        }

        state[u] = 2; // u fica processado
    }
}


int main()
{
	list<no>adj[10]; //adj é um vetor de listas ligadas //lista de adjacencias
	int u, v;//origem e destino de uma aresta
	int p;//peso da aresta
	//no aux; //struct aux p/ inserir as arestas
	//list <no>::iterator q; //iterator p/ mostrar a lsita de adjacencias
	//int i; //contador
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
	
	bfs(adj, nVertices, orientado); 
	//mostrando a lista de adjacencias

	/*for (i = 0; i < nVertices; i++)
		for (q = adj[i].begin(); q != adj[i].end(); q++)//lista de i.begin
		{
			cout << i << " " << q->v << " " << q->p << endl;
	}*/
	
	


	return 0;
}
