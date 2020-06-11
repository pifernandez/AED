/*
Pilar Fernández
20200611
Bisiesto
*/

#include <iostream>
#include <cassert>

bool isBisiesto(int);

int main(){
    assert(isBisiesto(2020)); 
    assert(isBisiesto(2000)); 
    assert(not isBisiesto(1581)); 
    assert(not isBisiesto(1923)); 
    assert(not isBisiesto(1900)); 
    assert(isBisiesto(1582)); 
    assert(isBisiesto(2036)); 
}

bool isBisiesto(int x){
    return (x%4==0 and (x%100!=0 or x%400==0) and x>=1582);
}