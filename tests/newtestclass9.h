/*
 * File:   newtestclass9.h
 * Author: Ivan
 *
 * Created on May 27, 2013, 11:30:54 AM
 */

#ifndef NEWTESTCLASS9_H
#define	NEWTESTCLASS9_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass9 : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass9);

    CPPUNIT_TEST(testGetBufferStartWithPattern);
    CPPUNIT_TEST(testGetBufferStartWithPattern_01);
    CPPUNIT_TEST(testGetBufferStartWithPattern_02);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass9();
    virtual ~newtestclass9();
    void setUp();
    void tearDown();

private:
    void testGetBufferStartWithPattern();
    void testGetBufferStartWithPattern_01();
    void testGetBufferStartWithPattern_02();
};

#endif	/* NEWTESTCLASS9_H */

