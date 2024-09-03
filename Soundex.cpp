#include "Soundex.h"
#include <cctype>

char getSoundexCode(char c) {
    const char checkTable[26]={'0', '1', '2', '3', '0', '1', '2', '0', '0', '2', '2', '4', '5', '5', '0', 
                                '1', '2', '6', '2', '3', '0', '0', '0', '2', '0', '2' };
    
    c = toupper(c);
return(checkTable[(int(c) - 65)];
    
}

std::string generateSoundex(const std::string& name) {
    if (name.empty()) return "";

    std::string soundex(1, toupper(name[0]));
    char prevCode = getSoundexCode(name[0]);

    for (size_t i = 1; i < name.length() && soundex.length() < 4; ++i) {
        char code = getSoundexCode(name[i]);
        if (code != '0' && code != prevCode) {
            soundex += code;
            prevCode = code;
        }
    }

    while (soundex.length() < 4) {
        soundex += '0';
    }

    return soundex;
}
