#include <iostream>
#include <string>
#include <algorithm>  // Para usar a função sort()

using namespace std;

struct Item {
    string nome;
    string cor;
    string tamanho;
    double peso;
};

const int MAX_ITENS = 1000;  // Tamanho máximo do inventário

void exibirItem(const Item& item) {
    cout << "Nome: " << item.nome << endl;
    cout << "Cor: " << item.cor << endl;
    cout << "Tamanho: " << item.tamanho << endl;
    cout << "Peso: " << item.peso << endl;
}

bool compararItens(const Item& item1, const Item& item2) {
    return item1.nome < item2.nome;
}

int main() {
    Item inventario[MAX_ITENS];  // Array para armazenar os itens
    int numItens = 0;  // Contador de itens cadastrados

    char opcao;
    do {
        cout << "=== Inventario ===" << endl;
        cout << "1 - Cadastrar item" << endl;
        cout << "2 - Buscar item por nome" << endl;
        cout << "3 - Buscar item por cor" << endl;
        cout << "4 - Buscar item por tamanho" << endl;
        cout << "5 - Buscar item por peso" << endl;
        cout << "6 - Remover item" << endl;
        cout << "7 - Listar todos os itens" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case '1': {
                if (numItens >= MAX_ITENS) {
                    cout << "Inventario cheio!" << endl;
                    break;
                }

                Item novoItem;
                cout << "Nome: ";
                cin >> novoItem.nome;
                cout << "Cor: ";
                cin >> novoItem.cor;
                cout << "Tamanho: ";
                cin >> novoItem.tamanho;
                cout << "Peso: ";
                cin >> novoItem.peso;

                inventario[numItens] = novoItem;
                numItens++;

                cout << "Item cadastrado com sucesso!" << endl;
                break;
            }

            case '2': {
                string nomeBusca;
                cout << "Digite o nome do item a ser buscado: ";
                cin >> nomeBusca;

                bool encontrado = false;
                for (int i = 0; i < numItens; i++) {
                    if (inventario[i].nome == nomeBusca) {
                        cout << "Item encontrado:" << endl;
                        exibirItem(inventario[i]);
                        encontrado = true;
                    }
                }

                if (!encontrado) {
                    cout << "Item nao encontrado!" << endl;
                }
                break;
            }

            case '3': {
                string corBusca;
                cout << "Digite a cor do item a ser buscado: ";
                cin >> corBusca;

                bool encontrado = false;
                for (int i = 0; i < numItens; i++) {
                    if (inventario[i].cor == corBusca) {
                        cout << "Item encontrado:" << endl;
                        exibirItem(inventario[i]);
                        encontrado = true;
                    }
                }

                if (!encontrado) {
                    cout << "Item nao encontrado!" << endl;
                }
                break;
            }

            case '4': {
                string tamanhoBusca;
                cout << "Digite o tamanho do item a ser buscado: ";
                cin >> tamanhoBusca;

                bool encontrado = false;
                for (int i = 0; i < numItens; i++) {
                    if (inventario[i].tamanho == tamanhoBusca) {
                        cout << "Item encontrado:" << endl;
                        exibirItem(inventario[i]);
                        encontrado = true;
                    }
                }

                if (!encontrado) {
                    cout << "Item nao encontrado!" << endl;
                }
                break;
            }

            case '5': {
                double pesoBusca;
                cout << "Digite o peso do item a ser buscado: ";
                cin >> pesoBusca;

                bool encontrado = false;
                for (int i = 0; i < numItens; i++) {
                    if (inventario[i].peso == pesoBusca) {
                        cout << "Item encontrado:" << endl;
                        exibirItem(inventario[i]);
                        encontrado = true;
                    }
                }

                if (!encontrado) {
                    cout << "Item nao encontrado!" << endl;
                }
                break;
            }

            case '6': {
                string nomeRemover;
                cout << "Digite o nome do item a ser removido: ";
                cin >> nomeRemover;

                bool encontrado = false;
                for (int i = 0; i < numItens; i++) {
                    if (inventario[i].nome == nomeRemover) {
                        cout << "Item removido:" << endl;
                        exibirItem(inventario[i]);

                        // Deslocar os itens para preencher o espaço do item removido
                        for (int j = i; j < numItens - 1; j++) {
                            inventario[j] = inventario[j + 1];
                        }

                        numItens--;
                        encontrado = true;
                        break;
                    }
                }

                if (!encontrado) {
                    cout << "Item nao encontrado!" << endl;
                }
                break;
            }

            case '7': {
                if (numItens == 0) {
                    cout << "O inventario está vazio!" << endl;
                } else {
                    // Ordenar os itens em ordem crescente pelo nome antes de exibir
                    sort(inventario, inventario + numItens, compararItens);

                    cout << "Itens no inventario:" << endl;
                    for (int i = 0; i < numItens; i++) {
                        cout << "--- Item " << i + 1 << " ---" << endl;
                        exibirItem(inventario[i]);
                    }
                }
                break;
            }

            case '0':
                cout << "Saindo do programa..." << endl;
                break;

            default:
                cout << "Opção invalida!" << endl;
        }

        cout << endl;
    } while (opcao != '0');

    return 0;
}
