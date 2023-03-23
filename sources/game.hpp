#ifndef GAME_HPP
#define GAME_HPP
#include "player.hpp"
namespace ariel{
class Game
{
   private: Player* p1;
   private: Player* p2;
 public: Game(Player p1_, Player p2_);
 void playTurn();

  void printLastTurn();// print the last turn stats. For example:
                                                    // Alice played Queen of Hearts Bob played 5 of Spades. Alice wins.
                                                    // Alice played 6 of Hearts Bob played 6 of Spades. Draw. Alice played 10 of Clubs Bob played 10 of Diamonds. draw. Alice played Jack of Clubs Bob played King of Diamonds. Bob wins.
   //int stacksize(); //prints the amount of cards left. should be 21 but can be less if a draw was played
   //int cardesTaken(); // prints the amount of cards this player has won. 
   void playAll(); //playes the game untill the end
   void printWiner(); // prints the name of the winning player
   void printLog(); // prints all the turns played one line per turn (same format as game.printLastTurn())
   void printStats();
};
}

#endif




