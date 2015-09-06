#include "datagenerator"
#include <map>
map<string,string> parse_args(int argc,char **argv) {
 map<string,string> arguments;
 arguments["--specstr"] = "";
 arguments["--rec-count"] = "10";
 arguments["--help"] = "Usage: dg [options";
 
 for (int i=1; i < argc; i++) {
   cout << argv[i] << endl;
 }
 cout << "this is parse_args." << endl;
}

int main(int argc, char **argv) {
  cout << "Hello, World\n";
  vector<string> valid_opts = {"--specstr","--rec-count","--help"};
  vector<string>::iterator v;
  for (v = valid_opts.begin();v != valid_opts.end();v++)
    cout << *v << endl; 
}

