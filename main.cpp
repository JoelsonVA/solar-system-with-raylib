#include <iostream>
#include <raylib.h>
#include "Sun.h"



int main(){
   
    
Sun sol;
    


    InitWindow (800,800, "raylib fufando");

    while (!WindowShouldClose()) {
        SetTargetFPS(30);

        

        
        BeginDrawing();
        ClearBackground(BLACK);
        sol.draw();

      


        EndDrawing();
    }
   
    
     return 0;
};


