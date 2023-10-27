#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	int gi, gg, totali = 0, totalg = 0, emp = 0, total = 0;
	int i;

	i = 1;
	while( i == 1 )
	{
		cin >> gi >> gg;
		if (gi > gg)
			totali = totali + 1;
		else if (gi == gg)
			emp = emp + 1;
		else
			totalg = totalg + 1;

		total = total + 1;

		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> i;
		if (i == 1)
			i = 1;

		else
		{
			cout << total << " grenais" << endl;
			cout << "Inter:" << totali << endl;
			cout << "Gremio:" << totalg << endl;
			cout << "Empates:" << emp << endl;
			if (totali > totalg)
				cout << "Inter venceu mais" << endl;
			else if (totali < totalg)
				cout << "Gremio venceu mais" << endl;
			else
				cout << "Nao houve vencedor" << endl;
		}
	}

	return 0;
}
