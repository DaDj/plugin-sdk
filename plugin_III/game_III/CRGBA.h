/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CRGBA {
public:
    union {
        unsigned int colorInt;
        struct {
            unsigned char red, green, blue, alpha;
        };
    };

    CRGBA(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    ~CRGBA();
    CRGBA() {}
};