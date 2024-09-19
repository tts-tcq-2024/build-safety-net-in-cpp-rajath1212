Test Specification for Soundex Function

Goal - to verify generateSoundex function accross various condition such as empty strings, single-character inputs, multiple-character names, and handling of special characters

Test Cases
1- Empty String test case :
input - Empty string("")

TEST(SoundexTest, HandlesEmptyString) {
    EXPECT_EQ(generateSoundex(""), "");
}

output - ""

2 - Single character check 

Test Code:
input - "A"
TEST(SoundexTest, HandlesSingleCharacter) {
    EXPECT_EQ(generateSoundex("A"), "A000");
}

output -      
"A000"


3. random word check
inputs -    rajath
            Projects
Test Code:

TEST(SoundexTest, RandomWords) {
    EXPECT_EQ(generateSoundex("rajath"), "R230");
    EXPECT_EQ(generateSoundex("Projects"), "P622");
}
output - 
"R230
"P622"
4 - Case sensitivity check 

input - GiThUb
        BoSCh

TEST(SoundexTest, CaseDifferenceWords) {
    EXPECT_EQ(generateSoundex("GiThUb"), "G310");   
    EXPECT_EQ(generateSoundex("BoSCh"), "B200");   
}

output - "G310"
          "B200"
