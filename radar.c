#include <SDL2/SDL.h>
#include <libserialport.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// SDL global variables
SDL_Window *window;
SDL_Renderer *renderer;

// Function to draw radar lines
void drawRadar() {
    // Draw radar arcs and lines using SDL_RenderDrawLine or SDL_RenderDrawArc
}

// Function to draw moving line
void drawLine(int angle) {
    // Translate and draw a line at the given angle using trigonometry
}

// Function to handle serial communication
void readSerialData(struct sp_port *port, char *angle, char *distance) {
    // Read data from the serial port and parse it into angle and distance
}

int main(int argc, char* argv[]) {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        printf("SDL_Init Error: %s\n", SDL_GetError());
        return 1;
    }

    // Create an SDL window and renderer
    window = SDL_CreateWindow("Radar Simulation", 100, 100, 1200, 700, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("SDL_CreateWindow Error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (renderer == NULL) {
        SDL_DestroyWindow(window);
        printf("SDL_CreateRenderer Error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // Serial port initialization
    struct sp_port *port;
    if (sp_get_port_by_name("COM5", &port) != SP_OK) {
        printf("Error opening serial port\n");
        return 1;
    }
    if (sp_open(port, SP_MODE_READ) != SP_OK) {
        printf("Error opening serial port\n");
        return 1;
    }
    sp_set_baudrate(port, 9600);

    // Main loop
    char angle[10], distance[10];
    int running = 1;
    SDL_Event event;
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = 0;
            }
        }

        // Read data from the serial port
        readSerialData(port, angle, distance);

        // Clear screen
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        // Draw radar and line based on the angle
        drawRadar();
        drawLine(atoi(angle));

        // Update screen
        SDL_RenderPresent(renderer);
    }

    // Clean up
    sp_close(port);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
