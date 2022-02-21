#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double salario, impostoRenda, resto;
    resto = 0;
    cin >> salario;
    cout << fixed << setprecision(2);

    if(salario >= 0 && salario <= 2000){
        cout << "Isento" << endl;
        salario = 0;
        resto = 1;
    }

    salario -= 2000;

    if(salario > 0 ){
        if(salario >= 1000){
            impostoRenda = 1000 * 0.08;
            salario -=1000;
        }else{
            impostoRenda = salario * 0.08;
            salario = 0;
        }
    }

    if(salario > 0){
        if(salario > 1500){
            impostoRenda = impostoRenda + (1500 * 0.18);
            salario -= 1500;
        }else{
            impostoRenda = impostoRenda + (salario * 0.18);
            salario = 0;
        }
    }
    if(salario > 0){
        impostoRenda = impostoRenda + (salario * 0.28);
    }
    if(resto == 0){
        cout << "R$ " << impostoRenda << endl;
    }

    return 0;
}