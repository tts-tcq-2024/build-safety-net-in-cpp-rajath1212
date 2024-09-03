#include "Soundex.h"
#include <cctype>

char getSoundexCode(char c) {
    const char checkTable[26]={'0', '1', '2', '3', '0', '1', '2', '0', '0', '2', '2', '4', '5', '5', '0', 
                                '1', '2', '6', '2', '3', '0', '0', '0', '2', '0', '2' };
    
    c = toupper(c);
return(checkTable[(int(c) - 65)]);
    
}
void codeConcatinate(std::string& soundex, char c, char& prevCode)
{
    char code = getSoundexCode(c);
        if (code != '0' && code != prevCode) {
            soundex += code;
            prevCode = code;
        }
    
}
void codeCreation(std::string& soundex, const std::string& name)
{     
        char prevCode = getSoundexCode(name[0]);
        for (size_t i = 1; i < name.length() && soundex.length() < 4; ++i) {
         codeConcatinate(soundex, name[i], prevCode);
}
}
std::string generateSoundex(const std::string& name) {
    if (name.empty()) return "";

    std::string soundex(1, toupper(name[0]));
    codeCreation(soundex,name);
    while (soundex.length() > 4) {
        soundex += '0';
    }

    return soundex;
}
void main()
{
   std::cout << generateSoundex("sound");
}
