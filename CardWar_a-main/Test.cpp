#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
#include <stdexcept>
#include <algorithm>
#include <iostream>
#include <string>
using namespace ariel;
using namespace std;

TEST_CASE("Game")
{
    Player p1("Jode");
    Player p2("Ameer");
    Card card(5);
 
   //
    Game game(p1, p2);
    CHECK_NOTHROW(game.playTurn());
    CHECK_EQ(p1.stacksize(),25); //after one turn should have 25 cards
    CHECK_EQ(p2.stacksize(),25);
    
    for (int i=0;i<10;i++) {
    game.playTurn();
   }
    CHECK_EQ(p1.stacksize(),15); 
    CHECK_EQ(p2.stacksize(),15);


    CHECK_NOTHROW(game.printLastTurn());
    //DOCTEST_ASSERT_NOTHROW(equal,game.printLastTurn(),0);
    CHECK(p1.cardesTaken()==5);
    CHECK(p2.cardesTaken()==7);
    CHECK_FALSE(card.isFlipped());
    CHECK_GE(p1.stacksize(),8);
    CHECK_LE(p1.cardesTaken(),10);
    CHECK_GE(p2.stacksize(),8);
    CHECK_LE(p2.cardesTaken(),10);
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(game.printWiner());
    CHECK_NOTHROW(p1.getName());
    CHECK_NOTHROW(p1.setName("Yosef"));
    CHECK_NOTHROW(card.flip());
    CHECK_NOTHROW(card.isFlipped());
    CHECK_NOTHROW(game.playAll());

    CHECK_EQ(p1.stacksize(),1);


////////////////////////////////////////

}