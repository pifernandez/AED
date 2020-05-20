/*
    Pilar Fernández
    20200520
    Ejemplos de Tipos de datos
*/

#include <iostream>
#include <string>

int main(){
    int entero = 10;
    std::cout << "Ejemplo del tipo de dato int: " << entero << "\n";

    long largo = 23984720938402;
    std::cout << "Ejemplo del tipo de dato long: " << largo << "\n";

    char caracter [5] = "$100";
    std::cout << "Ejemplo del tipo de dato char: " << caracter << "\n";

    unsigned positivo = 15;
    std::cout << "Ejemplo del tipo de dato unsigned: " << positivo << "\n";

    signed negativo = -15;
    std::cout << "Ejemplo del tipo de dato signed: " << negativo << "\n";

    double real = 1.56;
    std::cout << "Ejemplo del tipo de dato double: " << real << "\n";

    std::string cadena = "Algoritmos y Estructura de datos";
    std::cout << "Ejemplo del tipo de dato string: " << cadena << "\n";

    bool booleano_false = false;
    std::cout << "Ejemplo del tipo de dato bool false: " << booleano_false << "\n";

    bool booleano_true = true;
    std::cout << "Ejemplo del tipo de dato bool true: " << booleano_true << "\n";
}
