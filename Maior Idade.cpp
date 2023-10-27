#include <iostream>

using namespace std;

int main()
{
	char name1[100];
	char name2[100];
	int idade1, idade2;


	cin.getline(name1, 100);
	cin >> idade1;
	cin.ignore();
	cin.getline(name2, 100);
	cin >> idade2;

	if (idade1 > idade2)
		cout << name1 << endl;

	else if (idade1 < idade2)
		cout << name2 << endl;
	else 
		cout<< "Idades iguais" <<endl;
	
	return 0;
}

