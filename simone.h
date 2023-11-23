#ifndef SIMONE_H
#define SIMONE_H

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

//#####################################################################   FUNZIONI SINGOLE   #######################################################################//

//Dispari(numero) Dice se numero è dispari
bool Dispari(int numero) {
   return numero % 2 != 0;
}

//Pari(numero) Dice se numero è pari
bool Pari(int numero) {
    return numero % 2 == 0;
}

//Maiuscola(lettera) Dice se lettera è maiuscola
bool Maiuscola(char lettera) {
    if (lettera >= 'a' && lettera <= 'z') {
        return false;
    }
    if (lettera >= 'A' && lettera <= 'Z') {
        return true;
    }
    return false;
}

//Minuscola(lettera) Dice se lettera è minuscola
bool Minuscola(char lettera) {
 if (lettera >= 'a' && lettera <= 'z') {
        return true;
    }
    if (lettera >= 'A' && lettera <= 'Z') {
        return false;
    }
    return false;
} 

//Vocale(lettera) Dice se lettera è vocale
bool Vocale(char lettera) {
    if (lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u' || lettera == 'A' || lettera == 'E' || lettera == 'I' || lettera == 'O' || lettera == 'U') {
        return true;
    } else {
        return false;
    }
}

//Consonante(lettera) Dice se lettera è consonante
bool Consonante(char lettera) {
if (lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u' || lettera == 'A' || lettera == 'E' || lettera == 'I' || lettera == 'O' || lettera == 'U') {
        return false;
    } else {
        return true;
    }
}
//######################################################################   FUNZIONI CHECK   ########################################################################//

//PariDispari(3) Dice se 3 è pari o dispari
string PariDispari(int numero) {
    return (numero % 2 == 0) ? "pari" : "dispari";
}
 
//MaiuscolaMinuscola(lettera) Dice se lettera è maiuscola o minuscola
string MaiuscolaMinuscola(char lettera) {
    if (lettera >= 'a' && lettera <= 'z') {
        return "minuscola";
    } else {
        return "maiuscola";
    }
} 

//VocaleConsonante(lettera) Dice se lettera è vocale o consonante
string VocaleConsonante(char carattere) {
    if (std::isalpha(carattere)) {
        carattere = tolower(carattere);

        if (carattere == 'a' || carattere == 'e' || carattere == 'i' || carattere == 'o' || carattere == 'u' || carattere == 'A' || carattere == 'E' || carattere == 'I' || carattere == 'O' || carattere == 'U') {
            return "vocale";
        } else {
            return "consonante";
        }
    } else {
        return "non una lettera";
    }
}
//####################################################################   FUNZIONI MATEMATICHE   ######################################################################//

//Randomizza(3,15) Genera un numero random da 3 a 15
int Randomizza(int da, int a) {
  srand(time(NULL));
  int random = rand()%(a-da+1)+da;
  return random;
}
