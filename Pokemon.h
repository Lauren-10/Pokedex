//
// Created by Lauren Knopp on 2/23/25.
//

#ifndef POKEMON_H
#define POKEMON_H
#include <iomanip>
#include <sstream>

/*
 *the Pokemon class is meant to serve as a way to create pokemon
 *objects for the Pokedex class
 */
using namespace std;
class Pokemon
{
 private:
  //All variables associated with Pokemon
  int pokedex_id;
  string name;
  string type_1;
  string type_2;
  int hp;
  int attack;
  int defense;
  int spec_attack;
  int spec_defense;
  int speed;
  bool caught;
 public:

  /**
   * Constructors
   */
  Pokemon();
  Pokemon(int pokemon_id, string pokemon_name, string type1, string type2, int hitPts, int att, int def, int specAtt, int specDef, int speedy);
  //Pokemon(Pokemon& other);

  /**
   *getters
   */
  int getPokedex_id() const;
  string getName() const;
  string getType1() const;
  string getType2() const;
  int getHp() const;
  int getAttack() const;
  int getDefense() const;
  int getSpecAtt() const;
  int getSpecDef() const;
  int getSpeed() const;
  bool getCaught() const;

  /**
   *setters
   */
  void captured(bool caughts);
 /**
  *print method for pokemon
  */
 string toString();
 /**
  *overload the "==" operator
  */
 friend bool operator==(const Pokemon &pokemon1, const Pokemon &pokemon2);
};



#endif //POKEMON_H
