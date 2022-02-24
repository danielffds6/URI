#include<iostream>

using namespace std;

int main(){
    string dia, ponto;
    int diaInicial, horaInicial, minutosInicial, segundosInicial;
    int diaFinal, horaFinal, minutosFinal, segundosFinal;
    int diaSaida, horasSaida, minutosSaida, segundosSaida;

    cin >> dia >> diaInicial;
    cin >> horaInicial >> ponto >> minutosInicial >> ponto >> segundosInicial;
    cin >> dia >> diaFinal;
    cin >> horaFinal >> ponto >> minutosFinal >> ponto >> segundosFinal;

    segundosSaida = segundosFinal - segundosInicial;
    minutosSaida = minutosFinal - minutosInicial;
    horasSaida = horaFinal - horaInicial;
    diaSaida = diaFinal - diaInicial;

    if(segundosSaida < 0){
        segundosSaida += 60;
        minutosSaida--;
    }

    if(minutosSaida < 0){
        minutosSaida += 60;
        horasSaida--;
    }

    if(horasSaida < 0){
        horasSaida += 24;
        diaSaida--;
    }

    cout << diaSaida << " dia(s)" << endl;
    cout << horasSaida << " hora(s)" << endl;
    cout << minutosSaida << " minuto(s)" << endl;
    cout << segundosSaida << " segundo(s)" << endl;

    return 0;
}