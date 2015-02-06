#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
namespace knt {
  class CsvParser {
  public:
    CsvParser();
    CsvParser(std::string filename);

    CsvParser(CsvParser const&) = delete;
    CsvParser(CsvParser&&) = delete;
    CsvParser& operator =(CsvParser const&) = delete;
    CsvParser& operator =(CsvParser &&) = delete;

    virtual ~CsvParser() = default;

    bool parse(std::string filename);
  private:
    std::vector<std::vector<std::string> > data_;
  };
}
