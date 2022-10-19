#ifndef ROBO_H
#define ROBO_H

class robo
{
private: 
public:
	int id;
	float pos[2];
    float speed[2];
	void showPos();
    void move(float t);
    void changeSpeed(float x, float y);

};

#endif