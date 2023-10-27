


#include <iostream>

using namespace std;

struct dado
{

	int k; //chave
	int status; // 0: vazio, 1: ocupado, 2: removidoz

};

int hash_aux(int k, int m)
{
	int res;

	res = (k % m);
	if (res < 0 )
		res += m;

	return res;
}

int hash1(int k, int i, int m)
{
	return ((hash_aux(k, m) + i) % m);
}

int hash_insert(dado t[], int m, int k)
{
	int j;
	int i = 0;

	do
	{
		j =  hash1(k, i, m);
		if (t[j].status != 1)
		{
			t[j].k = k;
			t[j].status = 1;
			return j;
		}
		else
			i =  i + 1;
	}
	while (i != m);
	return -1;
}

int hash_search(dado t[], int m, int k)
{
	int i = 0;
	int j;
	do
	{
		j = hash1(k, i, m);
		if (t[j].k == k)
			return j;
		i = i + 1;
	}
	while (t[j].status != 0 && i < m);
	return -1;
}

int hash_remove(dado t[], int m, int k) 
{
	int j;
    j = hash_search(t,m,k);
    if(j != -1){
       t[j].status = 2;
       t[j].k = -1;
       return 0; // consegui remover
	}
    else
       return -1; // k nao esta na tabela
}

int main ()
{
	dado t[100]; //tam hash
	int m ; //tam da tabela
	int i; //contador
	int k;
	int remove;
	int r;

	// lendo o tam da tabela
	cin >> m;

	//inicializando a tabela
	for (i = 0; i < m ; i++)
	{
		t[i].k = -1;
		t[i].status = 0;
	}

	//lendo as chaves
	do
	{
		cin >> k;
		if (k != 0)
			hash_insert(t, m, k);
	}
	while (k != 0);

	cin >> remove;

	hash_remove( t, m, remove);

	for (i = 0; i < m; i ++)
		cout << t[i].k << endl;
	
	return 0;
}
