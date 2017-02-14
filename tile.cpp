#pragma once
#include "tile.h"


	Tile::Tile() {
		std::cout << "tile not initiated propperly" << std::endl;
	}
	Tile::~Tile() {

	}
	Tile::Tile(sf::Vector2i pos) {
		Choises = 1;
		Visited = false;
		Position = pos;
	}
	Tile::Tile(sf::Vector2i pos, sf::Vector2i targetPos, int choises) {
		Choises = choises;
		Visited = false;
		Position = pos;
		TargetTile = targetPos;
	}
	bool Tile::SetText(int selection, sf::String text) {
		Text[selection] = text;
		return true;
	}
	bool Tile::Enter() {
		
		std::cout << Text[0].toAnsiString() << std::endl;
		char input;
		std::cin >> input;
		return true;
	}
	bool Tile::Leave() {

		return true;
	}
	bool Tile::SetChoises(int choises) {
		Choises = choises;
		return true;
	}
