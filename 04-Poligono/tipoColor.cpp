#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

    struct Color {uint8_t red, green, blue;};

    const Color colorAzul = {0,0,255};
    const Color colorVerde = {0,255,0};
    const Color colorRojo = {255,0,0};

//Prototipo
Color mezcla(Color, Color);


int main(){
    assert( mezcla( {0,25,0}, {0,50,0}).green == 37 );
    assert( mezcla( {125,0,0}, {200,0,0}).red == 162 );

    system("PAUSE()");
    return 0;
}


Color mezcla(Color color1, Color color2){
    Color mezclaColor;

    mezclaColor.red = (color1.red + color2.red)/2;
    mezclaColor.green = (color1.green + color2.green)/2;
    mezclaColor.blue = (color1.blue + color2.blue)/2;

    return mezclaColor;
}