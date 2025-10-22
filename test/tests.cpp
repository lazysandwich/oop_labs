#include <gtest/gtest.h>
#include "../lab1/bad_number.h"

TEST(test_01, basic_test_set)
{
    ASSERT_TRUE(bad_number("Понедельник",12)==1);
}

TEST(test_02, basic_test_set)
{
    ASSERT_TRUE(bad_number("Понедельник",0)==0);
}

TEST(test_03, basic_test_set)
{
    ASSERT_TRUE(bad_number("Понедельник",-12)==0);
}

TEST(test_04, basic_test_set)
{
    ASSERT_TRUE(bad_number("Вторник",95)==0);
}

TEST(test_05, basic_test_set)
{
    ASSERT_TRUE(bad_number("Вторник",100)==1);
}

TEST(test_06, basic_test_set)
{
    ASSERT_TRUE(bad_number("Вторник",-96)==0);
}

TEST(test_07, basic_test_set)
{
    ASSERT_TRUE(bad_number("Вторник",96)==1);
}

TEST(test_08, basic_test_set)
{
    ASSERT_TRUE(bad_number("Среда",34)==1);
}

TEST(test_09, basic_test_set)
{
    ASSERT_TRUE(bad_number("Среда",33)==0);
}

TEST(test_10, basic_test_set)
{
    ASSERT_TRUE(bad_number("Среда",-34)==0);
}

TEST(test_11, basic_test_set)
{
    ASSERT_TRUE(bad_number("Четверг",0)==1);
}

TEST(test_12, basic_test_set)
{
    ASSERT_TRUE(bad_number("Четверг",10)==0);
}

TEST(test_13, basic_test_set)
{
    ASSERT_TRUE(bad_number("Четверг",-1)==0);
}

TEST(test_14, basic_test_set)
{
    ASSERT_TRUE(bad_number("Пятница",0)==1);
}

TEST(test_15, basic_test_set)
{
    ASSERT_TRUE(bad_number("Пятница",-2)==1);
}

TEST(test_16, basic_test_set)
{
    ASSERT_TRUE(bad_number("Пятница",10)==1);
}

TEST(test_17, basic_test_set)
{
    ASSERT_TRUE(bad_number("Пятница",11)==0);
}

TEST(test_18, basic_test_set)
{
    ASSERT_TRUE(bad_number("Суббота",55)==0);
}

TEST(test_19, basic_test_set)
{
    ASSERT_TRUE(bad_number("Суббота",-56)==0);
}

TEST(test_20, basic_test_set)
{
    ASSERT_TRUE(bad_number("Суббота",56)==1);
}

TEST(test_21, basic_test_set)
{
    ASSERT_TRUE(bad_number("Воскресенье",0)==0);
}

TEST(test_22, basic_test_set)
{
    ASSERT_TRUE(bad_number("Воскресенье",666)==1);
}

TEST(test_23, basic_test_set)
{
    ASSERT_TRUE(bad_number("Воскресенье",-666)==1);
}

TEST(test_24, basic_test_set)
{
    ASSERT_TRUE(bad_number("Воскресенье",10)==0);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
