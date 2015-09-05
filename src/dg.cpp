#include "datagenerator"
#include <map>
map<string,string> parse_args(int argc,char **argv) {
 cout << "this is parse_args." << endl;
}

int main(int argc, char **argv) {
  cout << "Hello, World\n";
  vector<string> valid_opts = {"--specstr","--rec-count","--help"};
  vector<string>::iterator v;
  for (v = valid_opts.begin();v != valid_opts.end();v++)
    cout << *v << endl; 
}

