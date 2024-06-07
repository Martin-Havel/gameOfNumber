#include "iostream"
#include "color.h"
#include "ctime"
 /*Hadani tajneho cisla*/
using namespace std;
 
int main(int argc, char *argv[]){
    system("chcp 65001>01");
    srand(time(0));
 int tajneCislo;
 int hracovoCislo;
 tajneCislo = rand ()%5+1; //nahodne cislo do 1 do 5
 
 cout << "Zadej svuj typ na tajne cislo: ";
 cin >> hracovoCislo;
 
return 0;
}