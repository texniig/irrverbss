#define CTEST_MAIN

#include <ctest.h>
#include "irverbs.h"

bool isLetter(char a)
{
    if(((int)a >= 65 && (int)a <= 90) || ((int)a >= 97 && (int)a <= 122))
        return true;
    return false;
}

CTEST(letter_check, correct_letter_check)
{
    bool result = isLetter('A');
    ASSERT_TRUE(result);
}

CTEST(letter_check, correct_let_check)
{
    bool result = isLetter('h');
    ASSERT_TRUE(result);
}

CTEST(letter_check, incorrect_letter_check)
{
    bool result = isLetter('4');
    ASSERT_FALSE(result);
}

CTEST(letter_check, incorrect_let_check)
{
    bool result = isLetter('-');
    ASSERT_FALSE(result);
}

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
