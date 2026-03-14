#include <iostream>
#include <raylib.h>
#include "Sun.h"
#include "Planets.h"



int main(){
   
 Planet world;  
 Sun sol;
    


    InitWindow (800,800, "raylib fufando");

    while (!WindowShouldClose()) {
        SetTargetFPS(60);



       

        
        BeginDrawing();
        ClearBackground(BLACK);
        sol.draw();
         world.update();
         world.draw(400,400);
      


        EndDrawing();
    }
   
    
     return 0;
};


