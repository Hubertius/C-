#ifndef BAD_DUDE_H_
#define BAD_DUDE_H_

#include "gunslinger.h"
#include "poker_player.h"

class BadDude : public Gunslinger, public PokerPlayer
{
    public:
        BadDude(int gushesOnRev = 0, double timeOfDraw = 0.0, std::string name = "Unknown", std::string surname = "Unknown");
        int getDrawTimeOfRev() const { return this->timeOfDrawing; }
        int getCardOfPlayer() const { return this->randomCardNum; }
        void show() const override;
        void set() override;
};

#endif