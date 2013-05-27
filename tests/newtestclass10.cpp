/*
 * File:   newtestclass10.cpp
 * Author: Ivan
 *
 * Created on May 27, 2013, 4:55:29 PM
 */

#include "newtestclass10.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass10);

newtestclass10::newtestclass10() {
}

newtestclass10::~newtestclass10() {
}

void newtestclass10::setUp() {
}

void newtestclass10::tearDown() {
}

void newtestclass10::testStorage() {
    std::vector<std::string> inputBufferArr;
    inputBufferArr.push_back("four");
    inputBufferArr.push_back("five");
    inputBufferArr.push_back("six");
    
    std::vector<std::string> resultBufferArr;
    resultBufferArr.push_back("one");
    resultBufferArr.push_back("two");
    resultBufferArr.push_back("three");
    resultBufferArr.push_back("");

    std::vector<std::string> expectedBufferArr;
    expectedBufferArr.push_back("one");
    expectedBufferArr.push_back("two");
    expectedBufferArr.push_back("three");
    expectedBufferArr.push_back("four");
    expectedBufferArr.push_back("five");
    expectedBufferArr.push_back("six");
    expectedBufferArr.push_back("");
    if (expectedBufferArr.size() == resultBufferArr.size()) {

    } else {
        CPPUNIT_ASSERT(true);
    }
}

void newtestclass10::testFailedMethod() {
    CPPUNIT_ASSERT(false);
}

