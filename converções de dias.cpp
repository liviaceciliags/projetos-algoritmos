#include <iostream>

using namespace std;

int main ()
{
    int id, ano, mes, dia;
    
    cin >> id;
    
    ano = id/365;
    id = id%365;
    mes = id/30;
    dia = id%30;
    
    cout << ano <<" ano (s)"<< endl;
    cout << mes <<" mes (es)"<< endl;
    cout << dia <<" dia (s)"<< endl;
    
    return 0;
    
}