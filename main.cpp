#include <iostream>
#include <string>

using namespace std;
typedef string Alfabeto;

int main(){
    Alfabeto Entrada;
    char tipo1 = '`';
    char tipo3 = 39;

    bool Primer_caracter = true;
    while(getline(cin,Entrada)) {

        for (auto it = Entrada.begin(); it <= Entrada.end(); it++) {
            if (*it == '"') {
                if (Primer_caracter) {
                    Entrada.erase(it);
                    Entrada.insert(it,tipo1);
                    //Entrada.insert(it + 1,tipo1);
                    Primer_caracter = false;
                }
                else {
                    Entrada.erase(it);
                    Entrada.insert(it,tipo3);
                    //Entrada.insert(it+1,tipo3);
                    Primer_caracter= true;
                }
            }
        }
        cout << Entrada << endl;
    }
    return 0;
}