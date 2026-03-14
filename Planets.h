#ifndef PLANET_H
#define PLANET_H



class Planet {
    public:
    
    int size;
    
    int mass;

    float angle = 0.0f;

    float orbitRadius = 150.0f;

    float speed = 0.5f;


    Planet();
    void draw(float sunX, float sunY);
    void update();
};










#endif