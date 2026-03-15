#include <iostream>
#include <raylib.h>
#include "Sun.h"
#include "Planets.h"



int main(){
   
 Sun sol;   
 mercury Hotrock;
 venus venusP;   
 earth world;
 mars redPlanet;
 jupiter BigP;  
 saturn ringP;
 uranus uranusP;
 neptune neptuneP;

    

 

    InitWindow (800,800, "Solar System With Raylib");

    while (!WindowShouldClose()) {
        SetTargetFPS(60);


        DrawFPS(40,30);


        DrawText("Solar System",240,50,50,WHITE);


        BeginDrawing();
        ClearBackground(BLACK);






        
        sol.draw();

        neptuneP.update();
        neptuneP.draw(400,400);

        uranusP.update();
        uranusP.draw(400,400);

        ringP.update();
        ringP.draw(400,400);


        venusP.update();
        venusP.draw(400,400);


        redPlanet.update();
        redPlanet.draw(400,400);


        BigP.update();
        BigP.draw(400,400);

        

        Hotrock.update();
        Hotrock.draw(400,400);

        
        world.update();
        world.draw(400,400);
      


        EndDrawing();
    }
   
    
     return 0;
};


