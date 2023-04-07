#include "player.hpp"
#include "game.hpp"
#include "card.hpp"
 using namespace ariel;
        


        Game::Game(Player p1_, Player p2_){
            p1= new Player("");
            p2= new Player("");
            p1->setName(p1_.getName());
            p2->setName(p2_.getName());
            //for(int i=0; i<10; i++){
           // }
        }
        void Game::playTurn(){

        }

        void Game::printLastTurn(){

        }

        void Game::playAll(){
            //int x = 5/0;

        }

        void Game::printWiner(){

        }

       void Game::printLog(){

        }

       void Game::printStats(){

        }



 

