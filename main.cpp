#include <iostream>
#include <raylib.h>
#include "Sun.h"
#include "Planets.h"



int main(){
   
 Planet world;
 mars redPlanet;  
 mercury Hotrock;
 Sun sol;

    


    InitWindow (800,800, "raylib fufando");

    while (!WindowShouldClose()) {
        SetTargetFPS(60);



       

        
        BeginDrawing();
        ClearBackground(BLACK);
        
        sol.draw();

        redPlanet.update();
        redPlanet.draw(400,400);

        Hotrock.update();
        Hotrock.draw(400,400);
        
        world.update();
         
        world.draw(400,400);
      


        EndDrawing();
    }
   
    
     return 0;
};


