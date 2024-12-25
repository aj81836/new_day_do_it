#include <graphics.h>
#include <iostream>

// Function to draw a simple tree
void drawTree() {
    // Trunk of the tree
    setcolor(BROWN);
    rectangle(190, 200, 210, 300); // Tree trunk
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(191, 201, BROWN); // Fill the trunk

    // Leaves (tree canopy)
    setcolor(GREEN);
    circle(200, 150, 50); // Top circle
    circle(160, 200, 40); // Left circle
    circle(240, 200, 40); // Right circle

    setfillstyle(SOLID_FILL, GREEN);
    floodfill(201, 151, GREEN); // Fill top circle
    floodfill(161, 201, GREEN); // Fill left circle
    floodfill(241, 201, GREEN); // Fill right circle
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    if (graphresult() != grOk) {
        std::cerr << "Graphics initialization failed!" << std::endl;
        return 1;
    }

    // Draw the tree
    drawTree();

    getch(); // Wait for a key press
    closegraph(); // Close the graphics mode
    return 0;
}
