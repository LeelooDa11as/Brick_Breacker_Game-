#include "inc/Screen.hpp"


int main() {
    int height = 1000;
    int width = 600;

    Screen brickBreaker(height, width);
    brickBreaker.runGame();
    
    return (0);
} 