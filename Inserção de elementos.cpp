#include <iostream>

using namespace std;


struct dado
{
	int k; //chave
	int status; //0: avzio, 1: ocupado
	
};

int hash_aux(int k, int m)
{
	int res;
	res = k % m;
	if (res < 0 )
		res += m;
	return res;
}

int hash1(int k, int i, int m)
{
	return (hash_aux(k, m) + i) % m;
}


int hash_insert(dado t[], int m, int k)
{
	int i = 0;
	int j;
	do
	{
		j = hash1(k, i, m);
		if (t[j].status != 1)
		{
			t[j].k = k;
			t[j].status = 1;
			return j;
		}
		else
			i =  i + 1;
	} while (i != m);
	return -1;
}

int main ()
{
	dado t[100];
	
	int k;
	int m;
	int i;

	cin >> m;

	//inicializando a tabela com -1 para vazio e 0 para o status vazio
	for (i = 0; i < m; i++)
	{
		t[i].k = -1;
		t[i].status = 0;
	}
	
	//lendo e inserindo as chaves
	do
	{
		cin >> k;
		if (k != 0)
			hash_insert(t, m, k); // onde t é a struct
	}while (k != 0);

	for (i = 0; i < m; i++)
		cout << t[i].k << " ";
	
	return 0;
}
