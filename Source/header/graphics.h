#ifndef GRAPHICS_H
#define GRAPHICS_H

struct SDL_Window;
struct SDL_Renderer;

class Graphics {
public:
	// constructor: create the window and initialize
	Graphics();
	// destructor
	~Graphics();
private:
	// pointer to SDL_Window: where we are going to draw
	SDL_Window* _window;
	// pointer to SDL_Renderer: does the drawing to the window
	SDL_Renderer* _renderer;
};

#endif
