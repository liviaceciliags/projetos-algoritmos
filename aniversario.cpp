#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
	int M;
	char nome[100];
	

	cin >> M;
	cin.ignore();
	cin.getline(nome,100);
	

	switch (M)
	{
	case 1:
		cout<<"janeiro"<<endl;
		break;
	case 2:
		cout<<"fevereiro"<<endl;
		break;
	case 3:
		cout<<"marco"<<endl;
		break;
	case 4:
		cout<<"abril"<<endl;
		break;
	case 5:
		cout<<"maio"<<endl;
		break;
	case 6:
		cout<<"junho"<<endl;
		break;
	case 7:
		cout<<"julho"<<endl;
		break;
	case 8:
		cout<<"agosto"<<endl;
		break;
	case 9:
		cout<<"setembro"<<endl;
		break;
	case 10:
		cout<<"outubro"<<endl;
		break;
	case 11:
		cout<<"novembro"<<endl;
		break;
	default:
		cout<<"dezembro"<<endl;
		break;
	}
	return 0;
}

