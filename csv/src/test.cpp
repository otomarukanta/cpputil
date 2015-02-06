#include "gtest/gtest.h"
#include "csv_parser.hpp"

TEST(CsvParserTest, DelimiterTest) {
  knt::CsvParser parser("../testdata/rfc4180_1.txt");
  EXPECT_EQ(parser.get(0,0), "aaa");
}
