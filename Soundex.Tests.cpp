#include <gtest/gtest.h>
#include "Soundex.h"


TEST(SoundexTest, HandlesEmptyString) {
    EXPECT_EQ(generateSoundex(""), "");
}

TEST(SoundexTest, HandlesSingleCharacter) {
    EXPECT_EQ(generateSoundex("A"), "A000");
}
TEST(SoundexTest, RandomWords) {
    EXPECT_EQ(generateSoundex("rajath"), "R230");
    EXPECT_EQ(generateSoundex("Projects"), "P622");
 
}
TEST(SoundexTest, CaseDifferenceWords) {
    EXPECT_EQ(generateSoundex("GiThUb"), "G310");   
    EXPECT_EQ(generateSoundex("BoSCh"), "B200");   
}
TEST(SoundexTest, SpecialCharecters) {
    EXPECT_EQ(generateSoundex("R@nDom"), "G310");   
    EXPECT_EQ(generateSoundex("CLa#"), "B200");   
}
