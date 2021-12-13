#ifndef CD_H_
#define CD_H_

#include <iostream>

class Cd
{
    private:
        char * performers;
        char * label;
        int selections;
        double playtime;
    public:
        Cd(char * s1, char * s2, int n, double x);
        Cd(const Cd & d);
        Cd();
        virtual ~Cd();
        virtual void report() const;
        Cd & operator=(const Cd & d);
};


class Classic: public Cd
{
    private:
        char * mainSongName;
    public:
        Classic(char * s1, char * s2, char * nameOfSong, int n, double x);
        Classic(char * nameOfSong = "No song");
        Classic & operator=(const Classic & anotherClassic);
        void report() const override;
        ~Classic();


};
#endif CD_H_