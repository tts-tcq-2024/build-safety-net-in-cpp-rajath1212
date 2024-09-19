**Test Specification for Soundex Function**

Goal - to verify generateSoundex function accross various condition such as empty strings, single-character inputs, multiple-character names, and handling of special characters

**Test Cases**
1- **Empty String test case **
to validate the result when empty string is given as input

input - Empty string("")

code:
TEST(SoundexTest, HandlesEmptyString) {
    EXPECT_EQ(generateSoundex(""), "");
}

output - ""

2 - **Single character check **
to validate the result when single character is given as input

input - "A"

code:
TEST(SoundexTest, HandlesSingleCharacter) {
    EXPECT_EQ(generateSoundex("A"), "A000");
}

output -      
"A000"


3 - **Random word check** 
to validate the result when random words are given as input 

inputs -    rajath
            Projects

code:
TEST(SoundexTest, RandomWords) {
    EXPECT_EQ(generateSoundex("rajath"), "R230");
    EXPECT_EQ(generateSoundex("Projects"), "P622");
}
output - 
"R230
"P622"
4 - **Case sensitivity check** 
to validate the result when case sensitve words are given as input 
input - GiThUb
        BoSCh

code:
TEST(SoundexTest, CaseDifferenceWords) {
    EXPECT_EQ(generateSoundex("GiThUb"), "G310");   
    EXPECT_EQ(generateSoundex("BoSCh"), "B200");   
}

output - "G310"
          "B200"
