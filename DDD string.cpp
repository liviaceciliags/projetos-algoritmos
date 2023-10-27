#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char cidade [50];
	char cidade1[30] ="Brasilia";
	char cidade2[30] ="Salvador";
	char cidade3[30] ="Sao Paulo";
	char cidade4[30] ="Rio de Janeiro";
	char cidade5[30] ="Juiz de Fora";
	char cidade6[30] ="Campinas";
	char cidade7[30] ="Vitoria";
	char cidade8[30] ="Belo Horizonte";
	char cidade9[30] ="Santa Rita do Sapucai";
  
	
	cin.getline (cidade, 50);
	
	if (strcmp(cidade, cidade1)==0) 
		cout << "61" << endl; 
	else if (strcmp(cidade, cidade2)==0)
		cout << "71" << endl;
	else if (strcmp(cidade, cidade3)==0)
		cout << "11" << endl;
	else if (strcmp(cidade, cidade4)==0)
		cout << "21" << endl;
	else if (strcmp(cidade, cidade5)==0)
		cout << "32" << endl;
	else if (strcmp(cidade, cidade6)==0)
		cout << "19" << endl;
	else if (strcmp(cidade, cidade7)==0)
		cout << "17" << endl;
	else if (strcmp(cidade, cidade8)==0)
		cout << "31" << endl;
	else if (strcmp(cidade, cidade9)==0)
		cout << "35" << endl;
	else 
		cout << "DDD nao cadastrado" << endl;
	
	return 0;
}

