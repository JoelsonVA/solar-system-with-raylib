#ifndef PLANET_H
#define PLANET_H



class Planet {
    public:
    
    int size;
    
    int mass;

    float angle;

    float orbitRadius;

    float speed;


    Planet();
   
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







#endif