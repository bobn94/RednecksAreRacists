#pragma once
#include <iostream>
#include <SFML\Window.hpp>

class Tile {
	private:
		sf::String Text[10];
		bool Visited;
		sf::Vector2i Position;
		sf::Vector2i TargetTile;
		int Choises;
		
	public:
		Tile();
		~Tile();
		Tile(sf::Vector2i pos);
		Tile(sf::Vector2i pos, sf::Vector2i targetPos, int choises);
		bool SetText(int selection, sf::String text);
		bool Enter();
		bool Leave();
		bool SetChoises(int choises);
};