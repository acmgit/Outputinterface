#ifndef SCREENINTERFACE_H
#define SCREENINTERFACE_H

#include <string>

class Screeninterface
{
    public:

        struct screenInformation
        {
            int Screen_x;
            int Screen_y;
            int Screen_width;
            int Screen_height;
        }; // screenInformation

        struct screenText
        {
            std::string* Text;
            int Position_x;
            int Position_y;
        }; // screenText

        virtual void renderScreen(screenInformation) = 0;                    // renders the whole Screen
        virtual void drawOnScreen(screenInformation) = 0;                    // renders only an Image on a Screen
        virtual void writeOnScreen(screenInformation, screenText) = 0;

    protected:

}; // Screeninterface

#endif // SCREENINTERFACE_H
