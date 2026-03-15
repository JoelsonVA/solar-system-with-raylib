#include "Planets.h"
#include <raylib.h>
#include <cmath>

earth::earth(){

    size = 8;
    mass = 1;
    angle = 0;
    orbitRadius = 125;
    speed = 1.0f;

}

void earth::draw(float sunX, float sunY){

    float x = sunX + cos(angle) * orbitRadius;
    float y = sunY + sin(angle) * orbitRadius;

    DrawCircleLines(sunX, sunY, orbitRadius, WHITE);

    DrawCircle(x,y, size, BLUE);

}

void earth::update(){
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


venus::venus(){

    size = 5;
    mass = 1;
    angle = 0;
    orbitRadius = 110;
    speed = 1.3f;

}

void venus::draw(float sunX, float sunY){

    float x = sunX + cos(angle) * orbitRadius;
    float y = sunY + sin(angle) * orbitRadius;

    DrawCircleLines(sunX, sunY, orbitRadius, WHITE);

    DrawCircle(x,y, size, ORANGE);

}

void venus::update(){
    angle += speed * GetFrameTime();
}


jupiter::jupiter(){

    size = 15;
    mass = 1;
    angle = 0;
    orbitRadius = 200;
    speed = 0.4f;

}

void jupiter::draw(float sunX, float sunY){

    float x = sunX + cos(angle) * orbitRadius;
    float y = sunY + sin(angle) * orbitRadius;

    DrawCircleLines(sunX, sunY, orbitRadius, WHITE);

    DrawCircle(x,y, size, GRAY);

}

void jupiter::update(){
    angle += speed * GetFrameTime();
}


saturn::saturn(){

    size = 12;
    mass = 1;
    angle = 0;
    orbitRadius = 230;
    speed = 0.3f;

}

void saturn::draw(float sunX, float sunY){

    float x = sunX + cos(angle) * orbitRadius;
    float y = sunY + sin(angle) * orbitRadius;

    DrawCircleLines(sunX, sunY, orbitRadius, WHITE);

    DrawCircle(x,y, size, BROWN);

}

void saturn::update(){
    angle += speed * GetFrameTime();
}



uranus::uranus(){

    size = 9;
    mass = 1;
    angle = 0;
    orbitRadius = 255;
    speed = 0.2f;

}

void uranus::draw(float sunX, float sunY){

    float x = sunX + cos(angle) * orbitRadius;
    float y = sunY + sin(angle) * orbitRadius;

    DrawCircleLines(sunX, sunY, orbitRadius, WHITE);

    DrawCircle(x,y, size, SKYBLUE);

}

void uranus::update(){
    angle += speed * GetFrameTime();
}


neptune::neptune(){

    size = 8;
    mass = 1;
    angle = 0;
    orbitRadius = 280;
    speed = 0.1f;

}

void neptune::draw(float sunX, float sunY){

    float x = sunX + cos(angle) * orbitRadius;
    float y = sunY + sin(angle) * orbitRadius;

    DrawCircleLines(sunX, sunY, orbitRadius, WHITE);

    DrawCircle(x,y, size, DARKBLUE);

}

void neptune::update(){
    angle += speed * GetFrameTime();
}




