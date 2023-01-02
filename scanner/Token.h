#include <Kind.h>
#include <string>

using std::string;

struct Token {
  Kind kind = Kind::Unknown;
  string string;
};