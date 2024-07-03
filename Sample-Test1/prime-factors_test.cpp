#include "pch.h"
#include "../Project34/prime-factors.cpp"
#include <vector>
using namespace std;

class PrimeTexture : public testing::Test {
public:
	PrimeFactor pf;
	vector<int> expected;
};

TEST_F(PrimeTexture, Of1) {
	expected = {};
	EXPECT_EQ(expected, pf.of(1));
}
TEST_F(PrimeTexture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, pf.of(2));
}
TEST_F(PrimeTexture, Of3) {
	expected = {3};
	EXPECT_EQ(expected, pf.of(3));
}
TEST_F(PrimeTexture, Of4) {
	expected = {2, 2};
	EXPECT_EQ(expected, pf.of(4));
}
TEST_F(PrimeTexture, Of6) {
	expected = {2, 3};
	EXPECT_EQ(expected, pf.of(6));
}



