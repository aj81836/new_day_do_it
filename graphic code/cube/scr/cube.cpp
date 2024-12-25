#include <graphics.h>
#include <iostream>

// Function to draw a 3D-like cube
void drawCube() {
    // Front face coordinates
    int frontFace[] = {200, 200, 300, 200, 300, 300, 200, 300};
    
    // Back face offset
    int xOffset = 50;
    int yOffset = 50;
    
    // Draw the front face
    setcolor(RED);
    rectangle(frontFace[0], frontFace[1], frontFace[4], frontFace[5]);
    
    // Draw the back face
    setcolor(GREEN);
    rectangle(frontFace[0] + xOffset, frontFace[1] + yOffset,
              frontFace[4] + xOffset, frontFace[5] + yOffset);
    
    // Connect corresponding vertices of the front and back faces
    setcolor(WHITE);
    line(frontFace[0], frontFace[1], frontFace[0] + xOffset, frontFace[1] + yOffset);
    line(frontFace[2], frontFace[3], frontFace[2] + xOffset, frontFace[3] + yOffset);
    line(frontFace[4], frontFace[5], frontFace[4] + xOffset, frontFace[5] + yOffset);
    line(frontFace[6], frontFace[7], frontFace[6] + xOffset, frontFace[7] + yOffset);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    if (graphresult() != grOk) {
        std::cerr << "Graphics initialization failed!" << std::endl;
        return 1;
    }

    // Draw the 3D-like cube
    drawCube();

    getch(); // Wait for a key press
    closegraph(); // Close the graphics mode
    return 0;
}
