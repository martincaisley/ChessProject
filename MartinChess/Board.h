#pragma once
#include "SDL.h"
class Board {
public:
	void DrawBoard();
	void InitRect();
	
private:
	int rows;
	int columns;
	const int startPos = 0;
	SDL_Rect rect;
	Board();
	~Board();

};