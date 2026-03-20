#include "inc/Screen.hpp"


int main() {
    unsigned int height = 800;
    unsigned int width = 600;

    Screen brickBreaker(height, width);
    brickBreaker.runGame();
    
    return (0);
} 