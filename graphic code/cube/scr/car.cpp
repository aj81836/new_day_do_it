#include <graphics.h>
#include <iostream>

// Function to draw a simple car
void drawCar() {
    // Body of the car
    setcolor(RED);
    rectangle(100, 200, 300, 250); // Main body
    rectangle(130, 150, 270, 200); // Top section

    setfillstyle(SOLID_FILL, BLUE);
    floodfill(105, 205, RED); // Fill the main body
    floodfill(135, 155, RED); // Fill the top section

    // Wheels
    setcolor(BLACK);
    circle(140, 260, 20); // Left wheel
    circle(260, 260, 20); // Right wheel

    setfillstyle(SOLID_FILL, BLACK);
    floodfill(141, 261, BLACK); // Fill left wheel
    floodfill(261, 261, BLACK); // Fill right wheel

    // Windows
    setcolor(BLUE);
    rectangle(140, 160, 180, 195); // Left window
    rectangle(220, 160, 260, 195); // Right window

    setfillstyle(SOLID_FILL, CYAN);
    floodfill(141, 161, CYAN); // Fill left window
    floodfill(221, 161, CYAN); // Fill right window
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    if (graphresult() != grOk) {
        std::cerr << "Graphics initialization failed!" << std::endl;
        return 1;
    }

    // Draw the car
    drawCar();

    getch(); // Wait for a key press
    closegraph(); // Close the graphics mode
    return 0;
}
