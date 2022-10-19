#include <iostream>
#include <robo.h>

using namespace std;

int main()
{
    robo r1, r2;
    
    /*

    r1.id = 1000;
    r1.pos[] = {0, 0};
    r1.speed[] = {0, 0};

    r2.id = 2000;
    r2.pos[] = {0, 0};
    r2.speed[] = {0, 0}; 
    
    */

    r1.id = 1000;
    r1.pos[0] = 0;
    r1.pos[1] = 0;
    r1.speed[0] = 0;
    r1.speed[1] = 0;

    r2.id = 2000;
    r2.pos[0] = 0;
    r2.pos[1] = 0;
    r2.speed[0] = 0;
    r2.speed[1] = 0;

    //Simulção 

    cout << "Robo 1: \n\n";

    cout << "Posicao inicial: " << r1.showPos() << "\n";
    r1.changeSpeed(7,7);
    r1.move(30);
    cout << "Posicao final: " << r1.showPos() << "\n";

    cout<< "Robo 2: \n\n";

    cout << "Posicao inicial: " << r1.showPos() << "\n";
    r2.changeSpeed(14,14);
    r2.move(60);
    cout << "Posicao final: " << r1.showPos() << "\n";

}