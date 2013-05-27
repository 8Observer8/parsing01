/*
 * File:   newtestclass10.h
 * Author: Ivan
 *
 * Created on May 27, 2013, 4:55:29 PM
 */

#ifndef NEWTESTCLASS10_H
#define	NEWTESTCLASS10_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass10 : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass10);

    CPPUNIT_TEST(testMethod);
    CPPUNIT_TEST(testFailedMethod);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass10();
    virtual ~newtestclass10();
    void setUp();
    void tearDown();

private:
    void testMethod();
    void testFailedMethod();
};

#endif	/* NEWTESTCLASS10_H */

