#include "Planets.h"
#include <raylib.h>
#include <cmath>

Planet::Planet(){

    size = 8;
    mass = 1;
    angle = 0;
    orbitRadius = 120;
    speed = 1.0f;

}

void Planet::draw(float sunX, float sunY){

    float x = sunX + cos(angle) * orbitRadius;
    float y = sunY + sin(angle) * orbitRadius;

    DrawCircleLines(sunX, sunY, orbitRadius, WHITE);

    DrawCircle(x,y, size, BLUE);

}

void Planet::update(){
    angle += speed * GetFrameTime();
}



mars::mars(){

    size = 5;
    mass = 1;
    angle = 0;
    orbitRadius = 150;
    speed = 0.5f;




}

void mars::draw(float sunX, float sunY){

    float x = sunX + cos(angle) * orbitRadius;
    float y = sunY + sin(angle) * orbitRadius;

    DrawCircleLines(sunX, sunY, orbitRadius, WHITE);

    DrawCircle(x,y, size, RED);



}

void mars::update(){
    
    angle += speed * GetFrameTime();

}





mercury::mercury(){

    size = 4;
    mass = 1;
    angle = 0;
    orbitRadius = 100;
    speed = 1.5f;




}

void mercury::draw(float sunX, float sunY){

    float x = sunX + cos(angle) * orbitRadius;
    float y = sunY + sin(angle) * orbitRadius;

    DrawCircleLines(sunX, sunY, orbitRadius, WHITE);

    DrawCircle(x,y, size, BROWN);



}

void mercury::update(){
    
    angle += speed * GetFrameTime();

}


