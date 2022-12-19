#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "../calc.h"


TEST_CASE("plus test") {
    CHECK(cplus(1, 1) == 2);
    CHECK(cplus(-1, -1) == -2);
    CHECK(cplus(1, -1) == 0);
    CHECK(cplus(-1, 1) == 0);
}

TEST_CASE("minus test") {
    CHECK(cminus(1, 1) == 0);
    CHECK(cminus(-1, -1) == 0);
    CHECK(cminus(1, -1) == 2);
    CHECK(cminus(-1, 1) == -2);
}

TEST_CASE("multiply test") {

    CHECK(cmultiply(2, 2) == 4);
    CHECK(cmultiply(-2, -2) == 4);
    CHECK(cmultiply(2, -2) == -4);
    CHECK(cmultiply(-2, 2) == -4);
}

TEST_CASE("divide test") {
    CHECK(cdivide(2, 2) == 1);
    CHECK(cdivide(-2, -2) == 1);
    CHECK(cdivide(2, -2) == -1);
    CHECK(cdivide(-2, 2) == -1);
}
