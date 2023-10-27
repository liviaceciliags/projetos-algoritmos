#include <iostream>

using namespace std;

int funcao(int *par){
	(*par) = (*par) + 1;
	cout << *par << endl; 
	//return par;
}

int main ()
{

	int mexerica = 12; 
	mexerica = funcao(&mexerica);
	cout << &mexerica << endl; 

	return 0;
}
