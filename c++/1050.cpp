#include<iostream>

using namespace std;

int main(){
    int codigo;
    string resultado;
    cin >> codigo;

    switch (codigo)
    {
    case 61:
        resultado = "Brasilia";
        break;
    case 71:
        resultado = "Salvador";
        break;
    case 11:
        resultado = "Sao Paulo";
        break;
    case 21:
        resultado = "Rio de Janeiro";
        break;
    case 32:
        resultado = "Juiz de Fora";
        break;
    case 19:
        resultado = "Campinas";
        break;
    case 27:
        resultado = "Vitoria";
        break;
    case 31:
        resultado = "Belo Horizonte";
        break;
    default:
        resultado = "DDD nao cadastrado";
        break;
    }
    cout << resultado <<endl;
    return 0;
}