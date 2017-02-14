#include "tilemanager.h"

TileManager::TileManager() {
	int id = 0;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			Tiles[id] = new Tile(sf::Vector2i(i, j));
			id++;
		}
		
	}
	Tiles[0]->SetText(0, sf::String("You stand at the edge of the forrest. Nothing interesting seems to be happening here."));
	Tiles[0]->SetChoises(1);
}
TileManager::~TileManager() {

}
bool TileManager::Update() {

	return true;
}