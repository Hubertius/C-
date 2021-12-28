#ifndef POKER_PLAYER_H_
#define POKER_PLAYER_H_

#include "person.h"

class PokerPlayer: public virtual Person
{
    protected:
        int randomCardNum;
    public:
        PokerPlayer(std::string =  "Unknown", std::string = "Unknown");
        void show() const override;
};


#endif