#include <iostream>
#include <string>

using namespace std;

typedef string Alfabeto;

void maquina(Alfabeto Entrada, const Alfabeto& tilde, const Alfabeto& apostrofo){

    bool C_P = true;

    while(getline (cin,Entrada)) {

        for(int i=0;i<Entrada.size();i++){

            if(Entrada[i]=='"'){

                if(C_P){
                    Entrada.erase(i,1);

                    Entrada.insert(i,tilde);

                    C_P=false;
                }
                else{
                    Entrada.erase(i,1);

                    Entrada.insert(i,apostrofo);

                    C_P=true;
                }
            }
        }
        cout<<Entrada<<endl;
    }
}

int main(){
    Alfabeto Entrada, tilde = "``", apostrofe = "''";

    maquina(Entrada,tilde,apostrofe);

    return 0;
}