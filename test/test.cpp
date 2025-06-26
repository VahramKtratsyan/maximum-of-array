#include <gtest/gtest.h>
#include "../header/maximum_of_array.hpp"

TEST(maximumOfArrayTest, ArrayOf0_Returns0)
{
   constexpr int size = 1;
   int res = 0;
   int array[size] = {res}; 
   EXPECT_EQ(max(array, size), 0);
}

TEST(maximumOfArrayTest, ArrayOf1_Returns1)
{
   constexpr int size = 1;
   int res = 1;
   int array[size] = {res}; 
   EXPECT_EQ(max(array, size), res);
}

TEST(maximumOfArrayTest, ArrayOf2_Returns2)
{
   constexpr int size = 1;
   int res = 2;
   int array[size] = {res}; 
   EXPECT_EQ(max(array, size), res);
}

TEST(maximumOfArrayTest, ArrayOf1Element_ReturnsTheElement)
{
   constexpr int size = 1;
   int res = std::rand();
   int array[size] = {res}; 
   EXPECT_EQ(max(array, size), res);
}

TEST(maximumOfArrayTest, ArrayOf2SameElements_ReturnsTheSameElement)
{
   constexpr int size = 2;
   int res = std::rand();
   int array[size];
   for (int i = 0; i < size; ++i)
      array[i] = res;
   EXPECT_EQ(max(array, size), res);
}

TEST(maximumOfArrayTest, ArrayOf50SameElements_ReturnsTheSameElement)
{
   constexpr int size = 50;
   int res = std::rand();
   int array[size]; 
   for (int i = 0; i < size; ++i)
      array[i] = res;
   EXPECT_EQ(max(array, size), res);
}

TEST(maximumOfArrayTest, ArrayOf0_1_Returns1)
{
   constexpr int size = 2;
   int res = 1;
   int array[size] = {0, res}; 
   EXPECT_EQ(max(array, size), res);
}

TEST(maximumOfArrayTest, ArrayOf1_0_Returns1)
{
   constexpr int size = 2;
   int res = 1;
   int array[size] = {res, 0}; 
   EXPECT_EQ(max(array, size), res);
}

TEST(maximumOfArrayTest, ArrayOf1_0_0_Returns1)
{
   constexpr int size = 3;
   int res = 1;
   int array[size] = {res, 0, 0}; 
   EXPECT_EQ(max(array, size), res);
}

TEST(maximumOfArrayTest, ArrayOf0_1_0_Returns1)
{
   constexpr int size = 3;
   int res = 1;
   int array[size] = {0, res, 0}; 
   EXPECT_EQ(max(array, size), res);
}

TEST(maximumOfArrayTest, ArrayOf0_0_1_Returns1)
{
   constexpr int size = 3;
   int res = 1;
   int array[size] = {0, 0, 1}; 
   EXPECT_EQ(max(array, size), res);
}

TEST(maximumOfArrayTest, ArrayOf0_2_1_1_Returns2)
{
   constexpr int size = 4;
   int res = 2;
   int array[size] = {0, 2, 1,  1}; 
   EXPECT_EQ(max(array, size), res);
}

TEST(maximumOfArrayTest, ArrayOf25DifferentElements_ReturnsMax_968)
{
   constexpr int size = 25;
   int res{968};
   int array[size] = {28, 744, 20, 523, -741, 688, 646, -227, 392, 249, 968, 727, 583, 740, 4, 395, -49, 147, 14, 545, 220, 770, 780, 656, 0}; 
   EXPECT_EQ(max(array, size), res);
}