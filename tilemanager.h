#pragma once
#include "tile.h"

class TileManager {
private:
	bool Initialized;
	Tile *Tiles[49];
public:
	TileManager();
	~TileManager();
	bool Update();
};