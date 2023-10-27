#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
int numSorte = 1 + (rand()%100);
int numTentativasMaximas = 0;
int tentativas = 0;
int num = 0;
string nomeJogador;

cout << "Qual é o seu nome?" << endl;
cin >> nomeJogador;
cout << "Bem vindo " << nomeJogador << "!" << endl;

cout << "Gostaria de escolher um número máximo de tentativas ?" << endl;
cin >> numTentativasMaximas;


while (numSorte != num && tentativas < numTentativasMaximas){
    cout << "Tentativa #" << tentativas + 1 << ": Adiciona o teu número da sorte!" << endl;
    cin >> num;
    if (numSorte > num){
        cout << "Tem de ser mais que:" << num << endl;
        } else if (numSorte < num){
            cout << "Tem de ser mais pequeno que:" << num << endl;
        } else {
            cout << "Muito bem, acertaste !!" << endl;
            break;
        }
        tentativas++;
        }
        
        if (tentativas = numTentativasMaximas){
            cout << "Estiveste muito perto " << nomeJogador <<", o número que tinhas de colocar era " << numSorte << "!" << endl; 
        }
        cout << "Acabou o jogo." << endl;
    return 0;
}