#include <iostream>
#define N 100
using namespace std;

 void invert(char* x)
 {
  int comp = 0;
   while (x[comp] != '\0')
     {
       comp++;
     }
   for(int i = 0; i < comp / 2; i++)
     {
       char temp = x[i];
       x[i] = x[comp - i - 1];
       x[comp - i - 1] = temp;
     }
 }
int main() {
  
  char letras[N];

  cout << "Digite uma string: ";
  cin.getline(letras, N);

  invert(letras);

  cout << "Letras invertidas: " << letras << endl;

  return 0;  
}
