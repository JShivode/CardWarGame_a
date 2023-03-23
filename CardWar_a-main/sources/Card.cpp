#include "card.hpp"
using namespace std;
using namespace ariel;
Card::Card(int n){
    num = n;
    flipped=0;//number is hidden
}
int Card::isFlipped(){
    return flipped;
}
void Card::flip(){
    if(flipped==0){
        flipped=1;
    }
    else flipped=0;
}

    
