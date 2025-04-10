//
// Created by Lauren Knopp on 2/23/25.
//

#include "Pokedex.h"
#include "Pokemon.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
/**
* Constructors
*/
Pokedex::Pokedex()
{
 num_captured = 0;
 total_pokemon = 0;
}

/**
 * this method will read in from a file
 * and add pokemon as needed
 * @param filename
 */
Pokedex::Pokedex(string filename)
{
 readDataFromFile(filename, pokedex);
 total_pokemon = pokedex.size();
 num_captured = 0;

}

/**
 *get num_captured, pokedex, box, and total_pokemon
 */
int Pokedex::getTotalPokemon()
{
 return total_pokemon;
}
int Pokedex::getNumCaptured()
{
 return num_captured;
}
vector<Pokemon> Pokedex::getPokemon()
{
 return pokedex;
}
vector<Pokemon> Pokedex::getBox()
{
 return box;
}
/**
 *add new capture to box
 */
void Pokedex::addPokemon(int index)
{
 box.push_back(pokedex[index]);
 num_captured++;
 pokedex[index].captured(true);
}
/**
 *print valid pokedex
 */
void Pokedex::pokedexToString()
{
 cout << "Number of Pokemon:" << pokedex.size() << endl;
 cout << "Total Pokemon:" << total_pokemon << endl;
 cout << "Pokemon captured:" << num_captured << endl;
 for(Pokemon monster : pokedex)
 {
  cout << monster.toString() << endl;
 }
}

/**
 * print all captured Pokemon
 */
void Pokedex::boxToString()
{
 cout << "Number of Pokemon Captured:" << box.size() << endl;
 for(Pokemon monster : box)
 {
  cout << monster.toString() << endl;
 }
}

/**
 *find pokemon
 *@parem name
 */
int Pokedex::find_pokemon(string name)
{
 for(int i = 0; i < pokedex.size(); i++)
 {
  if(name == pokedex[i].getName())
  {
   return i;
  }
 }
 return -1;
}

/**
 * Utility function to read in the pokemon from the csv
 * @param filename
 * @param poke
 */
void Pokedex::readDataFromFile(string filename, vector<Pokemon>& poke) {
 ifstream fileIn;
 fileIn.open(filename);

 if (!fileIn) {
  cout << "Error: Could not open file " << filename << endl;
  return;
 }

 string name, type_1, type_2;
 int dex_num, hp, attack, defense, special_a, special_d, speed;
 char comma;

 while (fileIn) {

  fileIn >> dex_num;
  fileIn >> comma;
  getline(fileIn, name, ',');
  getline(fileIn, type_1, ',');
  getline(fileIn, type_2, ',');
  fileIn >> hp >> comma;
  fileIn >> attack >> comma;
  fileIn >> defense >> comma;
  fileIn >> special_a >> comma;
  fileIn >> special_d >> comma;
  fileIn >> speed;

  // Check if all reads were successful and not at EOF
  if (fileIn || fileIn.eof()) {
   // Consume the newline at the end of the line
   fileIn.ignore(numeric_limits<streamsize>::max(), '\n');

   // Add the pokemon to the vector
   poke.push_back(Pokemon(dex_num, name, type_1, type_2, hp, attack, defense, special_a, special_d, speed));
  } else {
   // If any read failed mid-line, break
   break;
  }
 }

 fileIn.close();
}