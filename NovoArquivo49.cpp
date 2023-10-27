#include<iostream>
using namespace std;

int main()
{
	int mat0[5][3];
	int mat1[5][3];
	int mat2[5][3];
	int mat3[5][3];
	int mat4[5][3];
	int mat5[5][3];
	int mat6[5][3];
	int mat7[5][3];
	int mat8[5][3];
	int mat9[5][3];

	mat0[0][0] = 0;
	mat0[0][1] = 0;
	mat0[0][2] = 0;
	mat0[1][0] = 0;
	mat0[1][1] = 1;
	mat0[1][2] = 0;
	mat0[2][0] = 0;
	mat0[2][1] = 1;
	mat0[2][2] = 0;
	mat0[3][0] = 0;
	mat0[3][1] = 1;
	mat0[3][2] = 0;
	mat0[4][0] = 0;
	mat0[4][1] = 0;
	mat0[4][2] = 0;
	mat1[0][0] = 1;
	mat1[0][1] = 1;
	mat1[0][2] = 0;
	mat1[1][0] = 1;
	mat1[1][1] = 1;
	mat1[1][2] = 0;
	mat1[2][0] = 1;
	mat1[2][1] = 1;
	mat1[2][2] = 0;
	mat1[3][0] = 1;
	mat1[3][1] = 1;
	mat1[3][2] = 0;
	mat1[4][0] = 1;
	mat1[4][1] = 1;
	mat1[4][2] = 0;
	mat2[0][0] = 0;
	mat2[0][1] = 0;
	mat2[0][2] = 0;
	mat2[1][0] = 1;
	mat2[1][1] = 1;
	mat2[1][2] = 0;
	mat2[2][0] = 0;
	mat2[2][1] = 0;
	mat2[2][2] = 0;
	mat2[3][0] = 0;
	mat2[3][1] = 1;
	mat2[3][2] = 1;
	mat2[4][0] = 0;
	mat2[4][1] = 0;
	mat2[4][2] = 0;
	mat3[0][0] = 0;
	mat3[0][1] = 0;
	mat3[0][2] = 0;
	mat3[1][0] = 1;
	mat3[1][1] = 1;
	mat3[1][2] = 0;
	mat3[2][0] = 0;
	mat3[2][1] = 0;
	mat3[2][2] = 0;
	mat3[3][0] = 1;
	mat3[3][1] = 1;
	mat3[3][2] = 0;
	mat3[4][0] = 0;
	mat3[4][1] = 0;
	mat3[4][2] = 0;
	mat4[0][0] = 0;
	mat4[0][1] = 1;
	mat4[0][2] = 0;
	mat4[1][0] = 0;
	mat4[1][1] = 1;
	mat4[1][2] = 0;
	mat4[2][0] = 0;
	mat4[2][1] = 0;
	mat4[2][2] = 0;
	mat4[3][0] = 1;
	mat4[3][1] = 1;
	mat4[3][2] = 0;
	mat4[4][0] = 1;
	mat4[4][1] = 1;
	mat4[4][2] = 0;
	mat5[0][0] = 0;
	mat5[0][1] = 0;
	mat5[0][2] = 0;
	mat5[1][0] = 0;
	mat5[1][1] = 1;
	mat5[1][2] = 1;
	mat5[2][0] = 0;
	mat5[2][1] = 0;
	mat5[2][2] = 0;
	mat5[3][0] = 1;
	mat5[3][1] = 1;
	mat5[3][2] = 0;
	mat5[4][0] = 0;
	mat5[4][1] = 0;
	mat5[4][2] = 0;
	mat6[0][0] = 0;
	mat6[0][1] = 0;
	mat6[0][2] = 0;
	mat6[1][0] = 0;
	mat6[1][1] = 1;
	mat6[1][2] = 1;
	mat6[2][0] = 0;
	mat6[2][1] = 0;
	mat6[2][2] = 0;
	mat6[3][0] = 0;
	mat6[3][1] = 1;
	mat6[3][2] = 0;
	mat6[4][0] = 0;
	mat6[4][1] = 0;
	mat6[4][2] = 0;
	mat7[0][0] = 0;
	mat7[0][1] = 0;
	mat7[0][2] = 0;
	mat7[1][0] = 1;
	mat7[1][1] = 1;
	mat7[1][2] = 0;
	mat7[2][0] = 1;
	mat7[2][1] = 1;
	mat7[2][2] = 0;
	mat7[3][0] = 1;
	mat7[3][1] = 1;
	mat7[3][2] = 0;
	mat7[4][0] = 1;
	mat7[4][1] = 1;
	mat7[4][2] = 0;
	mat8[0][0] = 0;
	mat8[0][1] = 0;
	mat8[0][2] = 0;
	mat8[1][0] = 0;
	mat8[1][1] = 1;
	mat8[1][2] = 0;
	mat8[2][0] = 0;
	mat8[2][1] = 0;
	mat8[2][2] = 0;
	mat8[3][0] = 0;
	mat8[3][1] = 1;
	mat8[3][2] = 0;
	mat8[4][0] = 0;
	mat8[4][1] = 0;
	mat8[4][2] = 0;
	mat9[0][0] = 0;
	mat9[0][1] = 0;
	mat9[0][2] = 0;
	mat9[1][0] = 0;
	mat9[1][1] = 1;
	mat9[1][2] = 0;
	mat9[2][0] = 0;
	mat9[2][1] = 0;
	mat9[2][2] = 0;
	mat9[3][0] = 1;
	mat9[3][1] = 1;
	mat9[3][2] = 0;
	mat9[4][0] = 1;
	mat9[4][1] = 1;
	mat9[4][2] = 0;
	
	int bit[5][3];
	int col = 0;
	int col1 = 0;
	int col2 = 0;
	int col3 = 0;
	int col4 = 0;
	int col5 = 0;
	int col6 = 0;
	int col7 = 0;
	int col8 = 0;
	int col9 = 0;

	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cin >> bit[i][j];
		}
	}

	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(bit[i][j] == mat0[i][j])
			{
				col++;
			}
			if(bit[i][j] == mat1[i][j])
			{
				col1++;
			}
			if(bit[i][j] == mat2[i][j])
			{
				col2++;
			}
			if(bit[i][j] == mat3[i][j])
			{
				col3++;
			}
			if(bit[i][j] == mat4[i][j])
			{
				col4++;
			}
			if(bit[i][j] == mat5[i][j])
			{
				col5++;
			}
			if(bit[i][j] == mat6[i][j])
			{
				col6++;
			}
			if(bit[i][j] == mat7[i][j])
			{
				col7++;
			}
			if(bit[i][j] == mat8[i][j])
			{
				col8++;
			}
			if(bit[i][j] == mat9[i][j])
			{
				col9++;
			}
		}
	}

	if(col == 15)
	{
		cout << "ZERO" << endl;
	}
	else if(col1 == 15)
	{
		cout << "UM" << endl;
	}
	else if(col2 == 15)
	{
		cout << "DOIS" << endl;
	}
	else if(col3 == 15)
	{
		cout << "TRES" << endl;
	}
	else if(col4 == 15)
	{
		cout << "QUATRO" << endl;
	}
	else if(col5 == 15)
	{
		cout << "CINCO" << endl;
	}
	else if(col6 == 15)
	{
		cout << "SEIS" << endl;
	}
	else if(col7 == 15)
	{
		cout << "SETE" << endl;
	}
	else if(col8 == 15)
	{
		cout << "OITO" << endl;
	}
	else if(col9 == 15)
	{
		cout << "NOVE" << endl;
	}

	return 0;

}