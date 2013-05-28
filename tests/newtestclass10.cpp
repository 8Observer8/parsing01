/*
 * File:   newtestclass10.cpp
 * Author: Ivan
 *
 * Created on May 27, 2013, 4:55:29 PM
 */

#include "newtestclass10.h"
#include "../Parsing.h"

CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass10);

newtestclass10::newtestclass10() {
}

newtestclass10::~newtestclass10() {
}

void newtestclass10::setUp() {
}

void newtestclass10::tearDown() {
}

void newtestclass10::testStorage_storageBufferIncomplete() {
    std::vector<std::string> resultBufferArr;
    resultBufferArr.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufferArr.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufferArr.push_back("$GPGGA,160025.71,1130.998,N,04344");
    resultBufferArr.push_back("");

    std::vector<std::string> inputBufferArr;
    inputBufferArr.push_back(".060,E,1,04,2.7,100.00,M,-33.9,M,,0000*74");
    inputBufferArr.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.96,110213,0.0,E*5A");
    inputBufferArr.push_back("$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0,E*54");

    std::vector<std::string> expectedBufferArr;
    expectedBufferArr.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    expectedBufferArr.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    expectedBufferArr.push_back("$GPGGA,160025.71,1130.998,N,04344.060,E,1,04,2.7,100.00,M,-33.9,M,,0000*74");
    expectedBufferArr.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.96,110213,0.0,E*5A");
    expectedBufferArr.push_back("$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0,E*54");
    
    CParsing cparsing;
    bool successful = cparsing.storage(resultBufferArr, inputBufferArr);
    
    CPPUNIT_ASSERT(successful);

    if (expectedBufferArr.size() == resultBufferArr.size()) {
        for (unsigned int i = 0; i < expectedBufferArr.size();i++) {
            CPPUNIT_ASSERT_EQUAL(expectedBufferArr[i], resultBufferArr[i]);
        }
    } else {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass10::testStorage_inputBufferIsIncomplete() {
    std::vector<std::string> resultBufferArr;
    resultBufferArr.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufferArr.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufferArr.push_back("$GPGGA,160025.71,1130.998,N,04344.060,E,1,04,2.7,100.00,M,-33.9,M,,0000*74");

    std::vector<std::string> inputBufferArr;
    inputBufferArr.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.96,110213,0.0,E*5A");
    inputBufferArr.push_back("$GPRMC,160027.74,A,1131.164,N,04344.");
    inputBufferArr.push_back("");

    std::vector<std::string> expectedBufferArr;
    expectedBufferArr.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    expectedBufferArr.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    expectedBufferArr.push_back("$GPGGA,160025.71,1130.998,N,04344.060,E,1,04,2.7,100.00,M,-33.9,M,,0000*74");
    expectedBufferArr.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.96,110213,0.0,E*5A");
    expectedBufferArr.push_back("$GPRMC,160027.74,A,1131.164,N,04344.");
    expectedBufferArr.push_back("");
    
    CParsing cparsing;
    bool successful = cparsing.storage(resultBufferArr, inputBufferArr);

    CPPUNIT_ASSERT(successful);

    if (expectedBufferArr.size() == resultBufferArr.size()) {
        for (unsigned int i = 0; i < expectedBufferArr.size();i++) {
            CPPUNIT_ASSERT_EQUAL(expectedBufferArr[i], resultBufferArr[i]);
        }
    } else {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass10::testStorage_inputBufferAndStorageBufferIsIncomplete() {
    std::vector<std::string> resultBufferArr;
    resultBufferArr.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufferArr.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufferArr.push_back("$GPGGA,160025.71,1130.998,N,04344.060,E");
    resultBufferArr.push_back("");

    std::vector<std::string> inputBufferArr;
    inputBufferArr.push_back(",1,04,2.7,100.00,M,-33.9,M,,0000*74");
    inputBufferArr.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.96,110213,0.0,E*5A");
    inputBufferArr.push_back("$GPRMC,160027.74,A,1131.164,N,04344.");
    inputBufferArr.push_back("");

    std::vector<std::string> expectedBufferArr;
    expectedBufferArr.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    expectedBufferArr.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    expectedBufferArr.push_back("$GPGGA,160025.71,1130.998,N,04344.060,E,1,04,2.7,100.00,M,-33.9,M,,0000*74");
    expectedBufferArr.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.96,110213,0.0,E*5A");
    expectedBufferArr.push_back("$GPRMC,160027.74,A,1131.164,N,04344.");
    expectedBufferArr.push_back("");
    
    CParsing cparsing;
    bool successful = cparsing.storage(resultBufferArr, inputBufferArr);

    CPPUNIT_ASSERT(successful);

    if (expectedBufferArr.size() == resultBufferArr.size()) {
        for (unsigned int i = 0; i < expectedBufferArr.size();i++) {
            CPPUNIT_ASSERT_EQUAL(expectedBufferArr[i], resultBufferArr[i]);
        }
    } else {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass10::failedTestStorage_noContinuationOfThePackageForTheStorageBuffer() {
    std::vector<std::string> resultBufferArr;
    resultBufferArr.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufferArr.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufferArr.push_back("$GPGGA,160025.71,1130.998,N,04344.060,E,1,");
    resultBufferArr.push_back("");

    std::vector<std::string> inputBufferArr;
    inputBufferArr.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.96,110213,0.0,E*5A");
    inputBufferArr.push_back("$GPRMC,160027.74,A,1131.164,N,04344.");
    inputBufferArr.push_back("");

    
    CParsing cparsing;
    bool successful = cparsing.storage(resultBufferArr, inputBufferArr);

    CPPUNIT_ASSERT(!successful);
}
