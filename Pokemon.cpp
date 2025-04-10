//
// Created by Lauren Knopp on 2/23/25.
//

#include "Pokemon.h"

/**
 * Constructors
 */
Pokemon::Pokemon()
{
 pokedex_id = 0;
 name = "";
 type_1 = "";
 type_2 = "";
 hp = 0;
 attack = 0;
 defense = 0;
 spec_attack = 0;
 spec_defense = 0;
 speed = 0;
 caught = false;
}
Pokemon::Pokemon(int pokemon_id, string pokemon_name, string type1, string type2, int hitPts, int att, int def, int specAtt, int specDef, int speedy)
{
 pokedex_id = pokemon_id;
 name = pokemon_name;
 type_1 = type1;
 type_2 = type2;
 hp = hitPts;
 attack = att;
 defense = def;
 spec_attack = specAtt;
 spec_defense = specDef;
 speed = speedy;
 caught = false;
}

/*
Pokemon::Pokemon(Pokemon& other)
{
 pokedex_id = other.getPokedex_id();
 name = other.getName();
 type_1 = other.getType1();
 type_2 = other.getType2();
 hp = other.getHp();
 attack = other.getAttack();
 defense = other.getDefense();
 spec_attack = other.getSpecAtt();
 spec_defense = other.getSpecDef();
 speed = other.getSpeed();
 caught = false;
}
*/
/**
 *getters
 */
int Pokemon::getPokedex_id() const
{
 return pokedex_id;
}
string Pokemon::getName() const
{
 return name;
}
string Pokemon::getType1() const
{
 return type_1;
}
string Pokemon::getType2() const
{
 return type_2;
}
int Pokemon::getHp() const
{
 return hp;
}
int Pokemon::getAttack() const
{
 return attack;
}
int Pokemon::getDefense() const
{
 return defense;
}
int Pokemon::getSpecAtt() const
{
 return spec_attack;
}
int Pokemon::getSpecDef() const
{
 return spec_defense;
}
int Pokemon::getSpeed() const
{
 return speed;
}
bool Pokemon::getCaught() const
{
 return caught;
}

/**
*setters
*/

void Pokemon::captured(bool caughts)
{
 caught = caughts;
}

string Pokemon::toString()
{
 string Pokemon = to_string(pokedex_id) + ": " + name;
 Pokemon.append("\nType(s): " + getType1() + ", " + getType2());
 Pokemon.append("\nHP: " + to_string(hp));
 Pokemon.append("\nAttack: " + to_string(attack));
 Pokemon.append("\nDefense: " + to_string(defense));
 Pokemon.append("\nSpecial Attack: " + to_string(spec_attack));
 Pokemon.append("\nSpecial Defense: " + to_string(spec_defense));
 Pokemon.append("\nSpeed: " + to_string(speed));
 return Pokemon;
}

bool operator ==(const Pokemon &pokemon1, const Pokemon &pokemon2)
{
 return pokemon1.name == pokemon2.name;
}