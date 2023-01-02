#include <Main.h>

auto main()->void {
  string sourceCode = R""""(
  function main() {
    printLine 'Hello, World!'
    printLine 1 + 2 + 3
  }
  )"""";

  auto tokenList = scan(sourceCode);
  printTokenList(tokenList);
}

auto printTokenList(vector<Token> tokenList)->void {
  cout << setw(12) << left << "KIND" << "STRING" << endl;
  cout << string(23, '-') << endl;
  for (auto& token: tokenList)
    cout << token << endl;
}
