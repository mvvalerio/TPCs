#include <iostream>

using namespace std;

// Contas
int a;
int b;

// PI
const double PI = 3.14159;
int r;
int area;

int main(){

//Contas

    cout << "Escolha um numero: ";
    cin >> a;

    cout << "Escolha outro numero diferente: ";
    cin >> b;
    
    
    cout << "Soma dos numeros: " << a+b << endl;
    
    
    cout << "Diferenca dos numeros: " << a-b << endl;
    
    
    cout << "Produto dos numeros: " << a*b << endl;
    
    
    cout << "Divisao dos numeros: " << a/b << endl;
    

    cout << "Resto da divisao dos numeros: " << a%b << endl;
    
//Contas
    
    cout << endl;
    
//PI

cout << "Escolha um numero para o raio: ";
    cin >> r;
    
    area = PI * r * r;
    
    cout << "Vamos descobrir a area do circulo com o raio dado." << endl;
    cout << "A area e: " << area << endl;

//PI

return 0;
}
