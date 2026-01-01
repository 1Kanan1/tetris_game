#include <SDL3/SDL.h>
#include <stdlib.h>

int main(void) {
  SDL_Init(SDL_INIT_VIDEO);
  SDL_Quit();

  return EXIT_SUCCESS;
}
