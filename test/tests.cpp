// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <string>
#include "Train.h"

TEST(TestTrain, Test1) {
	Train train;
	for (int i = 0; i < 50; i++)
		train.addCage();
  EXPECT_EQ(50, train.findLenght());
}

TEST(TestTrain, Test2) {
	Train train;
	for (int i = 0; i < 200; i++) {
		train.addCage();
	}
	EXPECT_EQ(200, train.findLenght());
}

TEST(TestTrain, Test3) {
	Train train;
	for (int i = 0; i < 1000; i++) {
		train.addCage();
	}
	EXPECT_EQ(1000, train.findLenght());
}

TEST(TestTrain, Test4) {
	Train train;
	for (int i = 0; i < 7432; i++) {
		train.addCage();
	}
	EXPECT_EQ(7432, train.findLenght());
}