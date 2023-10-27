#include <iostream> 


using namespace std;

struct dado
{
	int idade;
	int peso;
};
int main (){
	
	dado *info = NULL;//ponteiro para dado
	
	info = new dado;
	
	info->idade =21;
	info->peso=72.3;
	
	cout <<  "idade: " << info->idade << endl;
	cout <<  "peso: " << info->peso << endl;
	
	
	return 0;
}