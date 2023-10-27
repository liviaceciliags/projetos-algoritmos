#include <algorithm>

using namespace std;

const int maxn = 110, maxp = 1e5 + 10;

int valor[maxn], peso [maxn], n , C;
long long dp[maxn][maxp];

bool vis[maxn][maxp];

long long int forca_bruta(int i, int C)
{

	if (i == n + 1) return 0;

	int ans1 = forca_bruta(i + 1, C);

	int ans2 = 0;
	if (C >= peso[i])
		ans2 = forca_bruta(i + 1, C - peso[i] + valor[i]);

	return max (ans1, ans2);
}
