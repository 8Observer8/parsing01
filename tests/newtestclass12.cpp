/*
 * File:   newtestclass12.cpp
 * Author: Ivan
 *
 * Created on May 28, 2013, 3:08:23 PM
 */

#include "newtestclass12.h"
#include "../Parsing.h"

CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass12);

newtestclass12::newtestclass12() {
}

newtestclass12::~newtestclass12() {
}

void newtestclass12::setUp() {
}

void newtestclass12::tearDown() {
}

void newtestclass12::testMethod_GPRMC() {
    std::string inputStr = "$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0,E*54";
    CParsing cparsing;

    int actual = cparsing.countTheCommasInString(inputStr);
    int expected = 11;
    std::string message = "The $GPRMC packet: 11 commas";

    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void newtestclass12::testMethod_GPGGA() {
    std::string inputStr = "$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C";
    CParsing cparsing;

    int actual = cparsing.countTheCommasInString(inputStr);
    int expected = 14;
    std::string message = "The $GPRMC packet: 14 commas";

    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void newtestclass12::testMethod_GPGGL() {
    std::string inputStr = "$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C";
    CParsing cparsing;

    int actual = cparsing.countTheCommasInString(inputStr);
    int expected = 6;
    std::string message = "The $GPRMC packet: 6 commas";

    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}
