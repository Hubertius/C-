#ifndef TVFM
#define TVFM
#include <iostream>



class Tv
{
    public:
        friend class Remote;
        enum {Off, On};
        enum {MinVal, MaxVal = 20};
        enum {Antenna, Cabel};
        enum {TV, DVD};

        Tv(int s = Off, int mc = 125) : state(s), volume(5), maxChannel(mc), channel(2), mode(Cabel), input(TV) {}
        void onOff() { this->state = (state == Off) ? Off : On; }
        bool isOn() const { return this->state == On; }
        bool volUp();
        bool volDown();
        void channUp() { this->channel = (this->channel < this->maxChannel) ? (this->channel)++ : this->channel; }
        void chanDown() { this->channel = (this->channel > 0) ? (this->channel)-- : this-> channel; }
        void setMode() { this->mode = (this->mode == Antenna) ? Cabel : Antenna; }
        void setInput() { this->input = (this->input == TV) ? DVD : TV; }
        void setModeOfPilot(Remote & r);
        void showSettings() const;

    private:
        int state;
        int volume;
        int maxChannel;
        int channel;
        int mode;
        int input;
};



class Remote
{
    private:
        int modeNI;
    public:
        enum {Normal, Interactive};

        friend class Tv;
        Remote() : modeNI(Normal) {}
        bool volUp(Tv & t) { return t.volUp(); }
        bool volDown(Tv & t) { return t.volDown(); }
        void onOff(Tv & t) { t.onOff(); }
        void channUp(Tv & t) { t.channUp(); }
        void setMode(Tv & t) { t.setMode(); }
        void setModeNI() { this->modeNI = (this->modeNI == Interactive) ? Normal : Interactive; }
        void setInput(Tv & t) { t.setInput(); }
        void setChan(Tv & t, int channToSet) { t.channel = channToSet; }
        void showModeNI() const;
};


#endif