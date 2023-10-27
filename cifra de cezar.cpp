#include <iostream>

using namespace std;

int main ()
{
	int N, M;
	char mat[100][100];
	char palavra[100];
	int i, j, aux = 0;
	
	cin >> N >> M;

	cin >> palavra; 
	for(i = 0; i < N; i++){
		for(j = 0; j < M; j++){
			mat[i][j] = palavra[aux];
		aux++;
		}
	}
		
	for(i = 0; i < M; i++)
		for(j = 0; j < N; j++)
			cout << mat[j][i];

	return 0;
}
