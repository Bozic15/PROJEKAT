#ifndef WEAPON_HPP_INCLUDED
#define WEAPON_HPP_INCLUDED
#include "Demage.hpp"
class Weapon:public Demage
{

protected:
    int Magspace;
    int Range;
public:
    Weapon(M,R,d,l,h):Demage:(int d,bool l, bool h)
    {

        Magspace=M;
        Range = R;
    }
}

#endif // WEAPON_HPP_INCLUDED
