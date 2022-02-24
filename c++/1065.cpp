#include<iostream>

using namespace std;

int main(){
    int count = 0;
    int valor;

    for (int i = 0; i < 5; i++){
        cin >> valor;
        if(valor % 2 == 0){
            count += 1;
        }
    }

    cout << count << " valores pares" << endl;
    
    return 0;
}