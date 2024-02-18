#include <iostream>

using namespace std;


// Tabuada
int x;


int main(){
  
cout << "Escolha um numero entre 0 - 10 para ver a tabuada." << endl;
    
    cin >> x;

    cout << endl;
    
    cout << "Tabuada do " << x << ":" << endl;
    
    for(int y=1; y <= 10; y++){
        
        cout << x << " x " << y << " = " <<  x * y << endl;
     
    }

  return 0;
}
