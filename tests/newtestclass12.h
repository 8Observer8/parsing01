/*
 * File:   newtestclass12.h
 * Author: Ivan
 *
 * Created on May 28, 2013, 3:08:23 PM
 */

#ifndef NEWTESTCLASS12_H
#define	NEWTESTCLASS12_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass12 : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass12);

    CPPUNIT_TEST(testMethod_GPRMC);
    CPPUNIT_TEST(testMethod_GPGGA);
    CPPUNIT_TEST(testMethod_GPGGL);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass12();
    virtual ~newtestclass12();
    void setUp();
    void tearDown();

private:
    void testMethod_GPRMC();
    void testMethod_GPGGA();
    void testMethod_GPGGL();
};

#endif	/* NEWTESTCLASS12_H */

