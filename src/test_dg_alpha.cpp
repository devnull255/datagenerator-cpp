#include "datagenerator"
#include <cassert>
#include <algorithm>
#include <cctype>

int main(void) {
  DataGenerator dg = DataGenerator("|");
  string op_code = dg.alpha(10);
  cout << op_code << endl;
  for (string::iterator i=op_code.begin(); i != op_code.end(); ++i)
       assert(isalpha(*i));
  return 0;
}

