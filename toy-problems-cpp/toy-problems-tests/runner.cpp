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
CxxTest::StaticSuiteDescription suiteDescription_ToyProblemTestSuite( "/Users/davidraleigh/code/davidraleigh/toy-problems/toy-problems-cpp/toy-problems-tests/toy-problem-tests.h", 17, "ToyProblemTestSuite", suite_ToyProblemTestSuite, Tests_ToyProblemTestSuite );

static class TestDescription_suite_ToyProblemTestSuite_testNoOdds : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ToyProblemTestSuite_testNoOdds() : CxxTest::RealTestDescription( Tests_ToyProblemTestSuite, suiteDescription_ToyProblemTestSuite, 28, "testNoOdds" ) {}
 void runTest() { suite_ToyProblemTestSuite.testNoOdds(); }
} testDescription_suite_ToyProblemTestSuite_testNoOdds;

static class TestDescription_suite_ToyProblemTestSuite_testPowerOf4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ToyProblemTestSuite_testPowerOf4() : CxxTest::RealTestDescription( Tests_ToyProblemTestSuite, suiteDescription_ToyProblemTestSuite, 60, "testPowerOf4" ) {}
 void runTest() { suite_ToyProblemTestSuite.testPowerOf4(); }
} testDescription_suite_ToyProblemTestSuite_testPowerOf4;

static class TestDescription_suite_ToyProblemTestSuite_testNonRecursivePowerOf4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ToyProblemTestSuite_testNonRecursivePowerOf4() : CxxTest::RealTestDescription( Tests_ToyProblemTestSuite, suiteDescription_ToyProblemTestSuite, 70, "testNonRecursivePowerOf4" ) {}
 void runTest() { suite_ToyProblemTestSuite.testNonRecursivePowerOf4(); }
} testDescription_suite_ToyProblemTestSuite_testNonRecursivePowerOf4;

static class TestDescription_suite_ToyProblemTestSuite_testFactorialDivision : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ToyProblemTestSuite_testFactorialDivision() : CxxTest::RealTestDescription( Tests_ToyProblemTestSuite, suiteDescription_ToyProblemTestSuite, 84, "testFactorialDivision" ) {}
 void runTest() { suite_ToyProblemTestSuite.testFactorialDivision(); }
} testDescription_suite_ToyProblemTestSuite_testFactorialDivision;

static class TestDescription_suite_ToyProblemTestSuite_testGreatestNonAdjacentWeights : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ToyProblemTestSuite_testGreatestNonAdjacentWeights() : CxxTest::RealTestDescription( Tests_ToyProblemTestSuite, suiteDescription_ToyProblemTestSuite, 91, "testGreatestNonAdjacentWeights" ) {}
 void runTest() { suite_ToyProblemTestSuite.testGreatestNonAdjacentWeights(); }
} testDescription_suite_ToyProblemTestSuite_testGreatestNonAdjacentWeights;

static class TestDescription_suite_ToyProblemTestSuite_testSumOfSquaresShortestSet : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ToyProblemTestSuite_testSumOfSquaresShortestSet() : CxxTest::RealTestDescription( Tests_ToyProblemTestSuite, suiteDescription_ToyProblemTestSuite, 190, "testSumOfSquaresShortestSet" ) {}
 void runTest() { suite_ToyProblemTestSuite.testSumOfSquaresShortestSet(); }
} testDescription_suite_ToyProblemTestSuite_testSumOfSquaresShortestSet;

static class TestDescription_suite_ToyProblemTestSuite_testSumOfSquaresAllSet : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ToyProblemTestSuite_testSumOfSquaresAllSet() : CxxTest::RealTestDescription( Tests_ToyProblemTestSuite, suiteDescription_ToyProblemTestSuite, 245, "testSumOfSquaresAllSet" ) {}
 void runTest() { suite_ToyProblemTestSuite.testSumOfSquaresAllSet(); }
} testDescription_suite_ToyProblemTestSuite_testSumOfSquaresAllSet;

static class TestDescription_suite_ToyProblemTestSuite_testLevenshteinDistance : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ToyProblemTestSuite_testLevenshteinDistance() : CxxTest::RealTestDescription( Tests_ToyProblemTestSuite, suiteDescription_ToyProblemTestSuite, 275, "testLevenshteinDistance" ) {}
 void runTest() { suite_ToyProblemTestSuite.testLevenshteinDistance(); }
} testDescription_suite_ToyProblemTestSuite_testLevenshteinDistance;

static class TestDescription_suite_ToyProblemTestSuite_testFibonacciaSequence : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ToyProblemTestSuite_testFibonacciaSequence() : CxxTest::RealTestDescription( Tests_ToyProblemTestSuite, suiteDescription_ToyProblemTestSuite, 287, "testFibonacciaSequence" ) {}
 void runTest() { suite_ToyProblemTestSuite.testFibonacciaSequence(); }
} testDescription_suite_ToyProblemTestSuite_testFibonacciaSequence;

static class TestDescription_suite_ToyProblemTestSuite_testIsPrime : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ToyProblemTestSuite_testIsPrime() : CxxTest::RealTestDescription( Tests_ToyProblemTestSuite, suiteDescription_ToyProblemTestSuite, 302, "testIsPrime" ) {}
 void runTest() { suite_ToyProblemTestSuite.testIsPrime(); }
} testDescription_suite_ToyProblemTestSuite_testIsPrime;

static class TestDescription_suite_ToyProblemTestSuite_testGetPrimes : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ToyProblemTestSuite_testGetPrimes() : CxxTest::RealTestDescription( Tests_ToyProblemTestSuite, suiteDescription_ToyProblemTestSuite, 358, "testGetPrimes" ) {}
 void runTest() { suite_ToyProblemTestSuite.testGetPrimes(); }
} testDescription_suite_ToyProblemTestSuite_testGetPrimes;

static class TestDescription_suite_ToyProblemTestSuite_testCoinSums : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ToyProblemTestSuite_testCoinSums() : CxxTest::RealTestDescription( Tests_ToyProblemTestSuite, suiteDescription_ToyProblemTestSuite, 379, "testCoinSums" ) {}
 void runTest() { suite_ToyProblemTestSuite.testCoinSums(); }
} testDescription_suite_ToyProblemTestSuite_testCoinSums;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
