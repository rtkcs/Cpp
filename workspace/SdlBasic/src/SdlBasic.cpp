//============================================================================
// Name        : SdlBasic.cpp
// Author      : rtakacs
// Version     :
// Copyright   : Some Rights Reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>

using namespace std;

int main2() {

	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;

	if(SDL_Init(SDL_INIT_VIDEO) < 0){
		cout << "SQL Init failed" << endl;
		return 1;
	}

	SDL_Window *window = SDL_CreateWindow("SDL Basic", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if(window == NULL){
		SDL_Quit();
		return 2;
	}

	//cout << "SDL Init succeeded" << endl; // prints SDL

	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
	SDL_Texture  *texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

	if(renderer == NULL){
		cout << "Could not create renderer" << endl;
		return 3;
	}
	if(texture == NULL){
		cout << "Could not create texture" << endl;
		return 4;
	}

	Uint32 *buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];
	memset( buffer, 0x00, SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32));
	//buffer[30000] = 0xFFFFFFFF;
	for(int i=0; i<SCREEN_WIDTH*SCREEN_HEIGHT;i++){
		buffer[i] = 0x00FF80FF;
	}

	SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH*sizeof(Uint32));
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, texture, NULL, NULL);
	SDL_RenderPresent(renderer);

	bool quit = false;
	SDL_Event event;

	while(!quit){
		while(SDL_PollEvent(&event)){
			if(event.type == SDL_QUIT){
				quit = true;
			}
		}
	}

	delete [] buffer;
	SDL_DestroyRenderer(renderer);
	SDL_DestroyTexture(texture);
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
