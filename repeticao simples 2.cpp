#include <iostream>

using namespace std;


int main()
{
	int i;//(contador geral)
	/*int N;//(número de repetições)

	cin >> N;*/
//i inicia em  50 e vai ate 1
	for(i = 0; i <= 50 ; i++)
	{
		
		if (i != 0 && i % 2 == 0 )
			cout  << i << endl;//printa i na tela
	}
	return 0;
}
