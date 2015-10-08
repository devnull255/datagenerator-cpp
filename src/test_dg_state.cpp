#include "datagenerator"
#include <cassert>
#include <algorithm>

int main(void) {
  DataGenerator dg = DataGenerator("|");
  vector<string> states = dg.states();
  vector<string>::iterator i;
  for (i = states.begin(); i != states.end(); i++)
     cout << *i << "\n";
  string state = dg.state();
  assert(find(states.begin(),states.end(),state) != states.end());
  cout << "dg.state() : " << state << "\n";
}

