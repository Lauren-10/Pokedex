//
// Created by Lauren Knopp on 2/23/25.
//

#ifndef POKEDEX_H
#define POKEDEX_H
#include <vector>
#include <iomanip>
#include <fstream>
#include "Pokemon.h"

/*
 *this class will have a list of pokemon in it that acts as the pokedex.
 *the pokedex will also keep track of what pokemon the user has caught
 */

class Pokedex
{
private:
 vector<Pokemon> pokedex;
 vector<Pokemon> box;
 int num_captured;
 int total_pokemon;
public:
 /**
  * Constructors
  */
 Pokedex();
 Pokedex(string filename);

 /**
  *get num_captured and total_pokemon
  */
 int getTotalPokemon();
 int getNumCaptured();
 vector<Pokemon> getPokemon();
 vector<Pokemon> getBox();

 /**
  *add new capture to pokedex
  */
 void addPokemon(int index);
 /**
  *print valid pokedex
  */
 void pokedexToString();
 void boxToString();
 /**
  *find the index of a pokemon
  */
 int find_pokemon(string name);
 /**
  *read in data from the csv into the pokedex
  */
 void readDataFromFile(string filename, vector<Pokemon>& poke);
};


#endif //POKEDEX_H
