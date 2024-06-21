#include "iostream"
#include "color.h"
 /*Hadani tajneho cisla*/
using namespace std;
 
int main(int argc, char *argv[]){
    system("chcp 65001>01");
 int tajneCislo;
 int hracovoCislo;
 tajneCislo = rand ()%5+1; //nahodne cislo do 1 do 5
 cout << "Zadej svuj typ na tajne cislo: ";//loterie
 cin >> hracovoCislo;
 if(tajneCislo == hracovoCislo) {
    cout << GREEN<< "Správně!" << WHITE<< endl;
 } else cout <<RED <<"Neuhodl!"<<WHITE << endl;
return 0;
}
