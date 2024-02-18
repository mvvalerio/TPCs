#include <iostream>

using namespace std;

// Arrays

float notas[5];
float media;
int somar;
float maior = 0, menor = 0;

int numeros[10] = {32,41,61,78,35,96,75,64,68,86};
float maiorNum = 0, menorNum = 0;


int main(){

    //                          Arrays
    
    //                          Ignorar
    
    // ----------------------------------------------------------- //
    cout << "Notas" << endl;
    //                          Ignorar
    
    // ----------------------------------------------------------- //
    
    //                          Notas

    cout << endl;
  
    int d = 1;

    cout << "Escolha as notas para cada um dos 5 alunos! " << endl;
    
    cout << endl;
    
    for(int c = 0; c < 5; c++){
        
        cout << "Aluno " << d++ << ": ";
        
        cin >> notas[c];
        
        somar += notas[c];
    }
    
    cout << endl;
    
    // Le as notas
    for(int k = 0; k < 5; k++){
        
        cout << notas[k] << " ";
        
    }  
    
    cout << endl;
    
    media = somar;
        
    for(int e = 0; e < 1; e++){
            
        cout << endl;
    
        cout << "A media dos alunos: " << media / 5 << endl; 
            
    }
    
    
    maior = notas[0];
    
    for(int f = 0; f < 5; f++){
        
      if(notas[f] > maior){
          
            maior = notas[f];
      }
    }
    
    cout << "A maior nota: " << maior << endl;
    
    
    menor = notas[0];
    
    for(int g = 0; g < 5; g++){
        
      if(notas[g] < menor){
          
            menor = notas[g];
      }
    }
    
    cout << "A menor nota: " << menor << endl;
    
    //                          Notas
    	
    //                          Ignorar
    
    // ----------------------------------------------------------- //
    cout << endl;
    cout << "Numeros" << endl;
    //                          Ignorar
    
    // ----------------------------------------------------------- //
    
    //                          Numeros
    
    cout << endl;
    
    // Le os numeros
    for(int j = 0; j < 10; j++){
        
        cout << numeros[j] << " ";
        
    }

    cout << endl;

    maiorNum = numeros[0];
    
    cout << endl;
    
    for(int h = 0; h < 10; h++){
        
      if(numeros[h] > maiorNum){
          
            maiorNum = numeros[h];
      }
    }
    
    cout << "O maior numero: " << maiorNum << endl;
    
    
    menorNum = numeros[0];
    
    for(int i = 0; i < 10; i++){
        
      if(numeros[i] < menorNum){
          
            menorNum = numeros[i];
      }
    }
    
    cout << "O menor numero: " << menorNum << endl;

  return 0;
}
