#include<iostream>

using namespace std;

int main(){
    string dia, ponto;
    int diaInicial, horaInicial, minutosInicial, segundosInicial;
    int diaFinal, horaFinal, minutosFinal, segundosFinal;
    int diaSaida, horasSaida, minutosSaida, segundosSaida;
    int restoHoras = 0;
    int restoMinutos = 0;
    int restoSegundos = 0;

    cin >> dia >> diaInicial;
    cin >> horaInicial >> ponto >> minutosInicial >> ponto >> segundosInicial;
    cin >> dia >> diaFinal;
    cin >> horaFinal >> ponto >> minutosFinal >> ponto >> segundosFinal;

    if(horaInicial > horaFinal){
        restoHoras = 1;
    }else if(horaInicial == horaFinal && minutosInicial > minutosFinal){
        restoMinutos = 1;
        restoHoras = 1;
    }else if(horaInicial == horaFinal && minutosInicial == minutosFinal && segundosInicial > segundosFinal){
        restoSegundos = 1;
        restoHoras = 1;
        restoMinutos = 1;
    }

    diaSaida = diaFinal - diaInicial - restoHoras;

    if(restoHoras == 1){
        horasSaida = 24 - horaInicial + horaFinal - restoMinutos;
    }else{
        horasSaida = horaFinal - horaInicial;
    }

    if(restoMinutos == 1){
        minutosSaida = 60 - minutosInicial + minutosFinal - restoSegundos;
    }else{
        minutosSaida = minutosFinal - minutosInicial;
    }

    if(segundosInicial > segundosFinal){
        segundosSaida = 60 - segundosInicial + segundosFinal;
    }else{
        segundosSaida = segundosFinal - segundosInicial;
    }

    cout << diaSaida << " dia(s)" << endl;
    cout << horasSaida << " hora(s)" << endl;
    cout << minutosSaida << " minuto(s)" << endl;
    cout << segundosSaida << " segundo(s)" << endl;

    return 0;
}