/*
 * File:   newtestclass11.cpp
 * Author: Ivan
 *
 * Created on May 28, 2013, 10:24:05 AM
 */

#include "newtestclass11.h"
#include "../Parsing.h"

CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass11);

newtestclass11::newtestclass11() {
}

newtestclass11::~newtestclass11() {
}

void newtestclass11::setUp() {
}

void newtestclass11::tearDown() {
}

void newtestclass11::testCheckTheIntegrityOfPackages() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufArray.push_back("$GPGGA,160025.71,1130.998,");
    resultBufArray.push_back("");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back(",N,04344.060,E,1,04,2.7,100.00,M,-33.9,M,,0000*74");
    inputBufArray.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.96,110213,0.0,E*5A");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "Storage buffer incomplete, and at the \
end of the buffer has information about it (end of line)";
    CPPUNIT_ASSERT_MESSAGE(message, successful);
}

void newtestclass11::testCheckTheIntegrityOfPackages_intermediatePartOfTheBufferStorage() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufArray.push_back("$GPGGA,160025.71,1130.998,");
    resultBufArray.push_back("");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back(",N,04344.060,E,1,");
    inputBufArray.push_back("");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "In the input buffer there is an intermediate part of the buffer storage";
    CPPUNIT_ASSERT_MESSAGE(message, successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_intermediatePartOfTheBufferStorageIsIncomplete() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufArray.push_back("$GPGGA,160025.71,1130.998,");
    resultBufArray.push_back("");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back(",N,04344.060,E,1,");
    inputBufArray.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.96,110213,0.0,E*5A");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "Intermediate part of the buffer storage is incomplete";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_intermediatePartOfTheBufferStorageIsIncomplete01() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufArray.push_back("$GPGGA,160025.71,1130.998,");
    resultBufArray.push_back("");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back(",N,04344.060,E,1,");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "Intermediate part of the buffer storage is incomplete";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_storageBufferIsEmpty() {
    std::vector<std::string> resultBufArray;
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back(",N,04344.060,E,1,04,2.7,100.00,M,-33.9,M,,0000*74");
    inputBufArray.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.96,110213,0.0,E*5A");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "Storage buffer is empty";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}

void newtestclass11::testCheckTheIntegrityOfPackages_inputBufferIsEmpty() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufArray.push_back("$GPGGA,160025.71,1130.998,");
    resultBufArray.push_back("");
    
    std::vector<std::string> inputBufArray;
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "Input buffer is empty";
    CPPUNIT_ASSERT_MESSAGE(message, successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_NoExtensionForTheStorageBuffer() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufArray.push_back("$GPGGA,160025.71,1130.998,");
    resultBufArray.push_back("");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.96,110213,0.0,E*5A");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "No extension for the storage buffer";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_NotEmptyStringInStorageBuf() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufArray.push_back("$GPGGA,160025.71,1130.998,");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back(",N,04344.060,E,1,04,2.7,100.00,M,-33.9,M,,0000*74");
    inputBufArray.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.96,110213,0.0,E*5A");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "In storage buffer is not empty line at the end";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_NotEmptyStringInInputBuf() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufArray.push_back("$GPGGA,160025.71,1130.998,");
    resultBufArray.push_back("");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back(",N,04344.060,E,1,04,2.7,100.00,M,-33.9,M,,0000*74");
    inputBufArray.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.96");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "In input buffer is not empty line at the end";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_beginningFirstPackageIsDamaged() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("PGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back(",N,04344.060,E,1,04,2.7,100.00,M,-33.9,M,,0000*74");
    inputBufArray.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.");
    inputBufArray.push_back("");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "Beginning of the first packet in a storage buffer damaged";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_beginningSecondPackageIsDamaged() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("PGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back(",N,04344.060,E,1,04,2.7,100.00,M,-33.9,M,,0000*74");
    inputBufArray.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.");
    inputBufArray.push_back("");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "Beginning of the second packet in a storage buffer damaged";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_firstPackageFromInputBufIsDamaged() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back("RMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0,E*54");
    inputBufArray.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.");
    inputBufArray.push_back("");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "Beginning of the second packet in a storage buffer damaged";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_secondPackageFromInputBufIsDamaged() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back("$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0,E*54");
    inputBufArray.push_back("$GPGG,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    inputBufArray.push_back("");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "Beginning of the second packet in a input buffer damaged";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_thirdPackageFromInputBufIsDamaged() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back("$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0,E*54");
    inputBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    inputBufArray.push_back("$GPGL,1130.915,N,04344.052,E,160024.70,A*0C");
    inputBufArray.push_back("");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "Beginning of the third packet in a input buffer damaged";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheFirstPacketBufferStorage() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufArray.push_back("$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0,E*54");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back("$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0,E*54");
    inputBufArray.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.");
    inputBufArray.push_back("");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "Number of commas in the first packet buffer storage to less than";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheSecondPacketBufferStorage() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70");
    resultBufArray.push_back("$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0,E*54");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back("$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0,E*54");
    inputBufArray.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.");
    inputBufArray.push_back("");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "Number of commas in the second packet buffer storage to less than";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheThirdPacketBufferStorage() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufArray.push_back("$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back("$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0,E*54");
    inputBufArray.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.");
    inputBufArray.push_back("");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "Number of commas in the third packet buffer storage to less than";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheFirstPacketBufferInput() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufArray.push_back("$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0,E*54");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back("$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0");
    inputBufArray.push_back("$GPRMC,160026.73,A,1131.081,N,04344.067,E,300.00,4.");
    inputBufArray.push_back("");
    
    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "Number of commas in the first packet buffer input to less than";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheSecondPacketBufferInput() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufArray.push_back("$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0,E*54");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back("$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0,E*54");
    inputBufArray.push_back("$GPGLL,1130.915,N,04344.052,E");
    inputBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");

    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "Number of commas in the second packet buffer input to less than";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}

void newtestclass11::testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheThirdPacketBufferInput() {
    std::vector<std::string> resultBufArray;
    resultBufArray.push_back("$GPGGA,160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M,,0000*7C");
    resultBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    resultBufArray.push_back("$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0,E*54");
    
    std::vector<std::string> inputBufArray;
    inputBufArray.push_back("$GPRMC,160027.74,A,1131.164,N,04344.074,E,300.00,4.96,110213,0.0,E*54");
    inputBufArray.push_back("$GPGLL,1130.915,N,04344.052,E,160024.70,A*0C");
    inputBufArray.push_back("$GPGGA160023.69,1130.832,N,04344.045,E,1,04,2.6,100.00,M,-33.9,M");

    CParsing cparsing;
    bool successful = cparsing.checkTheIntegrityOfPackages(resultBufArray, inputBufArray);
    
    std::string message = "Number of commas in the third packet buffer input to less than";
    CPPUNIT_ASSERT_MESSAGE(message, !successful);
}
