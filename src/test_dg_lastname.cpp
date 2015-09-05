#include "datagenerator"
#include <cassert>
#include <algorithm>

int main(void) {
  DataGenerator dg = DataGenerator("|");
  vector<string> names = dg.lastNames();
  vector<string>::iterator i;
  for (i = names.begin(); i != names.end(); i++)
     cout << *i << "\n";
  string lastName = dg.lastName();
  assert(find(names.begin(),names.end(),lastName) != names.end());
  cout << "dg.lastName() : " << lastName << "\n";
}

