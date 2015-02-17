
#ifndef ALLEGRO_OUTPUTINTERFACE_H
#define ALLEGRO_OUTPUTINTERFACE_H

#include "Outputinterface.h"
#include <allegro/gfx.h>

class Allegro_Outputinterface: public Outputinterface
{
    public:
        Allegro_Outputinterface();
        ~Allegro_Outputinterface();

        // Screen
        void renderScreen(screenInformation MyScreen);
        void drawOnScreen(screenInformation MyScreen);
        void writeOnScreen(screenInformation MyScreen, screenText MyText);

        // Sound
        void playSound();
        void playMusic();

    protected:
    private:
}; // Allegro_Outputinterface

#endif // ALLEGRO_OUTPUTINTERFACE_H
