#include <iostream>
using namespace std;
#include <windows.h>
#include <string>

#define FREQ        1000
#define DUR_SHORT   100
#define DUR_LONG    300
#define WAIT        50

static inline const bool morze(const char c)
{
#define P Beep(FREQ,DUR_SHORT);Sleep(WAIT);
#define _ Beep(FREQ,DUR_LONG);Sleep(WAIT);

    switch(tolower(c))
    {
        case 'а': P _       break;
        case 'б': _ P P P   break;
        case 'в': P _ _     break;
        case 'г': _ _ P     break;
        case 'д': _ P P     break;
        case 'е': P         break;
        case 'ё': P         break;
        case 'ж': P P P _   break;
        case 'з': _ _ P P   break;
        case 'и': P P       break;
        case 'й': P _ _ _   break;
        case 'к': _ P _     break;
        case 'л': _ P _     break;
        case 'м': _ _       break;
        case 'н': _ P       break;
        case 'о': _ _ _     break;
        case 'п': P _ _ P   break;
        case 'р': P _ P     break;
        case 'с': P P P     break;
        case 'т': _         break;
        case 'у': P P _     break;
        case 'ф': P P _ P   break;
        case 'х': P P P P   break;
        case 'ц': _ P _ P   break;
        case 'ч': _ _ _ P   break;
        case 'ш': _ _ _ _   break;
        case 'щ': _ _ P _   break;
        case 'ъ': P _ _ P _ P break;
        case 'ы': _ P _ _   break;
        case 'ь': _ P P _   break;
        case 'э': P P _ P P break;
        case 'ю': P P _ _   break;
        case 'я': P _ P _   break;

        case 'a': P _       break;
        case 'b': _ P P P   break;
        case 'c': _ P _ P   break;
        case 'd': _ P P     break;
        case 'e': P         break;
        case 'f': P P _ P   break;
        case 'g': _ _ P     break;
        case 'h': P P P P   break;
        case 'i': P P       break;
        case 'j': P _ _ _   break;
        case 'k': _ P _     break;
        case 'l': P _ P P   break;
        case 'm': _ _       break;
        case 'n': _ P       break;
        case 'o': _ _ _     break;
        case 'p': P _ _ P   break;
        case 'q': _ _ P _   break;
        case 'r': P _ P     break;
        case 's': P P P     break;
        case 't': _         break;
        case 'u': P P _     break;
        case 'v': P P P _   break;
        case 'w': P _ _     break;
        case 'x': _ P P _   break;
        case 'y': _ P _ _   break;
        case 'z': _ _ P P   break;

        case '.': _ P _ P   break;
        case ',': _ _ P P _ break;
        case '?': P P _ _ P break;

        case '0': _ _ _ _ _ break;
        case '1': P _ _ _ _ break;
        case '2': P P _ _ _ break;
        case '3': P P P _ _ break;
        case '4': P P P P _ break;
        case '5': P P P P P break;
        case '6': _ P P P P break;
        case '7': _ _ P P P break;
        case '8': _ _ _ P P break;
        case '9': _ _ _ _ P break;

        case ' ': Sleep(WAIT); break;

        default:return false;
    };

    Sleep(WAIT<<1);

#undef P
#undef _

    return true;
}
static inline void morze(const char*c)
{while(morze(*c++));}

int main()
{
    setlocale(0,"");

    string s;
    
    while(true)
    {
        getline(cin,s);

        cout<<"[transmission on process]"<<endl;
        morze(s.c_str());
        cout<<"[transmission is ended]"<<endl;
    }

    return 0;
}