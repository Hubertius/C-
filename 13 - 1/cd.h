#ifndef CD_H_
#define CD_H_

#include <iostream>

class Cd
{
    private:
        char performers[50];
        char label[20];
        int selections;
        double playtime;
    public:
        Cd(char * s1, char * s2, int n, double x);
        Cd(const Cd & d);
        Cd();
        virtual ~Cd() {};
        virtual void report() const;
        Cd & operator=(const Cd & d);
};


class Classic: public Cd
{
    private:
        char mainSongName[50];
    public:
        Classic(char * s1, char * s2, char * nameOfSong, int n, double x);
        Classic(char * nameOfSong = "No song");
        Classic & operator=(const Classic & anotherClassic);
        void report() const override;


};
#endif CD_H_