/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <fstream>
#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XUnitPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    std::ofstream ofstr("toy-problems-tests_TestResults.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main<CxxTest::XUnitPrinter>( tmp, argc, argv );
    return status;
}
bool suite_ToyProblemTestSuite_init = false;
#include "toy-problem-tests.h"

static ToyProblemTestSuite suite_ToyProblemTestSuite;

static CxxTest::List Tests_ToyProblemTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ToyProblemTestSuite( "/Users/davidraleigh/code/davidraleigh/toy-problems/toy-problems-cpp/toy-problems-tests/toy-problem-tests.h", 15, "ToyProblemTestSuite", suite_ToyProblemTestSuite, Tests_ToyProblemTestSuite );

static class TestDescription_suite_ToyProblemTestSuite_testNoOdds : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ToyProblemTestSuite_testNoOdds() : CxxTest::RealTestDescription( Tests_ToyProblemTestSuite, suiteDescription_ToyProblemTestSuite, 26, "testNoOdds" ) {}
 void runTest() { suite_ToyProblemTestSuite.testNoOdds(); }
} testDescription_suite_ToyProblemTestSuite_testNoOdds;

static class TestDescription_suite_ToyProblemTestSuite_testPowerOf4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ToyProblemTestSuite_testPowerOf4() : CxxTest::RealTestDescription( Tests_ToyProblemTestSuite, suiteDescription_ToyProblemTestSuite, 58, "testPowerOf4" ) {}
 void runTest() { suite_ToyProblemTestSuite.testPowerOf4(); }
} testDescription_suite_ToyProblemTestSuite_testPowerOf4;

static class TestDescription_suite_ToyProblemTestSuite_testNonRecursivePowerOf4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ToyProblemTestSuite_testNonRecursivePowerOf4() : CxxTest::RealTestDescription( Tests_ToyProblemTestSuite, suiteDescription_ToyProblemTestSuite, 68, "testNonRecursivePowerOf4" ) {}
 void runTest() { suite_ToyProblemTestSuite.testNonRecursivePowerOf4(); }
} testDescription_suite_ToyProblemTestSuite_testNonRecursivePowerOf4;

static class TestDescription_suite_ToyProblemTestSuite_testFactorialDivision : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ToyProblemTestSuite_testFactorialDivision() : CxxTest::RealTestDescription( Tests_ToyProblemTestSuite, suiteDescription_ToyProblemTestSuite, 82, "testFactorialDivision" ) {}
 void runTest() { suite_ToyProblemTestSuite.testFactorialDivision(); }
} testDescription_suite_ToyProblemTestSuite_testFactorialDivision;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
