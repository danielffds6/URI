#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string primeiraPalavra, segundaPalavra, terceiraPalavra, resultado;
    cin >> primeiraPalavra >> segundaPalavra >> terceiraPalavra;

    if(primeiraPalavra == "vertebrado"){
        if(segundaPalavra == "ave"){
            if(terceiraPalavra == "carnivoro"){
                resultado = "aguia";
            }else{
                resultado = "pomba";
            }
        }else{
            if(terceiraPalavra == "onivoro"){
                resultado = "homem";
            }else{
                resultado = "vaca";
            }
        }
    }else{
        if(segundaPalavra == "inseto"){
            if(terceiraPalavra == "hematofago"){
                resultado = "pulga";
            }else{
                resultado = "lagarta";
            }
        }else{
            if(terceiraPalavra == "hematofago"){
                resultado = "sanguesuga";
            }else{
                resultado = "minhoca";
            }
        }
    }
    cout << resultado << endl;
    return 0;
}