//
// Created by Lauren Knopp on 2/23/25.
//

#include <cstdio>
#include <iostream>
#include <string>

#include "Pokemon.h"
#include "Pokedex.h"
using namespace std;


int main()
{

    cout<<"Welcome to your Kanto Pokedex!"<<endl;
    Pokedex pokedex = Pokedex("../pokemon.csv");
    string input = "";
    char character = ' ';
    string name = "";
    Pokemon captured = Pokemon();
    while(true)
    {
        cout << "Press n if you'd like to document a captured pokemon, c to list all captured pokemon, d to list the complete pokedex, and q to quit: ";
        getline(cin, input);
        while(pokedex.getNumCaptured() < pokedex.getTotalPokemon())
        {
            if(input.length() > 1)
            {
                cout << "Invalid input. Press n if you'd like to document a captured pokemon, c to list all captured pokemon, d to list the complete pokedex, and q to quit: ";
                getline(cin, input);
            }
            else if(input.empty())
            {
                cout << "No input. Press n if you'd like to document a captured pokemon, c to list all captured pokemon, d to list the complete pokedex, and q to quit: ";
                getline(cin, input);
            }
            else
            {
                character = input[0];
                break;
            }
        }
        if(character == 'n')
        {
            cout << "Enter the captured pokemon's name: ";
            cin >> name;

            while(true)
            {
                if(pokedex.find_pokemon(name) == -1)
                {
                    cout << "Pokemon " << name << " doesn't exist!" << endl;
                }
                else if(count(pokedex.getBox().begin(), pokedex.getBox().end(), pokedex.getPokemon()[pokedex.find_pokemon(name)]) == 1)
                {
                    cout << "Pokemon " << name << " is already captured" << endl;
                }
                else
                {
                    break;
                }
                cout<< "Enter the captured pokemon's name: ";
                cin >> name;
            }
            //captured = Pokemon(pokedex.getPokemon()[pokedex.find_pokemon(name)]);
            pokedex.addPokemon(pokedex.find_pokemon(name));
            cout << "Pokemon " << name << " captured successfully! Added to your box." << endl;
            pokedex.boxToString();

        }
        else if(character == 'd')
        {
            pokedex.pokedexToString();
        }
        else if(character == 'c')
        {
            pokedex.boxToString();
        }
        else if(character == 'q')
        {
            break;
        }
        else
        {
            cout << "Invalid input. Please enter a valid character" << endl;
        }
    }
    if(pokedex.getNumCaptured() == pokedex.getTotalPokemon())
    {
        cout << "You have captured all Kanto Pokemon, you must be the champion of the Kanto Region!";
    }
    return 0;
}
