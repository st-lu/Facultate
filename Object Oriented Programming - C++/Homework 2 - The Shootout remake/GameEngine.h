//
// Created by luana on 4/30/2020.
//

#ifndef HOMEWORK_2___THE_SHOOTOUT_REMAKE_GAMEENGINE_H
#define HOMEWORK_2___THE_SHOOTOUT_REMAKE_GAMEENGINE_H

#include "Map.h"
#include "Character.h"
#include "Sniper.h"
#include "Spy.h"
#include "Soldier.h"
#include "Grenadier.h"
#include <vector>
using namespace std;
class Game {
protected:
    int Timer = rand()%50 + 10;
    Map Battlefield;
    vector<Character*> Characters;
public:
    Game(int, int);
    void addCharacters();
    void run(int);

    pair<int, int> findTarget(pair<int, int>, int);
    void showMap();
    ~Game();
};


#endif //HOMEWORK_2___THE_SHOOTOUT_REMAKE_GAMEENGINE_H
