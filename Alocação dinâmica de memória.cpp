#include <iostream>
#include <iomanip>

using namespace std;

struct dado {
	int n1, n2, n3, n4;
	double media;
};

int main ()
{
	dado *info = NULL; //a struct dado é um ponteiro
	
	info = new dado;
	
	int s;
	
	cin >> info->n1;
	cin >> info->n2;
	cin >> info->n3;
	cin >> info->n4;
	
	s = info->n1 + info->n2 + info->n3 + info->n4;
	
	info->media = 1.0*s/4;//transformação de inteiro
	
	cout <<fixed << setprecision(2) <<info->media << endl;
	
	delete info;// libera só uma posição do vetor;
	return 0; 
}