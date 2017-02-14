#pragma once
#include "tile.h"

class TileManager {
private:
	bool Initialized;
	Tile *Tiles[];
public:
	TileManager();
	~TileManager();
	bool Update();
};