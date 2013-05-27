/*
 * File:   newtestclass9.cpp
 * Author: Ivan
 *
 * Created on May 27, 2013, 11:30:54 AM
 */

#include "newtestclass9.h"
#include "../Parsing.h"

CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass9);

newtestclass9::newtestclass9() {
}

newtestclass9::~newtestclass9() {
}

void newtestclass9::setUp() {
}

void newtestclass9::tearDown() {
}

void newtestclass9::testGetBufferStartWithPattern() {
    CParsing cparsing;

    std::string inputBuffer = "$GP";
    std::string expected = "$GP";
    std::string actual = cparsing.getBufferStartWithPattern(inputBuffer, "$GP");
    CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void newtestclass9::testGetBufferStartWithPattern_01() {
    CParsing cparsing;

    std::string inputBuffer = "\r\n$GPG";
    std::string expected = "$GPG";
    std::string actual = cparsing.getBufferStartWithPattern(inputBuffer, "$GP");
    CPPUNIT_ASSERT_EQUAL(expected, actual);
}

void newtestclass9::testGetBufferStartWithPattern_02() {
    CParsing cparsing;
    std::string inputBuffer = "1133.321,N,04344.237,E,160054.11,\
A*03\r\n$GPRMC,160055.12,A,1133.404,N,\
04344.230,E,300.00,355.32,110213,\
0.0,E*5B\r\n$GPGGA,160056.14,1133.487,\
N,04344.223,E,2,04,1.1,100.00,M,\
-33.9,M,,0000*73\r\n$GPGGA,160057.15,\
1133.570,N,04344.216,E,1,04,1.7,\
100.00,M,-33.9,M,,0000*7A";
    std::string expected = "$GPRMC,160055.12,A,1133.404,N,\
04344.230,E,300.00,355.32,110213,\
0.0,E*5B\r\n$GPGGA,160056.14,1133.487,\
N,04344.223,E,2,04,1.1,100.00,M,\
-33.9,M,,0000*73\r\n$GPGGA,160057.15,\
1133.570,N,04344.216,E,1,04,1.7,\
100.00,M,-33.9,M,,0000*7A";
    std::string actual = cparsing.getBufferStartWithPattern(inputBuffer, "$GP");
    CPPUNIT_ASSERT_EQUAL(expected, actual);
}
