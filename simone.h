#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

//Randomizza(3,15) Genera un numero random da 3 a 15
int Randomizza(int da, int a) {
  srand(time(NULL));
  int random = rand()%(a-da+1)+da;
  return random;
}

//PariDispari(3) Dice se 3 è pari o dispari
string PariDispari(int numero) {
  if (numero%2 == 0) {
    return "pari";
  } else {
    return "dispari";
  }
}
