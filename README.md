# Kanto Pokedex
Kanto Pokedex made by Lauren Knopp. The user gets the chance to complete the Kanto pokedex. Upon running the program,
the program reads in from a csv and populates a pokedex with all 151 pokemon in Kanto. The user can then choose to print the complete
pokedex, print the list of pokemon they have captured, and add a pokemon to their captured list. Upon completing the pokedex (capturing all pokemon),
there is a special message for the user, and their code will terminate. 

## Bugs
- Single typed pokemon have a comma after their only type
- When adding a Pokemon to your captured list you can only add it if the name is capitalized

## Future Work
- I would love to do spritework in the future for this project. If we learn about 16 bit graphics I'd love to make a GUI for the pokedex
- I want to add additional functionality for the user, so pokemon can be added by name or dex number. I'd also like to hide the complete pokedex in the future
so the user doesn't have a reference to all pokemon but I figure I incorporate it to show program functionality

## Citations
- CSV file of kanto pokemon generated on the pokemon database website at the following link: https://pokemondb.net/tools/text-list
- Pokedex::ReadDataFromFile function was derived from CS 2240's project1 function of the same name. Link to my Project 1 repository here: https://github.com/uvmcs2240f2024/Project1-lgknopp

## Project Details:
- The Kanto Pokedex is written in C++
