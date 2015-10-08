#include "datagenerator"
#include <cassert>
#include <algorithm>

int main(void) {
  DataGenerator dg = DataGenerator("|");
  vector<string> cities = dg.cities();
  vector<string>::iterator i;
  for (i = cities.begin(); i != cities.end(); i++)
     cout << *i << "\n";
  string city = dg.city();
  assert(find(cities.begin(),cities.end(),city) != cities.end());
  cout << "dg.city() : " << city << "\n";
}

