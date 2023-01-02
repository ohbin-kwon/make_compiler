#include <string>
#include <Token.h>
#include <vector>

using std::string;
using std::vector;

static string::iterator current;

auto scan(string sourceCode)->vector<Token> {
  vector<Token> result;
  sourceCode += "\0";
  current = sourceCode.begin();
  while (*current != '\0'){
  }
  result.push_back({Kind::EndOfToken});
  return result;
}