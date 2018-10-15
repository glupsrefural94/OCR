#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include "Greyscal.h"
#include "pixel.h"


int main(int argc, char *argv[])
{
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Texture *texture = NULL;
    SDL_Surface *surface = NULL;
    SDL_Surface *tmp = NULL;
    int statut = EXIT_FAILURE;

    tmp = SDL_LoadBMP("Jeremy.bmp");

    SDL_CreateWindowAndRenderer(640, 480, SDL_WINDOW_SHOWN, &window, &renderer);
    // surface = SDL_CreateRGBSurface(0, 300, 200, 32, 0, 0, 0, 0);
    // texture = SDL_CreateTextureFromSurface(renderer, surface);
    // texture = SDL_CreateTextureFromSurface(renderer, tmp);
    // SDL_FreeSurface(surface);
    // SDL_FreeSurface(tmp);
    surface = SDL_GetWindowSurface(window);
    SDL_BlitSurface(tmp, NULL, surface, NULL);
    SDL_RenderPresent(renderer);
    SDL_UpdateWindowSurface(window);
    SDL_LockSurface(tmp);
    makeitgrey(tmp, tmp->w, tmp->h);
    SDL_UnlockSurface(tmp);
    SDL_LockSurface(tmp);
    makeitblackandwhite(tmp, tmp->w, tmp->h);
    SDL_UnlockSurface(tmp);
    
    
    SDL_BlitSurface(tmp, NULL, surface, NULL);
    SDL_RenderPresent(renderer);
    SDL_UpdateWindowSurface(window);
    
    
    statut = EXIT_SUCCESS;
    SDL_Delay(3000);

Quit:
    if(NULL != texture)
        SDL_DestroyTexture(texture);
    if(NULL != renderer)
        SDL_DestroyRenderer(renderer);
    if(NULL != window)
        SDL_DestroyWindow(window);
    SDL_Quit();
    return statut;
}
