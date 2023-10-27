#include <iostream>

using namespace std;

int main ()
{

	int i, j; 
	int N;
	int M;
	int mat [10][10];
	
	cin >> N >> M;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
			cin >> mat[i][j];
	}
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
			cout << mat[i][j] << " ";
		cout << endl;		
	}
	return 0;
}
