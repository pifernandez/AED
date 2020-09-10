#include<iostream>
#include<array>
#include<string>


using namespace std;
int main(){
    struct punto {double x, y;};
    struct triangulo {array<punto, 3> puntostri; string colortri;};
    struct poligono {unsigned p; array<punto, 50> puntospol; string colorpol;};


    
/*
AddVértice
GetVértice
SetVértice
RemoveVértice
GetCantidadLados
Get_GetPerímetro*/
}