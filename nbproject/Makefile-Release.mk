#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Parsing.o \
	${OBJECTDIR}/main.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f2 \
	${TESTDIR}/TestFiles/f1 \
	${TESTDIR}/TestFiles/f4 \
	${TESTDIR}/TestFiles/f5 \
	${TESTDIR}/TestFiles/f6 \
	${TESTDIR}/TestFiles/f7 \
	${TESTDIR}/TestFiles/f8 \
	${TESTDIR}/TestFiles/f9 \
	${TESTDIR}/TestFiles/f3 \
	${TESTDIR}/TestFiles/f10 \
	${TESTDIR}/TestFiles/f11 \
	${TESTDIR}/TestFiles/f12

# C Compiler Flags
CFLAGS=`cppunit-config --cflags` 

# CC Compiler Flags
CCFLAGS=`cppunit-config --cflags` 
CXXFLAGS=`cppunit-config --cflags` 

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=`cppunit-config --libs`  

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${TESTDIR}/TestFiles/f3.exe

${TESTDIR}/TestFiles/f3.exe: ${OBJECTFILES}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f3 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Parsing.o: Parsing.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${OBJECTDIR}/Parsing.o Parsing.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
${TESTDIR}/TestFiles/f2: ${TESTDIR}/tests/newtestclass1.o ${TESTDIR}/tests/newtestrunner1.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f2 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f1: ${TESTDIR}/_ext/2083163140/newtestclass.o ${TESTDIR}/_ext/2083163140/newtestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS} `cppunit-config --libs` `cppunit-config --libs`   

${TESTDIR}/TestFiles/f4: ${TESTDIR}/tests/newtestclass3.o ${TESTDIR}/tests/newtestrunner3.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f4 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f5: ${TESTDIR}/tests/newtestclass4.o ${TESTDIR}/tests/newtestrunner4.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f5 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f6: ${TESTDIR}/tests/newtestclass5.o ${TESTDIR}/tests/newtestrunner5.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f6 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f7: ${TESTDIR}/tests/newtestclass6.o ${TESTDIR}/tests/newtestrunner6.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f7 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f8: ${TESTDIR}/tests/newtestclass7.o ${TESTDIR}/tests/newtestrunner7.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f8 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f9: ${TESTDIR}/tests/newtestclass8.o ${TESTDIR}/tests/newtestrunner8.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f9 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f3: ${TESTDIR}/_ext/2083163140/newtestclass9.o ${TESTDIR}/_ext/2083163140/newtestrunner9.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f3 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f10: ${TESTDIR}/_ext/2083163140/newtestclass10.o ${TESTDIR}/_ext/2083163140/newtestrunner10.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f10 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f11: ${TESTDIR}/_ext/2083163140/newtestclass11.o ${TESTDIR}/_ext/2083163140/newtestrunner11.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f11 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f12: ${TESTDIR}/_ext/2083163140/newtestclass12.o ${TESTDIR}/_ext/2083163140/newtestrunner12.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f12 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   


${TESTDIR}/tests/newtestclass1.o: tests/newtestclass1.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/tests/newtestclass1.o tests/newtestclass1.cpp


${TESTDIR}/tests/newtestrunner1.o: tests/newtestrunner1.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/tests/newtestrunner1.o tests/newtestrunner1.cpp


${TESTDIR}/_ext/2083163140/newtestclass.o: /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestclass.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/2083163140
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/_ext/2083163140/newtestclass.o /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestclass.cpp


${TESTDIR}/_ext/2083163140/newtestrunner.o: /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/2083163140
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/_ext/2083163140/newtestrunner.o /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestrunner.cpp


${TESTDIR}/tests/newtestclass3.o: tests/newtestclass3.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/tests/newtestclass3.o tests/newtestclass3.cpp


${TESTDIR}/tests/newtestrunner3.o: tests/newtestrunner3.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/tests/newtestrunner3.o tests/newtestrunner3.cpp


${TESTDIR}/tests/newtestclass4.o: tests/newtestclass4.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/tests/newtestclass4.o tests/newtestclass4.cpp


${TESTDIR}/tests/newtestrunner4.o: tests/newtestrunner4.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/tests/newtestrunner4.o tests/newtestrunner4.cpp


${TESTDIR}/tests/newtestclass5.o: tests/newtestclass5.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/tests/newtestclass5.o tests/newtestclass5.cpp


${TESTDIR}/tests/newtestrunner5.o: tests/newtestrunner5.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/tests/newtestrunner5.o tests/newtestrunner5.cpp


${TESTDIR}/tests/newtestclass6.o: tests/newtestclass6.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/tests/newtestclass6.o tests/newtestclass6.cpp


${TESTDIR}/tests/newtestrunner6.o: tests/newtestrunner6.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/tests/newtestrunner6.o tests/newtestrunner6.cpp


${TESTDIR}/tests/newtestclass7.o: tests/newtestclass7.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/tests/newtestclass7.o tests/newtestclass7.cpp


${TESTDIR}/tests/newtestrunner7.o: tests/newtestrunner7.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/tests/newtestrunner7.o tests/newtestrunner7.cpp


${TESTDIR}/tests/newtestclass8.o: tests/newtestclass8.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/tests/newtestclass8.o tests/newtestclass8.cpp


${TESTDIR}/tests/newtestrunner8.o: tests/newtestrunner8.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/tests/newtestrunner8.o tests/newtestrunner8.cpp


${TESTDIR}/_ext/2083163140/newtestclass9.o: /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestclass9.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/2083163140
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/_ext/2083163140/newtestclass9.o /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestclass9.cpp


${TESTDIR}/_ext/2083163140/newtestrunner9.o: /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestrunner9.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/2083163140
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/_ext/2083163140/newtestrunner9.o /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestrunner9.cpp


${TESTDIR}/_ext/2083163140/newtestclass10.o: /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestclass10.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/2083163140
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/_ext/2083163140/newtestclass10.o /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestclass10.cpp


${TESTDIR}/_ext/2083163140/newtestrunner10.o: /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestrunner10.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/2083163140
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/_ext/2083163140/newtestrunner10.o /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestrunner10.cpp


${TESTDIR}/_ext/2083163140/newtestclass11.o: /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestclass11.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/2083163140
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/_ext/2083163140/newtestclass11.o /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestclass11.cpp


${TESTDIR}/_ext/2083163140/newtestrunner11.o: /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestrunner11.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/2083163140
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/_ext/2083163140/newtestrunner11.o /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestrunner11.cpp


${TESTDIR}/_ext/2083163140/newtestclass12.o: /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestclass12.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/2083163140
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/_ext/2083163140/newtestclass12.o /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestclass12.cpp


${TESTDIR}/_ext/2083163140/newtestrunner12.o: /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestrunner12.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/2083163140
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags`   `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/_ext/2083163140/newtestrunner12.o /D/Documents/NetBeansProjects/Cpp/parsingNMEAData/tests/newtestrunner12.cpp


${OBJECTDIR}/Parsing_nomain.o: ${OBJECTDIR}/Parsing.o Parsing.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Parsing.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 `cppunit-config --cflags` -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/Parsing_nomain.o Parsing.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Parsing.o ${OBJECTDIR}/Parsing_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 `cppunit-config --cflags` -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/main_nomain.o main.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f2 || true; \
	    ${TESTDIR}/TestFiles/f1 || true; \
	    ${TESTDIR}/TestFiles/f4 || true; \
	    ${TESTDIR}/TestFiles/f5 || true; \
	    ${TESTDIR}/TestFiles/f6 || true; \
	    ${TESTDIR}/TestFiles/f7 || true; \
	    ${TESTDIR}/TestFiles/f8 || true; \
	    ${TESTDIR}/TestFiles/f9 || true; \
	    ${TESTDIR}/TestFiles/f3 || true; \
	    ${TESTDIR}/TestFiles/f10 || true; \
	    ${TESTDIR}/TestFiles/f11 || true; \
	    ${TESTDIR}/TestFiles/f12 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${TESTDIR}/TestFiles/f3.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
