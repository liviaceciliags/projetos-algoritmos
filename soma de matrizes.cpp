#include <iostream>

using namespace std;

int main ()
{

	int mat1[10][10], mat2[10][10], mat3[10][10];
	int i, j; 
	int N;
	int M;
	cin >> N >> M; 
	for(i = 0; i < N; i++){
		for(j = 0; j < M; j++)
		{
			cin >> mat1[i][j];
		}
	}
	for(i = 0; i < N; i++){
		for(j = 0; j < M; j++)
		{
			cin >> mat2[i][j];
		}
	}
	for(i = 0; i < N; i++)
		for(j = 0; j < M; j++)
			mat3[i][j] = mat1[i][j] + mat2[i][j];

	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
			cout << mat3[i][j] << " ";
		cout << endl;
	}
	return 0;
}
