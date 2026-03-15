#ifndef PLANET_H
#define PLANET_H



class earth {
    public:
    
    int size;
    
    int mass;

    float angle;

    float orbitRadius;

    float speed;


    earth();
   
    void draw(float sunX, float sunY);
    void update();
};


class mars {
    public:

     int size;
    
    int mass;

    float angle;

    float orbitRadius;

    float speed;


    mars();
   
    void draw(float sunX, float sunY);
    void update();



};


class mercury {
 
    public:


    int size;
    
    int mass;

    float angle;

    float orbitRadius;

    float speed;


    mercury();
   
    void draw(float sunX, float sunY);
    void update();


};

class venus {

    public:

    int size;
    
    int mass;

    float angle;

    float orbitRadius;

    float speed;


    venus();
   
    void draw(float sunX, float sunY);
    void update();



};

class jupiter {

    public:

    int size;
    
    int mass;

    float angle;

    float orbitRadius;

    float speed;


    jupiter();
   
    void draw(float sunX, float sunY);
    void update();



};

class saturn {

    public:

    int size;
    
    int mass;

    float angle;

    float orbitRadius;

    float speed;


    saturn();
   
    void draw(float sunX, float sunY);
    void update();



};


class uranus {

    public:

    int size;
    
    int mass;

    float angle;

    float orbitRadius;

    float speed;


    uranus();
   
    void draw(float sunX, float sunY);
    void update();



};


class neptune {

    public:

    int size;
    
    int mass;

    float angle;

    float orbitRadius;

    float speed;


    neptune();
   
    void draw(float sunX, float sunY);
    void update();



};







#endif