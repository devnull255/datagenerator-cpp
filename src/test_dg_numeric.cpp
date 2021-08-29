#include "datagenerator"
#include <cassert>
#include <algorithm>
#include <cctype>

int main(void) {
  DataGenerator dg = DataGenerator("|");
  string digits = dg.numeric(10);
  cout << digits << endl;
  for (string::iterator i=digits.begin(); i != digits.end(); ++i)
       assert(isdigit(*i));
  return 0;
}

