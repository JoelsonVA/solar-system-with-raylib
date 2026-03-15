# Solar System Simulation 

A simple solar system simulation built in c++ using Raylib.

## Features 

- Sun at the center 
- Planet orbiting using trigonometry
- Real time redering 
- Simple orbital physics

## Technologies

- C++
- Raylib 
- Makefile (for building the project)

## Orbital Mechanics 

The Planet position is calculated using circular motion equation:

x = cx + r * cos(angle)
y = cy + r * sin(angle)

Where:

- cx, cy -> position of the sun
- r -> orbit radius
- angle -> orbital angle


## Project Structure

Solar System
|- main.cpp
|- Sun.cpp
|- Sun.h
|- Planets.cpp
|- Planets.h
|- Makefile
|- README.md


## Build 
- Compile the project using:
make
- Recommended evironment: Linux

## Run 
- Run the program with:

./solar_system


## Dependencies 

 - This project requires Raylib to be installed.


 ### Ubuntu / Debian

 - sudo apt install libraylib-dev


 ### Arch Linux

 - sudo pacman -S raylib


## Future improvements 

- Multiple planets
- Diferent orbital speeds
- Moon orbiting a planet
- Camera zoom and movement



