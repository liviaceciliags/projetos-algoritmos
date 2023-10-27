#include <iostream>

using namespace std;

struct dado
{
	int k;
	int status; // 0-vazio, 1-ocupado, 2-removido
};


int h1(int k, int m)
{
	int res;
	res = k % m;
	if (res < 0 )
		res += m;
	return res;
}

int h2(int k, int m)
{
	int res;
	res = h1(k, m - 1);
	if (res < 0 )
		res += m;

	return res + 1;
}

int dhash(int k, int m, int i)
{
	return (h1(k, m) + i * h2(k, m)) % m;
}

int hash_insert(dado t[], int m, int k)
{
	int i = 0;
	int j;
	do
	{
		j = dhash(k, m, i);
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
	int j;
	int i = 0;

	do
	{
		j = dhash(k, m, i);
		if (t[j].k == k)
			return j;
		i = i + 1;
	}
	while ((t[j].status != 0) && (i < m));
	return -1;
}

int hash_remove(dado t[], int m, int k)
{
	int j;
	int i;
	j = dhash(k, m, i);
	if(j != -1)
	{
		t[j].status = 2;
		t[j].k = -1;
		return 0 ;// consegui remover
	}
	else
		return -1 ;// k nao esta na tabela
}

int main ()
{

	int k;
	int m;
	int i;
	int opcao;
	int cont = 0;

	dado t[100];

	cin >> m;

	for (i = 0; i < m; i++)
	{
		t[i].k = -1;
		t[i].status = 0;
	}

	for (i = 0; i < m; i++)
	{
		do
		{
			cin >> opcao;
			if ( opcao > 0 && opcao < 5)
			{
				switch (opcao)
				{
				case 1:
					cin >> k;
					hash_insert(t, m, k);
					break;
				case 2:
					cin >> k;
					cout << hash_search(t, m, k);
					break;
				case 3:
					cin >> k;
					hash_remove(t, m, k);
					break;
				case 4:
					for (i = 0; i < m; i ++)
						cout << t[i].k << " ";
					break;
				case 5:
					break;
				}
			}
		}
		while (opcao > 0 && opcao < 5);
	}
	return 0;
}
