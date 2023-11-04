#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    
    srand((unsigned)time(0));

char resposta;
int s;
int S;
int n;
int N;

do {
    
    int chave [5];
    int estrelas [2];

    for (int i = 0; i < 5; i++) {
        chave [i]= (rand() % 50) + 1;
    }
    sort (chave, chave + 5);
    
    for (int i = 0; i < 5; i++) {
    cout << "Chave: " << chave [i] << endl;
    }

    for (int i = 0; i < 2; i++) {
        estrelas [i] = (rand() % 12) + 1;
    }
    sort (estrelas, estrelas + 2);
    
    for (int i = 0; i < 2; i++) {
        cout << "Estrela: " << estrelas[i] << endl;
    }
    
    cout << "Gostaria de gerar uma outra chave ? (s/n)" << endl;
    cin >> resposta;
  }
   
while (resposta == 's' || resposta == 'S');
if (resposta == 'n' || resposta == 'N'){
    cout << "Obrigado por jogar na Chave da Sorte !" << endl;
}
 
 return 0;
}