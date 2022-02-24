#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double valor, media, soma = 0;
    int count = 0;
    
    for(int i = 0; i < 6; i++){
        cin >> valor;
        if(valor > 0){
            count += 1;
            soma += valor;
        }
    }
    media = soma / count;

    cout << fixed << setprecision(1);
    cout << count << " valores positivos" << endl;
    cout << media << endl;

    return 0;
}