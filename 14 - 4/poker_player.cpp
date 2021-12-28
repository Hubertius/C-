#include "poker_player.h"
#include <chrono>
#include <random>

PokerPlayer::PokerPlayer(std::string name, std::string surname) : Person(name, surname)
{
    std::random_device rd;
    std::mt19937::result_type seed = rd() ^ (
            (std::mt19937::result_type)
            std::chrono::duration_cast<std::chrono::seconds>(
                std::chrono::system_clock::now().time_since_epoch()
                ).count() +
            (std::mt19937::result_type)
            std::chrono::duration_cast<std::chrono::microseconds>(
                std::chrono::high_resolution_clock::now().time_since_epoch()
                ).count() );

    std::mt19937 gen(seed);
    std::uniform_int_distribution<int> distrib(1,52);
    this->randomCardNum = distrib(gen);
}

void PokerPlayer::show() const
{
    Person::show();
}

