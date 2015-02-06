#include "csv_parser.hpp"

knt::CsvParser::CsvParser(std::string filename) {
  parse(filename);
}

bool knt::CsvParser::parse(std::string filename) {
  std::ifstream ifs(filename);

  if (!ifs) {
    std::cerr << "Error:file not found" << std::endl;
    return false;
  }
  std::string string_line;

  while (getline(ifs, string_line)) {
    std::string token;
    std::istringstream stream(string_line);

    std::vector<std::string> line;
    while (getline(stream, token, ',')) {
      line.push_back(token);
    }
    data_.push_back(line);
  }
  return true;
}
