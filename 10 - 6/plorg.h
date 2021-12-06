#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
    private:
        char fullname[20];
        int repletion;
    public:
        Plorg(char * fullname = "Plorga", int repletion = 50);
        void setRepletion(int repletion) {this->repletion = repletion;}
        void show() const;

};

#endif PLORG_H_