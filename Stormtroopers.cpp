#include <iostream>


using namespace std;



struct dados
{
	int id;
	float IM;
	float FA;
	float GA;


};

int main ()
{

	dados stormtrooper [100];

	int i;
	double maior = 0;
	float aux;
	int u;


	i = 0;

	do
	{
		cin >> stormtrooper[i].id;
		u = stormtrooper[i].id;
		if (u != 0)
		{
			cin >> stormtrooper[i].IM;
			cin >> stormtrooper[i].FA;

			stormtrooper[i].GA = (stormtrooper[i].IM + stormtrooper[i].FA) / 2;

			if ( stormtrooper[i].GA > maior)
			{
				maior = stormtrooper[i].GA;
				aux = stormtrooper[i].id;
			}
		}
		i++;
	}
	while (u != 0);

	cout << "Stormtrooper escolhido: " << aux << endl;
	cout << "GA: " << maior << endl;



	return 0;
}
