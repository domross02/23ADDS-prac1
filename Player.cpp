#include "Player.h"
#include <string>
using namespace std;
Player::Player(){
    name="Computer";
}
    Player::Player(std::string inname){
        name=inname;
    }

string Player::getName(){
    return name;
}