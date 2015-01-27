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
    std::ofstream ofstr("TestResults.xml");
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

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
