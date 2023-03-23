#ifndef PLAYER_HPP
#define PLAYER_HPP
//#include "sources/card.hpp"
#include <string>
#include "card.hpp"
using namespace std;
namespace ariel
{
    class Player
    {
        string name;
        public: Player(string n);
        public: string getName();
        public: void setName(string n);
        int stacksize();
        int cardesTaken();
   
    };
    
    

    
} // namespace ariel

#endif
