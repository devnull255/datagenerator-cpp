#include "datagenerator"
#include <cassert>
#include <algorithm>

int main(void) {
  DataGenerator dg = DataGenerator("|");
  vector<string> names = dg.firstNames();
  vector<string>::iterator i;
  for (i = names.begin(); i != names.end(); i++)
     cout << *i << "\n";
  string firstName = dg.firstName();
  assert(find(names.begin(),names.end(),firstName) != names.end());
  cout << "dg.firstName() : " << firstName << "\n";
}

