#include "robo.h"
#include <iostream>

using namespace std;

void robo::showPos()
{
	cout << "Posicao em X: " << this->pos[0];
    cout << "\n";
	cout << "Posicao em Y: " << this->pos[1];
}

void robo::move(float t)
{
    this->pos[0] = this->speed[0] * t;
    this->pos[1] = this->speed[1] * t;
}

void robo::changeSpeed(float x, float y)
{
    this->speed[0] = x;
    this->speed[1] = y;
}