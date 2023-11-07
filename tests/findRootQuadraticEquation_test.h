#ifndef CTEST_ROOT_FINDROOTQUADRATICEQUATION_TEST_H
#define CTEST_ROOT_FINDROOTQUADRATICEQUATION_TEST_H

#include <errno.h>
#include <fcntl.h>
#include <gtest/gtest.h>
#include <math.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(findRootQuadraticEquation, DPositive) {
    double *res = findRootQuadraticEquation(2, 5, -3);
    ASSERT_EQ(res[0], -3.0L);
    ASSERT_EQ(res[1],  0.5L);
}

TEST(findRootQuadraticEquation, DZero) {
    double *res = findRootQuadraticEquation(16, -8, 1);
    ASSERT_DOUBLE_EQ(res[0], res[1]);
    ASSERT_EQ(res[0], 0.25L);
}

TEST(findRootQuadraticEquation, aZero) {
    double *res = findRootQuadraticEquation(0, -8, 1);
    ASSERT_EQ(isnan(res[0]), 1);
    ASSERT_EQ(isnan(res[1]), 1);
}

TEST(findRootQuadraticEquation, abZero) {
    double *res = findRootQuadraticEquation(0, 0, 1);
    ASSERT_EQ(isnan(res[0]), 1);
    ASSERT_EQ(isnan(res[1]), 1);
}


TEST(findRootQuadraticEquation, DNegative) {
    double *res = findRootQuadraticEquation(9, -6, 2);
    ASSERT_EQ(isnan(res[0]), 1);
    ASSERT_EQ(isnan(res[1]), 1);
}


TEST(findRootQuadraticEquation, Integration) {
    double *res = findRootQuadraticEquation(double(fibonachi(3)), double(fibonachi(-5)), double(fibonachi(2)));
    ASSERT_EQ(isnan(res[0]), 1);
    ASSERT_EQ(isnan(res[1]), 1);
}

#endif //CTEST_ROOT_FINDROOTQUADRATICEQUATION_TEST_H
