#include <iostream>
#include <vector>
using namespace std;

// Função que retorna o máximo entre dois inteiros
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Função que implementa a programação dinâmica para resolver o problema
int knapsack(int V, int C, int vol[], int peso[], int preco[], int n) {
    int K[n+1][V+1][C+1];
 
    // Inicializa a tabela K com zeros
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= V; j++) {
            for (int k = 0; k <= C; k++) {
                K[i][j][k] = 0;
            }
        }
    }
 
    // Preenche a tabela K
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= V; j++) {
            for (int k = 0; k <= C; k++) {
                if (vol[i-1] <= j && peso[i-1] <= k) {
                    K[i][j][k] = max(K[i-1][j][k], preco[i-1] + K[i-1][j-vol[i-1]][k-peso[i-1]]);
                } else {
                    K[i][j][k] = K[i-1][j][k];
                }
            }
        }
    }
 
    return K[n][V][C];
}

int main() {
    int V = 10; // Volume máximo que o carrinho pode carregar (em metros cúbicos)
    int C = 20; // Peso máximo que o carrinho pode carregar (em quilos)
    int vol[5] = {2,3,5,7}; // Vetor com os volumes de cada pedra (em metros cúbicos)
    int peso[5] ={4,6,8,9}; // Vetor com os pesos de cada pedra (em quilos)
    int preco[5] ={5,7,10,13}; // Vetor com os preços de cada pedra
    int vol_size;
    int n;
	cin >> vol_size; 
    n = vol_size; // Número de pedras
 
    int max_preco; 
	max_preco = knapsack(V, C, vol, peso, preco, n); // Chama a função knapsack para encontrar o preço máximo
}
    
