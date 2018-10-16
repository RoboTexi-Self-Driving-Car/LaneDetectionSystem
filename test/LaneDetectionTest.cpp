/**
 *  Copyright [2018] Akash Guha
 *  @file    LaneDetectionTest.cpp
 *  @author  Akash Guha
 *
 *  @brief Lane Detection Test
 *
 *  @section DESCRIPTION
 *
 *  This module tests the functionality of
 *  the lane detection class.
 *
 */

#include <gtest/gtest.h>
#include "LaneDetection.hpp"

/**
 * @brief  Class to test LaneDetection.
 */
class LaneDetectionTest : public ::testing::Test {
 protected:
  LaneDetection testObject;
};

/**
 *@brief Test to check radius of curvature of lanes
 */
TEST_F(LaneDetectionTest, radiusOfCurveCheck) {
  std::vector<cv::Point_<int>> temp;
  EXPECT_EQ(0.0, testObject.computeRadiusOfCurve(temp));

}
