#include <iostream>
#include <cstring>


using namespace std;

int main()
{
	char nm1[20], nm2[20], nm3[20], cont;
	char alf[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'w', 'y', 'z'};
	char alfb[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'W', 'Y', 'Z'};
	cin.getline(nm1, 20);
	cin.getline(nm2, 20);
	cin.getline(nm3, 20);
	
	for(cont = 0; cont < 26; cont++)
	{
		if(nm1[0] == alf[cont])
			cout << nm1 << " ";
		if(nm2[0] == alf[cont])
			cout << nm2 << " ";
		if(nm3[0] == alf[cont])
			cout << nm3 << " ";
	}
	return 0;
}

