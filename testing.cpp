//
// Created by Lauren Knopp on 2/23/25.
//
#include "Pokedex.h"
#include "Pokemon.h"
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

// Main testing function
int main() {
    vector<Pokemon> poke;
    Pokedex pokedex;

    // Test 1: Create and add a Pokemon manually
    cout << "Test 1: manual adding" << endl;
    Pokemon pikachu(25, "Pikachu", "Electric", "", 35, 55, 40, 50, 50, 90);
    cout << "Original: " << pikachu.getName() << " (#" << pikachu.getPokedex_id() << ")\n";
    cout << endl;

    //Test 2: testing read in from file
    cout << "Test 2: Read in and Print functions: " << endl;
    cout << endl;
    pokedex = Pokedex("../pokemon.csv");
    pokedex.pokedexToString();

    //Test 3: testing find
    cout << "Test 3: finding pokemon index" << endl;
    cout << endl;
    cout << "Abra's index: " << pokedex.find_pokemon("Abra") << endl;
    cout << "Non-existent index" << pokedex.find_pokemon("Non-existent") << endl;

    //Test 4: Box add and print
    cout << "Test 4: Box Testing" << endl;
    cout << endl;
    pokedex.addPokemon(pokedex.find_pokemon("Squirtle"));
    pokedex.boxToString();


    return 0;
}