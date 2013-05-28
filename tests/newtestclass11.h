/*
 * File:   newtestclass11.h
 * Author: Ivan
 *
 * Created on May 28, 2013, 10:24:05 AM
 */

#ifndef NEWTESTCLASS11_H
#define	NEWTESTCLASS11_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass11 : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass11);

    CPPUNIT_TEST(testCheckTheIntegrityOfPackages);
    CPPUNIT_TEST(testCheckTheIntegrityOfPackages_intermediatePartOfTheBufferStorage);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_intermediatePartOfTheBufferStorageIsIncomplete);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_intermediatePartOfTheBufferStorageIsIncomplete01);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_storageBufferIsEmpty);
    CPPUNIT_TEST(testCheckTheIntegrityOfPackages_inputBufferIsEmpty);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_NoExtensionForTheStorageBuffer);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_NotEmptyStringInStorageBuf);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_NotEmptyStringInInputBuf);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_beginningFirstPackageIsDamaged);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_beginningSecondPackageIsDamaged);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_firstPackageFromInputBufIsDamaged);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_secondPackageFromInputBufIsDamaged);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_thirdPackageFromInputBufIsDamaged);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheFirstPacketBufferStorage);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheSecondPacketBufferStorage);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheThirdPacketBufferStorage);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheFirstPacketBufferInput);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheSecondPacketBufferInput);
    CPPUNIT_TEST(testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheThirdPacketBufferInput);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass11();
    virtual ~newtestclass11();
    void setUp();
    void tearDown();

private:
    void testCheckTheIntegrityOfPackages();
    void testCheckTheIntegrityOfPackages_intermediatePartOfTheBufferStorage();
    void testFailedCheckTheIntegrityOfPackages_intermediatePartOfTheBufferStorageIsIncomplete();
    void testFailedCheckTheIntegrityOfPackages_intermediatePartOfTheBufferStorageIsIncomplete01();
    void testFailedCheckTheIntegrityOfPackages_storageBufferIsEmpty();
    void testCheckTheIntegrityOfPackages_inputBufferIsEmpty();
    void testFailedCheckTheIntegrityOfPackages_NoExtensionForTheStorageBuffer();
    void testFailedCheckTheIntegrityOfPackages_NotEmptyStringInStorageBuf();
    void testFailedCheckTheIntegrityOfPackages_NotEmptyStringInInputBuf();
    void testFailedCheckTheIntegrityOfPackages_beginningFirstPackageIsDamaged();
    void testFailedCheckTheIntegrityOfPackages_beginningSecondPackageIsDamaged();
    void testFailedCheckTheIntegrityOfPackages_firstPackageFromInputBufIsDamaged();
    void testFailedCheckTheIntegrityOfPackages_secondPackageFromInputBufIsDamaged();
    void testFailedCheckTheIntegrityOfPackages_thirdPackageFromInputBufIsDamaged();
    void testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheFirstPacketBufferStorage();
    void testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheSecondPacketBufferStorage();
    void testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheThirdPacketBufferStorage();
    void testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheFirstPacketBufferInput();
    void testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheSecondPacketBufferInput();
    void testFailedCheckTheIntegrityOfPackages_numberOfCommasInTheThirdPacketBufferInput();
};

#endif	/* NEWTESTCLASS11_H */

